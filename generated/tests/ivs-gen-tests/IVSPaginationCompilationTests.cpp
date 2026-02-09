/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IVS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ivs/IVSClientPagination.h>
#include <aws/ivs/IVSPaginationBase.h>
#include <aws/ivs/model/ListStreamsPaginationTraits.h>
#include <aws/ivs/model/ListRecordingConfigurationsPaginationTraits.h>
#include <aws/ivs/model/ListStreamKeysPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackRestrictionPoliciesPaginationTraits.h>
#include <aws/ivs/model/ListStreamSessionsPaginationTraits.h>
#include <aws/ivs/model/ListChannelsPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackKeyPairsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IVSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IVSPaginationCompilationTest, IVSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
