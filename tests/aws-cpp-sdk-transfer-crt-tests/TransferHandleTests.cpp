/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/transfer-crt/TransferManager.h>
#include <fstream>
#include <iostream>

#include <gtest/gtest.h>

namespace Aws {
namespace TransferCrt {
namespace {
/*
 * TransferHandle Tests.
 */
TEST(TransferHandleTest, DefaultValues) {
    TransferHandle th{"s3://some.bucket/some.path", {}};

    ASSERT_TRUE(th.ShouldContinue());
    ASSERT_FALSE(th.BytesTotalSizeHasBeenSet());
    ASSERT_EQ(th.GetBytesTransferred(), 0u);
    ASSERT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);
    ASSERT_EQ(th.GetLastError().GetErrorType(), S3Crt::S3CrtErrors::UNKNOWN);
    ASSERT_EQ(th.GetLastError().GetMessage(), "");
    ASSERT_EQ(th.GetLastError().GetExceptionName(), "");
    ASSERT_TRUE(th.GetLastError().ShouldRetry());
}

TEST(TransferHandleTest, ReadMetadata) {
    TransferHandle th{"s3://some.bucket/some.path", {}};

    th.SetBytesTotalSize(42);

    // VERIFICATION
    EXPECT_EQ(th.GetReadMetadata().size, 42u);

    // Validate default values:
    EXPECT_NE(th.GetReadMetadata().content_encoding, "gzip");
    EXPECT_EQ(th.GetReadMetadata().content_type, "");
    EXPECT_EQ(th.GetReadMetadata().metadata.size(), 0u);
}

TEST(TransferHandleTest, StateMachine) {
    TransferHandle th{"s3://some.bucket/some.path", {}};

    // Initial state.
    ASSERT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);

    // NOT_STARTED => IN_PROGRESS
    th.UpdateStatus(TransferStatus::IN_PROGRESS);
    ASSERT_EQ(th.GetStatus(), TransferStatus::IN_PROGRESS);

    // IN_PROGRESS => NOT_STARTED
    th.UpdateStatus(TransferStatus::NOT_STARTED);
    ASSERT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);

    // NOT_STARTED => COMPLETED
    th.UpdateStatus(TransferStatus::COMPLETED);
    ASSERT_EQ(th.GetStatus(), TransferStatus::COMPLETED);
}

TEST(TransferHandleTest, FailingATransfer) {
    // Mimic a TransferHandle on which FailWithError is called shortly after construction.
    TransferHandle th{"s3://some.bucket/some.path", {}};

    // PRECONDITION
    ASSERT_TRUE(th.ShouldContinue());

    // ACTION
    th.UpdateStatus(TransferStatus::FAILED);
    th.SetError({S3Crt::S3CrtErrors::UNKNOWN, "FATAL ERROR", "Something went wrong", false});

    // VERIFICATION
    EXPECT_FALSE(th.ShouldContinue());
    EXPECT_EQ(th.GetStatus(), TransferStatus::FAILED);
    EXPECT_EQ(th.GetLastError().GetErrorType(), S3Crt::S3CrtErrors::UNKNOWN);
    EXPECT_EQ(th.GetLastError().GetMessage(), "Something went wrong");
    EXPECT_EQ(th.GetLastError().GetExceptionName(), "FATAL ERROR");
}

