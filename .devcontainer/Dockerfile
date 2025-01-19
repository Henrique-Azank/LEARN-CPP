# Use an official image with GCC pre-installed
FROM ubuntu:22.04

# Install basic tools and dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    gdb \
    # cmake \
    git \
    curl \
    zip \
    unzip \
    tar
    # pkg-config \
    # python3

# # Install vcpkg
# RUN git clone https://github.com/microsoft/vcpkg.git /vcpkg && \
#     /vcpkg/bootstrap-vcpkg.sh

# # Add vcpkg to PATH
# ENV PATH="/vcpkg:${PATH}"

# Create a directory for the project
WORKDIR /workspace
