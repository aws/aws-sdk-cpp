/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/transfer-crt/DownloadStream.h>

#include <fstream>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <gtest/gtest.h>

namespace Aws {
namespace TransferCrt {
namespace {

TEST(Construction, FileDescriptorBuf) {
    static_assert(!std::is_default_constructible<FileDescriptorBuf>{}, "Should not permit default construction");
    static_assert(!std::is_trivially_destructible<FileDescriptorBuf>{}, "Non-trivial destructor");
    static_assert(std::is_nothrow_destructible<FileDescriptorBuf>{}, "Should not throw during destruction");
    static_assert(!std::is_copy_constructible<FileDescriptorBuf>{}, "Should not have copy constructor");
    static_assert(!std::is_copy_assignable<FileDescriptorBuf>{}, "Should not permit copy assignment");
    static_assert(std::is_move_constructible<FileDescriptorBuf>{}, "Should be move-constructible");
    static_assert(std::is_move_assignable<FileDescriptorBuf>{}, "Should support move assignment");
    static_assert(!std::is_trivially_move_constructible<FileDescriptorBuf>{}, "Non-trivial move constructor");
    static_assert(!std::is_trivially_move_assignable<FileDescriptorBuf>{}, "Non-trivial move assignment");
}

TEST(Construction, DownloadStream) {
    static_assert(!std::is_default_constructible<DownloadStream>{}, "Should not permit default construction");
    static_assert(!std::is_trivially_destructible<DownloadStream>{}, "Non-trivial destructor");
    static_assert(std::is_nothrow_destructible<DownloadStream>{}, "Should not throw during destruction");
    static_assert(!std::is_copy_constructible<DownloadStream>{}, "Should not have copy constructor");
    static_assert(!std::is_copy_assignable<DownloadStream>{}, "Should not permit copy assignment");
    static_assert(!std::is_move_constructible<DownloadStream>{}, "Should not be move-constructible");
    static_assert(!std::is_move_assignable<DownloadStream>{}, "Should not support move assignment");
}

namespace {
// Return the parent directory of @path, or an empty string if not possible.
Aws::String ParentPath(const Aws::String &path) {
  const size_t n = path.find_last_of(Aws::FileSystem::PATH_DELIM);
  return n == Aws::String::npos ? "" : path.substr(0, n);
}

// Stolen from endpoint/BuiltInParameters.cpp.
bool StringEndsWith(const Aws::String& str, const Aws::String& suffix) {
    if (suffix.size() > str.size())
        return false;
    return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
}
} // namespace

// Test fixture to help set up / tear down DownloadStream test cases.
class DownloadStreamtest : public ::testing::Test {
 public:
    static void SetUpTestCase() {
        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());
    }
    static void TearDownTestCase() {
        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());
    }

    DownloadStreamtest() : dst_{GetTestFilesDirectory() + "/test.file"} {}
    ~DownloadStreamtest() { (void)UnlinkTestFile(); }

    // Open up a file descriptor to @dst_, creating any missing directory components.
    int TestFile() {
        const Aws::String parent_path = ParentPath(dst_);
        Aws::FileSystem::CreateDirectoryIfNotExists(parent_path.c_str(), true);
        return ::open(dst_.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0600);
    }

    // Remove @dst_ from the filesystem.
    int UnlinkTestFile() { return ::unlink(dst_.c_str()); }

    // Return the contents of @dst_.
    Aws::String TestFileContents() {
        Aws::StringStream ss;
        std::ifstream is{dst_};

        is >> std::noskipws >> ss.rdbuf();
        return ss.str();
    }

    static Aws::String GetTestFilesDirectory() {
        Aws::String directory;
#ifdef __ANDROID__
        directory = Aws::FileSystem::Join(Aws::Platform::GetCacheDirectory(), "TransferCrtTests");
#else
        directory = "TransferCrtTests";
#endif // __ANDROID__

        Aws::FileSystem::CreateDirectoryIfNotExists(directory.c_str());
        return directory;
    }

