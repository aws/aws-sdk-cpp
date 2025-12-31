#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/HeadObjectResult.h>
#include <aws/transfer/TransferManager.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <sstream>
#include <fstream>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Transfer;
using namespace Aws::Utils::Threading;

const char* ALLOCATION_TAG = "TransferUnitTest";

class MockS3Client : public S3Client {
public:
    MockS3Client() : S3Client(){};

    GetObjectOutcome GetObject(const GetObjectRequest& request) const override {
        GetObjectResult result;

        if (request.RangeHasBeenSet()) {
            // Always return mismatched range to trigger validation failure
            result.SetContentRange("bytes 1024-2047/2048");
        }

        auto stream = Aws::New<std::stringstream>(ALLOCATION_TAG);
        *stream << "mock data";
        result.ReplaceBody(stream);
        return GetObjectOutcome(std::move(result));
    }
};

class MockMultipartS3Client : public S3Client {
public:
    Aws::String FULL_OBJECT_CHECKSUM; //"SBi/K+1ooBg="
    MockMultipartS3Client(Aws::String expected_checksum) : S3Client() {
        FULL_OBJECT_CHECKSUM = expected_checksum;
    };

    HeadObjectOutcome HeadObject(const HeadObjectRequest&) const override {
        HeadObjectResult result;
        result.SetContentLength(78643200);
        result.SetChecksumCRC64NVME(FULL_OBJECT_CHECKSUM);
        result.SetChecksumType(Aws::S3::Model::ChecksumType::FULL_OBJECT);  // This is key!
        result.SetETag("\"test-etag-12345\"");  // Add ETag
        return HeadObjectOutcome(std::move(result));
    }

    GetObjectOutcome GetObject(const GetObjectRequest& request) const override {
        GetObjectResult result;

        const uint64_t totalSize = 78643200;
        const uint64_t partSize = 5242880;
        const std::vector<Aws::String> checksums = {
            "wAQOkgd/LJk=", "zfmsUj6AZfs=", "oyENjcGDHcY=", "wAQOkgd/LJk=", "zfmsUj6AZfs=",
            "oyENjcGDHcY=", "wAQOkgd/LJk=", "zfmsUj6AZfs=", "oyENjcGDHcY=", "wAQOkgd/LJk=",
            "zfmsUj6AZfs=", "oyENjcGDHcY=", "wAQOkgd/LJk=", "zfmsUj6AZfs=", "oyENjcGDHcY="
        };

        if (request.RangeHasBeenSet()) {
            auto range = request.GetRange();
            size_t dashPos = range.find('-');
            uint64_t start = std::stoull(range.substr(6, dashPos - 6).c_str());
            uint64_t end = std::stoull(range.substr(dashPos + 1).c_str());
            uint64_t size = end - start + 1;

            int partNum = static_cast<int>(start) / partSize;
            if (partNum < 15) {
                result.SetContentRange(Aws::String("bytes ") + Aws::String(std::to_string(start).c_str()) + "-" + Aws::String(std::to_string(end).c_str()) + "/" + Aws::String(std::to_string(totalSize).c_str()));
                result.SetChecksumCRC64NVME(checksums[partNum]);
                result.SetContentLength(size);
                result.SetETag(Aws::String("\"part-etag-") + Aws::String(std::to_string(partNum).c_str()) + "\"");

                // Call the response stream factory if provided
                if (request.GetResponseStreamFactory()) {
                    auto responseStream = request.GetResponseStreamFactory()();

                    // Write part-specific data to the response stream
                    char partChar = 'A' + (partNum % 3);
                    for (uint64_t i = 0; i < size; ++i) {
                        responseStream->put(partChar);
                    }
                    responseStream->flush();

                    // Simulate data received callback to track bytes transferred
                    if (request.GetDataReceivedEventHandler()) {
                        request.GetDataReceivedEventHandler()(nullptr, nullptr, size);
                    }

                    result.ReplaceBody(responseStream);
                } else {
                    // Fallback for non-factory requests
                    auto stream = Aws::New<std::stringstream>(ALLOCATION_TAG);
                    char partChar = 'A' + (partNum % 3);
                    for (uint64_t i = 0; i < size; ++i) {
                        stream->put(partChar);
                    }
                    stream->seekg(0, std::ios::beg);
                    result.ReplaceBody(stream);
                }
            }
        }

        return GetObjectOutcome(std::move(result));
    }
};

