/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transfer-crt/DownloadStream.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#ifndef _GNU_SOURCE /* mkostemp() */
#define _GNU_SOURCE
#endif
#include <assert.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <sstream>

namespace Aws {
namespace TransferCrt {

namespace {
// Return the parent directory of @path, or an empty string if not possible.
Aws::String ParentPath(const Aws::String &path) {
  const size_t n = path.find_last_of(Aws::FileSystem::PATH_DELIM);
  return n == Aws::String::npos ? "" : path.substr(0, n);
}
} // namespace

/*
 * FileDescriptorBuf methods.
 */
int FileDescriptorBuf::overflow(int_type c) {
    return sync() == EOF ? EOF : (c == EOF ? 0 : sputc(c));
}

int FileDescriptorBuf::sync() {
    if (pbase() && pptr() > pbase()) {
        std::streamsize n = xsputn(pbase(), pptr() - pbase());
        if (n == EOF) {
            return EOF;
        }
        pbump(-n);
    }
    return 0;
}

// On failure, invoke the error callback with the description of the errno value.
// It also throws an ios::failure in case exceptions() has been called on the stream.
std::streamsize FileDescriptorBuf::xsputn(const char *data, std::streamsize datalen) {
    for (std::streamsize written = 0, n = 0; written < datalen; written += n) {
        n = ::write(fd_, data + written, datalen - written);
        if (n < 0 && errno != EINTR && errno != EAGAIN) {
            Aws::StringStream ss;
            ss << "write error: " << ::strerror(errno);
            errorCallback_(ss.str());
            return EOF;
        }
    }
    return datalen;
}

/*
 * DownloadStream methods.
 */
DownloadStream::DownloadStream(const Aws::String &dstPath, ErrorCallback ec, bool sync_always)
    : std::iostream{nullptr},
      dstPath_{dstPath},
      dstTempPath_{dstPath + ".partial.XXXXXX"},
      errorCallback_{ec} {
    const Aws::String parent_path = ParentPath(dstPath_);
    Aws::StringStream ss;

    assert(!dstPath_.empty());
    assert(errorCallback_);

    // Generate any missing directory components.
    if (!parent_path.empty() && !Aws::FileSystem::CreateDirectoryIfNotExists(parent_path.c_str(), true)) {
        ss << "Failed to create " << dstPath << " parent directories.";
        _error(ss.str());
        return;
    }

    // Produce unique temporary-file suffix. Use O_SYNC to ensure data gets written out to disk.
    fd_ = ::mkostemp(&dstTempPath_[0], sync_always ? O_SYNC : 0);
    if (fd_ < 0) {
        ss << "Failed to create " << dstTempPath_ << ": " << ::strerror(errno);
        _error(ss.str());
        return;
    }

    // Advise the kernel that the data used by @fd_ will not be accessed in the near time.
    if (::posix_fadvise(fd_, 0, 0, POSIX_FADV_DONTNEED) < 0) {
        ss << "Failed to posix_fadvise('" << dstTempPath_ << "'): " << ::strerror(errno);
        _error(ss.str());
        return;
    }

    buf_ = Aws::MakeUnique<FileDescriptorBuf>("FdBuf", fd_, [this](Aws::String writeError) {
        Aws::StringStream ss;
        ss << "Failed to write " << dstTempPath_ << ": " << std::move(writeError);
        _error(ss.str());
        return;
    });
    rdbuf(buf_.get());
}

void DownloadStream::close() noexcept {
    Aws::StringStream ss;
    std::lock_guard<std::mutex> closer(close_mutex_);

    if (eof()) {  // Idempotent.
        return;
    }

    // Call rdbuf()->pubsync() one last time, to empty the put-buffer:
    flush();

    setstate(std::ios::eofbit);

    if (fd_ > 0 && ::close(fd_) < 0) {
        ss << "Failed to close " << dstTempPath_ << ": " << ::strerror(errno);
        setstate(std::ios::failbit);
        _error(ss.str());
    }
    fd_ = -1;

    if (bad()) {
        _error("Stream is corrupt on close");
    } else if (!dstTempPath_.empty()) {
        if (::rename(dstTempPath_.c_str(), dstPath_.c_str())) {
            ss << "Failed to rename " << dstTempPath_ << ": " << ::strerror(errno);
            _error(ss.str());
        }
        dstTempPath_.clear();
    }
}

DownloadStream::~DownloadStream() {
    if (fd_ > 0) {
        ::close(fd_);
    }

    if (!dstTempPath_.empty()) {
        ::unlink(dstTempPath_.c_str());
    }
}

}  // namespace TransferCrt
}  // namespace Aws