 protected:
    Aws::String dst_;
    Aws::String test_data_{"the quick brown fox jumps over the lazy lackadaisical lapdog"};
};

TEST_F(DownloadStreamtest, FdEnsureCallbackAndExceptionWork) {
    Aws::String errMsg;
    FileDescriptorBuf fdb(-1, [&errMsg](Aws::String e) { errMsg = std::move(e); });
    // ACTION
    ASSERT_EQ(fdb.sputn(test_data_.c_str(), test_data_.size()), EOF);
    // VERIFICATION
    EXPECT_EQ(errMsg, "write error: Bad file descriptor");
}

TEST_F(DownloadStreamtest, FdSupportedMethods) {
    // Test assumptions as to which methods are supported. Mostly VERIFICATION in this test.
    Aws::String errMsg;
    int fd = TestFile();
    FileDescriptorBuf fdb(fd, [&errMsg](Aws::String e) { errMsg = std::move(e); });
    char alternateBuf[128] = {0};

    ASSERT_GT(fd, 2);
    ASSERT_EQ(fdb.pubsync(), 0);
    ASSERT_EQ(fdb.sputc('a'), 'a');
    ASSERT_EQ(fdb.sputn(test_data_.c_str(), test_data_.size()), (std::streamsize)test_data_.size());
    ASSERT_EQ(errMsg, "");

    // Show that pubsetbuf has no effect on this class.
    ASSERT_EQ(::lseek(fd, 0, SEEK_SET), 0);
    ASSERT_EQ(::ftruncate(fd, 0), 0);

    ASSERT_EQ(fdb.pubsetbuf(alternateBuf, sizeof(alternateBuf)), &fdb);
    ASSERT_EQ(fdb.sputn(test_data_.c_str(), test_data_.size()), (std::streamsize)test_data_.size());
    ASSERT_EQ(::close(fd), 0);
    ASSERT_STREQ(alternateBuf, "");             // Nothing got transferred.
    ASSERT_EQ(TestFileContents(), test_data_);  // Wrote to fd, as intended.

    ASSERT_EQ(errMsg, "");
}

TEST_F(DownloadStreamtest, FdUnsupportedMethods) {
    // Document which methods are not supported. Mostly VERIFICATION in this test.
    Aws::String errMsg;
    int fd = TestFile();
    FileDescriptorBuf fdb(fd, [&errMsg](Aws::String e) { errMsg = std::move(e); });
    char buf[3] = {0};

    ASSERT_GT(fd, 2);

    ASSERT_EQ(fdb.pubseekoff(0, std::ios_base::beg), -1);
    ASSERT_EQ(fdb.pubseekoff(0, std::ios_base::cur), -1);
    ASSERT_EQ(fdb.pubseekoff(0, std::ios_base::end), -1);

    ASSERT_EQ(fdb.sputn(test_data_.c_str(), test_data_.size()), (std::streamsize)test_data_.size());
    ASSERT_EQ(fdb.pubseekpos(0), -1);
    ASSERT_EQ(fdb.pubseekpos(test_data_.size()), -1);

    ASSERT_EQ(fdb.in_avail(), 0);
    ASSERT_EQ(fdb.snextc(), -1);
    ASSERT_EQ(fdb.sbumpc(), -1);
    ASSERT_EQ(fdb.sgetc(), -1);
    ASSERT_EQ(fdb.sgetn(buf, sizeof(buf)), 0);
    ASSERT_EQ(fdb.sputbackc('a'), -1);
    ASSERT_EQ(fdb.sungetc(), -1);

    ASSERT_EQ(errMsg, "");
}

TEST_F(DownloadStreamtest, DownloadStreamHappyPath) {
    // Document expected use case in ACTION/VERIFICATION blocks.
    Aws::String errMsg;
    DownloadStream d{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};

    d << test_data_;
    ASSERT_TRUE(d.good());
    ASSERT_FALSE(d.eof());

    d.close();
    ASSERT_FALSE(d.bad());
    ASSERT_FALSE(d.fail());
    ASSERT_TRUE(d.eof());

    ASSERT_EQ(TestFileContents(), test_data_);
    ASSERT_EQ(errMsg, "");
}

TEST_F(DownloadStreamtest, SupportedMethodsShouldSucceed) {
    // Document expected use-cases for supported methods in ACTION/VERIFICATION blocks.
    Aws::String errMsg;
    DownloadStream d{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};

    // These characters use the internal buffer (testing flush), for strings xsputn is called.
    for (const char &c : test_data_) {
        d.put(c);
    }
    ASSERT_TRUE(d.good());

    d << test_data_;
    ASSERT_TRUE(d.good());

    d.write(test_data_.c_str(), test_data_.size());
    ASSERT_TRUE(d.good());

    d.close();
    ASSERT_FALSE(d.fail());

    // Call flush() after the file has been closed; to require that close() flushed the buffer.
    d.flush();
    ASSERT_FALSE(d.fail());
    ASSERT_TRUE(d.eof());

    ASSERT_EQ(TestFileContents(), test_data_ + test_data_ + test_data_);
    ASSERT_EQ(errMsg, "");
}

TEST_F(DownloadStreamtest, DownloadStreamUnsupportedMethods) {
    // Document unsupported methods via VERIFICATION (ASSERT) statements.
    Aws::String errMsg;
    DownloadStream d{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};

    d << test_data_;
    ASSERT_TRUE(d.good());

    ASSERT_EQ(d.get(), -1);
    ASSERT_TRUE(d.fail() && !d.bad() && d.eof());

    d.clear();
    ASSERT_EQ(d.peek(), -1);
    ASSERT_FALSE(d.good());
    ASSERT_TRUE(d.eof());

    d.clear();
    ASSERT_EQ(d.tellg(), -1);
    ASSERT_TRUE(d.good());

    d.seekg(0);
    ASSERT_TRUE(d.fail() && !d.bad() && !d.eof());

    d.clear();
    ASSERT_EQ(d.sync(), 0);
    ASSERT_TRUE(d.good());
    ASSERT_TRUE(d.flush().good());

    // Ensure the data is written out despite the failures in between:
    d.close();
    ASSERT_EQ(TestFileContents(), test_data_);

    // It is now too late to flush any data:
    ASSERT_TRUE(d.eof());
    ASSERT_EQ(d.sync(), -1);
    ASSERT_TRUE(d.fail() && !d.bad() && d.eof());

    // Flush proceeds without error, since the put buffer was empty:
    d.clear();
    ASSERT_TRUE(d.flush().good());

    ASSERT_EQ(errMsg, "");
    ASSERT_EQ(UnlinkTestFile(), 0);

    // Try flush again with non-empty put buffer:
    DownloadStream d2{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};
    for (const char &c : test_data_) {
        d2.put(c);
    }
    ASSERT_TRUE(d2.good());

    d2.close();
    ASSERT_TRUE(!d2.fail() && !d2.bad() && d2.eof());

    // The following is only false at eof since we empty the put-buffer in close():
    ASSERT_FALSE(d2.flush().bad());

    ASSERT_EQ(TestFileContents(), test_data_);
    ASSERT_EQ(errMsg, "");
}

TEST_F(DownloadStreamtest, EnsureOutputDoesNotExistIfStreamIsCorrupted) {
    // When a stream is corrupted (badbit set), ensure that no output file is generated.
    Aws::String errMsg;
    DownloadStream d{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};

    d << test_data_;
    ASSERT_TRUE(d.good());
    ASSERT_FALSE(d.eof());

    // ACTION
    d.setstate(std::ios::badbit);
    d.close();

    // VERIFICATION
    ASSERT_EQ(d.rdstate(), std::ios::badbit | std::ios::eofbit | std::ios::failbit);
    ASSERT_EQ(errMsg, "Stream is corrupt on close");
    ASSERT_EQ(::access(dst_.c_str(), F_OK), -1);
}

TEST_F(DownloadStreamtest, PermissionsError) {
    Aws::String errMsg;
    DownloadStream d{dst_, [&errMsg](Aws::String e) { errMsg = std::move(e); }};

    // ACTION
    // Change the directory permissions so that renaming the file will fail:
    ASSERT_EQ(::chmod(ParentPath(dst_).c_str(), 0), 0);

    d << test_data_;
    ASSERT_TRUE(d.good());

    d.close();
    ASSERT_TRUE(d.fail() && d.bad() && d.eof());

    // VERIFICATION
    EXPECT_TRUE(StringEndsWith(errMsg, "Permission denied"));

    // CLEAN-UP (need to restore directory permissions to enable deletion).
    ASSERT_EQ(::chmod(ParentPath(dst_).c_str(), 755), 0);
}

}  // namespace
}  // namespace TransferCrt
}  // namespace Aws