class TransferUnitTest : public testing::Test {
protected:
    void SetUp() override {
        executor = Aws::MakeShared<PooledThreadExecutor>(ALLOCATION_TAG, 1);
        mockS3Client = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG);
        mockMultipartS3Client = Aws::MakeShared<MockMultipartS3Client>(ALLOCATION_TAG, "SBi/K+1ooBg=");
    }

    static void SetUpTestSuite() {
        InitAPI(_options);
    }

    static void TearDownTestSuite() {
        ShutdownAPI(_options);
    }

    std::shared_ptr<PooledThreadExecutor> executor;
    std::shared_ptr<MockS3Client> mockS3Client;
    std::shared_ptr<MockMultipartS3Client> mockMultipartS3Client;
    static SDKOptions _options;
};

SDKOptions TransferUnitTest::_options;

TEST_F(TransferUnitTest, ContentValidationShouldFail) {
    TransferManagerConfiguration config(executor.get());
    config.s3Client = mockS3Client;
    auto transferManager = TransferManager::Create(config);

    auto createStreamFn = []() {
        return Aws::New<std::stringstream>(ALLOCATION_TAG);
    };

    // Request bytes 0-1023 but mock returns 1024-2047, should fail validation
    auto handle = transferManager->DownloadFile("test-bucket", "test-key", 0, 1024, createStreamFn);
    handle->WaitUntilFinished();

    EXPECT_EQ(TransferStatus::FAILED, handle->GetStatus());
}

TEST_F(TransferUnitTest, MultipartDownloadTest) {
    TransferManagerConfiguration config(executor.get());
    config.s3Client = mockMultipartS3Client;
    config.bufferSize = 5242880;  // 5MB to ensure multipart
    auto transferManager = TransferManager::Create(config);

    // Create a temporary file for download since multipart needs seekable stream
    std::string tempFile;
#ifdef _WIN32
    char tempPath[MAX_PATH];
    GetTempPathA(MAX_PATH, tempPath);
    tempFile = std::string(tempPath) + "test_download_" + std::to_string(rand());
#else
    tempFile = "/tmp/test_download_" + std::to_string(rand());
#endif
    auto createStreamFn = [tempFile]() -> Aws::IOStream* {
        return Aws::New<Aws::FStream>(ALLOCATION_TAG, tempFile.c_str(),
                                      std::ios_base::out | std::ios_base::in |
                                      std::ios_base::binary | std::ios_base::trunc);
    };

    // Download the full 78MB file
    auto handle = transferManager->DownloadFile("test-bucket", "test-key", createStreamFn);
    handle->WaitUntilFinished();

    // Test multipart download functionality - should PASS with correct checksum
    EXPECT_TRUE(handle->IsMultipart());
    EXPECT_EQ(78643200u, handle->GetBytesTotalSize());
    EXPECT_EQ(15u, handle->GetCompletedParts().size());
    EXPECT_EQ(0u, handle->GetFailedParts().size());
    EXPECT_EQ(0u, handle->GetPendingParts().size());
    EXPECT_EQ(TransferStatus::COMPLETED, handle->GetStatus());  // Should PASS

    // Clean up
    std::remove(tempFile.c_str());
}

TEST_F(TransferUnitTest, MultipartDownloadTest_Fail) {
    TransferManagerConfiguration config(executor.get());
    auto mockFailClient = Aws::MakeShared<MockMultipartS3Client>(ALLOCATION_TAG, "WRONG_CHECKSUM=");
    config.s3Client = mockFailClient;
    config.bufferSize = 5242880;  // 5MB to ensure multipart
    auto transferManager = TransferManager::Create(config);

    // Create a temporary file for download since multipart needs seekable stream
    std::string tempFile;
#ifdef _WIN32
    char tempPath[MAX_PATH];
    GetTempPathA(MAX_PATH, tempPath);
    tempFile = std::string(tempPath) + "test_download_" + std::to_string(rand());
#else
    tempFile = "/tmp/test_download_" + std::to_string(rand());
#endif
    auto createStreamFn = [tempFile]() -> Aws::IOStream* {
        return Aws::New<Aws::FStream>(ALLOCATION_TAG, tempFile.c_str(),
                                      std::ios_base::out | std::ios_base::in |
                                      std::ios_base::binary | std::ios_base::trunc);
    };

    // Download the full 78MB file
    auto handle = transferManager->DownloadFile("test-bucket", "test-key", createStreamFn);
    handle->WaitUntilFinished();

    // Test multipart download functionality - should FAIL with wrong checksum
    EXPECT_TRUE(handle->IsMultipart());
    EXPECT_EQ(78643200u, handle->GetBytesTotalSize());
    EXPECT_EQ(15u, handle->GetCompletedParts().size());
    EXPECT_EQ(0u, handle->GetFailedParts().size());
    EXPECT_EQ(0u, handle->GetPendingParts().size());
    EXPECT_EQ(TransferStatus::FAILED, handle->GetStatus());  // Should FAIL due to wrong checksum
    EXPECT_EQ("Full-object checksum validation failed", handle->GetLastError().GetMessage());

    // Clean up
    std::remove(tempFile.c_str());
}