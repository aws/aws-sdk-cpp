/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PinpointSMSVoiceV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ClientPagination.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2PaginationBase.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeVerifiedDestinationNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationSectionDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListProtectConfigurationRuleSetNumberOverridesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationVersionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListRegistrationAssociationsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationTypeDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeProtectConfigurationsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PinpointSMSVoiceV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PinpointSMSVoiceV2PaginationCompilationTest, PinpointSMSVoiceV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
