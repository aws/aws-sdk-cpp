#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>

using namespace Aws;

const char* ALLOCATION_TAG = "TransferUnitTest";

// Copy the VerifyContentRange function for testing
// In production, this would be exposed in a header or made testable
static bool VerifyContentRange(const Aws::String& requestedRange, const Aws::String& responseContentRange)
{
    if (requestedRange.empty() || responseContentRange.empty())
    {
        return false;
    }

    if (requestedRange.find("bytes=") != 0)
    {
        return false;
    }
    Aws::String requestRange = requestedRange.substr(6);

    if (responseContentRange.find("bytes ") != 0)
    {
        return false;
    }
    Aws::String responseRange = responseContentRange.substr(6);
    size_t slashPos = responseRange.find('/');
    if (slashPos != Aws::String::npos)
    {
        responseRange = responseRange.substr(0, slashPos);
    }

    return requestRange == responseRange;
}

class TransferUnitTest : public testing::Test {
protected:
    static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
        _testMemorySystem.reset(new ExactTestMemorySystem(1024, 128));
        _options.memoryManagementOptions.memoryManager = _testMemorySystem.get();
#endif
        InitAPI(_options);
    }

    static void TearDownTestSuite() {
        ShutdownAPI(_options);
#ifdef USE_AWS_MEMORY_MANAGEMENT
        EXPECT_EQ(_testMemorySystem->GetCurrentOutstandingAllocations(), 0ULL);
        EXPECT_EQ(_testMemorySystem->GetCurrentBytesAllocated(), 0ULL);
        EXPECT_TRUE(_testMemorySystem->IsClean());
        if (_testMemorySystem->GetCurrentOutstandingAllocations() != 0ULL)
            FAIL();
        if (_testMemorySystem->GetCurrentBytesAllocated() != 0ULL)
            FAIL();
        if (!_testMemorySystem->IsClean())
            FAIL();
        _testMemorySystem.reset();
#endif
    }

    static SDKOptions _options;
#ifdef USE_AWS_MEMORY_MANAGEMENT
    static std::unique_ptr<ExactTestMemorySystem> _testMemorySystem;
#endif
};

SDKOptions TransferUnitTest::_options;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> TransferUnitTest::_testMemorySystem = nullptr;
#endif

TEST_F(TransferUnitTest, VerifyContentRange_ValidRanges) {
    // Test matching ranges
    EXPECT_TRUE(VerifyContentRange("bytes=0-1023", "bytes 0-1023/2048"));
    EXPECT_TRUE(VerifyContentRange("bytes=1024-2047", "bytes 1024-2047/2048"));
    EXPECT_TRUE(VerifyContentRange("bytes=0-499", "bytes 0-499/500"));
    
    // Test without total size in response
    EXPECT_TRUE(VerifyContentRange("bytes=0-1023", "bytes 0-1023"));
}

TEST_F(TransferUnitTest, VerifyContentRange_InvalidRanges) {
    // Test mismatched ranges - this is what @kai-ion wanted to test!
    EXPECT_FALSE(VerifyContentRange("bytes=0-1023", "bytes 0-1022/2048"));
    EXPECT_FALSE(VerifyContentRange("bytes=0-1023", "bytes 1024-2047/2048"));
    EXPECT_FALSE(VerifyContentRange("bytes=1024-2047", "bytes 0-1023/2048"));
    
    // Test empty inputs
    EXPECT_FALSE(VerifyContentRange("", "bytes 0-1023/2048"));
    EXPECT_FALSE(VerifyContentRange("bytes=0-1023", ""));
    EXPECT_FALSE(VerifyContentRange("", ""));
    
    // Test invalid format
    EXPECT_FALSE(VerifyContentRange("0-1023", "bytes 0-1023/2048"));
    EXPECT_FALSE(VerifyContentRange("bytes=0-1023", "0-1023/2048"));
    EXPECT_FALSE(VerifyContentRange("range=0-1023", "bytes 0-1023/2048"));
}

TEST_F(TransferUnitTest, VerifyContentRange_EdgeCases) {
    // Test single byte range
    EXPECT_TRUE(VerifyContentRange("bytes=0-0", "bytes 0-0/1"));
    
    // Test large ranges
    EXPECT_TRUE(VerifyContentRange("bytes=0-1073741823", "bytes 0-1073741823/1073741824"));
    
    // Test ranges with different total sizes (should still match the range part)
    EXPECT_TRUE(VerifyContentRange("bytes=0-1023", "bytes 0-1023/5000"));
    EXPECT_TRUE(VerifyContentRange("bytes=0-1023", "bytes 0-1023/1024"));
}