TEST(TransferHandleTest, UpdateStatusIsIdempotent) {
    // NOT_STARTED is the initial state. Can not set it again.
    {
        TransferHandle th{"s3://some.bucket/some.path", {}};

        ASSERT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);
        th.UpdateStatus(TransferStatus::NOT_STARTED);
        EXPECT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);
    }

    // Can update to IN_PROGRESS at most once.
    {
        TransferHandle th{"s3://some.bucket/some.path", {}};
        th.UpdateStatus(TransferStatus::NOT_STARTED);
        th.UpdateStatus(TransferStatus::IN_PROGRESS);
        th.UpdateStatus(TransferStatus::IN_PROGRESS);
        EXPECT_EQ(th.GetStatus(), TransferStatus::IN_PROGRESS);
    }

    // May transition from IN_PROGRESS back to NOT_STARTED (not currently used by the code).
    {
        TransferHandle th{"s3://some.bucket/some.path", {}};

        ASSERT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);
        th.UpdateStatus(TransferStatus::IN_PROGRESS);
        EXPECT_EQ(th.GetStatus(), TransferStatus::IN_PROGRESS);

        th.UpdateStatus(TransferStatus::NOT_STARTED);
        th.UpdateStatus(TransferStatus::NOT_STARTED);
        EXPECT_EQ(th.GetStatus(), TransferStatus::NOT_STARTED);

        th.UpdateStatus(TransferStatus::IN_PROGRESS);
        th.UpdateStatus(TransferStatus::IN_PROGRESS);
        EXPECT_EQ(th.GetStatus(), TransferStatus::IN_PROGRESS);
    }

    // Once a final state is reached, no more state transitions are possible.
    {
        for (auto &&finalState : {
                 TransferStatus::CANCELED,
                 TransferStatus::FAILED,
                 TransferStatus::COMPLETED,
             }) {
            TransferHandle th{"s3://some.bucket/some.path", {}};

            th.UpdateStatus(finalState);

            for (auto &&testState : {
                     TransferStatus::NOT_STARTED,
                     TransferStatus::IN_PROGRESS,
                     TransferStatus::FAILING,
                     TransferStatus::CANCELED,
                     TransferStatus::FAILED,
                     TransferStatus::COMPLETED,
                 }) {
                th.UpdateStatus(testState);
                EXPECT_EQ(th.GetStatus(), finalState);
            }
        }
    }
}

TEST(TransferHandleTest, Upload) {
    // Validate handling of upload parameters.
    WriteMetadata wmd{"s3://some.bucket/some.path"};
    TransferHandle th{wmd, {}};

    // Need to initialize the ReadMetadata (size must be set in order to call GetReadMetadata()).
    th.SetBytesTotalSize(42);

    // VERIFICATION
    EXPECT_EQ(th.GetBucket(), "some.bucket");
    EXPECT_EQ(th.GetKey(), "some.path");
    EXPECT_EQ(th.GetReadMetadata().content_type, "");
    EXPECT_EQ(th.GetReadMetadata().content_encoding, "");
}

TEST(TransferHandleTest, UploadMetadata) {
    // Validate encoding of non-ASCII metadata.
    WriteMetadata wmd{"s3://some.bucket/some.path"};
    wmd.metadata = {{"src", "Âûröræ"}, {"dst", "ÄMÄZÕÑ S3"}, {"purpose", "upload"}};
    TransferHandle th{wmd, {}};

    // Need to initialize the ReadMetadata (see above).
    th.SetBytesTotalSize(0);

    // VERIFICATION
    ASSERT_EQ(th.GetReadMetadata().metadata.size(), wmd.metadata.size());
    EXPECT_EQ(th.GetReadMetadata().metadata, wmd.metadata);
}

TEST(TransferHandleTest, UploadGzipped) {
    // Ensure compressed (gzip) upload is handled as expected.
    WriteMetadata wmd{"s3://", "text/plain", "gzip"};
    TransferHandle th{wmd, {}};

    th.SetBytesTotalSize(0);  // Needed to initialize ReadMetadata.

    ASSERT_EQ(th.GetReadMetadata().content_type, "text/plain");
    ASSERT_EQ(th.GetReadMetadata().content_encoding, "gzip");
}

/*
 * Parameterized test to check combinations of (terminal) TransferStatus states.
 */
class DownloadHandleFixture : public ::testing::TestWithParam<TransferStatus> {
 protected:
    TransferHandle th{"s3://some.bucket/some.path", {}};
};

