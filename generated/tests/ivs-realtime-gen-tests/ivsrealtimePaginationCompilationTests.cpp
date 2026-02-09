/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ivsrealtime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ivs-realtime/IvsrealtimeClientPagination.h>
#include <aws/ivs-realtime/IvsrealtimePaginationBase.h>
#include <aws/ivs-realtime/model/ListParticipantsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListParticipantEventsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListParticipantReplicasPaginationTraits.h>
#include <aws/ivs-realtime/model/ListCompositionsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStageSessionsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListPublicKeysPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStagesPaginationTraits.h>
#include <aws/ivs-realtime/model/ListIngestConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ivsrealtimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ivsrealtimePaginationCompilationTest, ivsrealtimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
