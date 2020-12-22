# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image
FROM rikorose/gcc-cmake:latest

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/SCL
WORKDIR /usr/src/SCL

RUN chmod +x ./run.sh

# This command runs your application, comment out this line to compile only
CMD ["./run.sh"]

LABEL Name=SrourChainLib=0.1.0
