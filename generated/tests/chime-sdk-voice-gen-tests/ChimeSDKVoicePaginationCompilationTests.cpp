/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ChimeSDKVoice pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime-sdk-voice/ChimeSDKVoiceClientPagination.h>
#include <aws/chime-sdk-voice/ChimeSDKVoicePaginationBase.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorGroupsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListSipRulesPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListSipMediaApplicationsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfilesPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfileDomainsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimeSDKVoicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimeSDKVoicePaginationCompilationTest, ChimeSDKVoicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