TEST_P(DownloadHandleFixture, TerminalStatesMustNotBeChanged) {
    const TransferStatus cs = GetParam();

    th.UpdateStatus(cs);
    ASSERT_EQ(th.GetStatus(), cs);

    for (const auto &ts : {TransferStatus::NOT_STARTED,
                           TransferStatus::IN_PROGRESS,
                           TransferStatus::CANCELED,
                           TransferStatus::FAILED,
                           TransferStatus::COMPLETED}) {
        th.UpdateStatus(ts);
        ASSERT_EQ(th.GetStatus(), cs);
        if (ts != cs) {
            ASSERT_NE(th.GetStatus(), ts);
        }
    }
}

// Test the combinations of terminal states.
INSTANTIATE_TEST_SUITE_P(TerminalStatesTests,
                         DownloadHandleFixture,
                         ::testing::Values(TransferStatus::CANCELED,
                                           TransferStatus::FAILED,
                                           TransferStatus::COMPLETED));

/*
 * Limited TransferManager tests (full tests require network).
 */
class TransferManagerTest : public ::testing::Test {};

TEST_F(TransferManagerTest, AsyncCallerContext) {
    auto ctx = std::make_shared<const Aws::Client::AsyncCallerContext>();
    // Pre-condition
    EXPECT_EQ(ctx.use_count(), 1);
    {
        // Context is passed as const std:shared_ptr<>&, but copy-constructed internally.
        // Verify that the use-count behaves as expected.
        TransferHandle th{"s3://some.bucket/some.path", ctx};
        EXPECT_EQ(ctx.use_count(), 2);
        EXPECT_EQ(th.GetContext().use_count(), 3);
        EXPECT_EQ(ctx.use_count(), 2);
    }
    EXPECT_EQ(ctx.use_count(), 1);
}

TEST_F(TransferManagerTest, DownloadPaths) {
    // Ensure that an initialization failure is caught and handled.
    auto mgr = TransferManager::Create(nullptr, {}, {}, {});

    // Attempt to create a file below an invalid path.
    {
        auto th = mgr->DownloadFile("s3://", "/a.path **that does not exist**!");

        EXPECT_EQ(th->GetStatus(), TransferStatus::FAILED);
        EXPECT_FALSE(th->ShouldContinue());
        EXPECT_EQ(th->GetLastError().GetExceptionName(), "DownloadStream Failure");
    }
}

TEST_F(TransferManagerTest, UploadPaths) {
    WriteMetadata s3_uri{"s3://some.bucket/some.path"};

    // Open a non-existing file.
    {
        auto mgr = TransferManager::Create(nullptr, {}, {}, {});
        auto th = mgr->UploadFile("/.no::such^path!", {}, s3_uri);

        EXPECT_EQ(th->GetStatus(), TransferStatus::FAILED);
        EXPECT_FALSE(th->ShouldContinue());
        EXPECT_EQ(th->GetLastError().GetExceptionName(), "FATAL ERROR");
    }

    // Pass a bad (closed) input stream.
    {
        auto mgr = TransferManager::Create(nullptr, {}, {}, {});
        auto is = std::make_shared<std::fstream>("/bin/ls");
        is->close();

        auto th = mgr->UploadFile("", is, s3_uri);
        EXPECT_EQ(th->GetStatus(), TransferStatus::FAILED);
        EXPECT_FALSE(th->ShouldContinue());
        EXPECT_EQ(th->GetLastError().GetMessage(), "Failed to open stream '': Permission denied");
        EXPECT_EQ(th->GetLastError().GetExceptionName(), "FATAL ERROR");
    }

    // Pass a non-seekable input stream.
    {
        auto mgr = TransferManager::Create(nullptr, {}, {}, {});
        auto is = std::make_shared<std::iostream>(std::cout.rdbuf());
        auto th = mgr->UploadFile("", is, s3_uri);

        EXPECT_EQ(th->GetStatus(), TransferStatus::FAILED);
        EXPECT_FALSE(th->ShouldContinue());
        EXPECT_EQ(th->GetLastError().GetMessage(), "Failed to determine size of '': Illegal seek");
        EXPECT_EQ(th->GetLastError().GetExceptionName(), "FATAL ERROR");
    }
}

}  // namespace
}  // namespace TransferCrt
}  // namespace Aws
