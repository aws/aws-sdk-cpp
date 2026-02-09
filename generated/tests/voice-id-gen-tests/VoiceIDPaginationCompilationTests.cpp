/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for VoiceID pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/voice-id/VoiceIDClientPagination.h>
#include <aws/voice-id/VoiceIDPaginationBase.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakersPaginationTraits.h>
#include <aws/voice-id/model/ListWatchlistsPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsPaginationTraits.h>
#include <aws/voice-id/model/ListFraudstersPaginationTraits.h>
#include <aws/voice-id/model/ListDomainsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class VoiceIDPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(VoiceIDPaginationCompilationTest, VoiceIDPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
