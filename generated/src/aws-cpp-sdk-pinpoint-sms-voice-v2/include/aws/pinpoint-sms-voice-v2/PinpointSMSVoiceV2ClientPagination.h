/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Client.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeProtectConfigurationsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationSectionDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationTypeDefinitionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationVersionsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeVerifiedDestinationNumbersPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListProtectConfigurationRuleSetNumberOverridesPaginationTraits.h>
#include <aws/pinpoint-sms-voice-v2/model/ListRegistrationAssociationsPaginationTraits.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {

using DescribeAccountAttributesPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeAccountAttributesRequest,
                                      Pagination::DescribeAccountAttributesPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeAccountLimitsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeAccountLimitsRequest,
                                      Pagination::DescribeAccountLimitsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeConfigurationSetsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeConfigurationSetsRequest,
                                      Pagination::DescribeConfigurationSetsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeKeywordsPaginator = Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeKeywordsRequest,
                                                                    Pagination::DescribeKeywordsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeOptedOutNumbersPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeOptedOutNumbersRequest,
                                      Pagination::DescribeOptedOutNumbersPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeOptOutListsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeOptOutListsRequest,
                                      Pagination::DescribeOptOutListsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribePhoneNumbersPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribePhoneNumbersRequest,
                                      Pagination::DescribePhoneNumbersPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribePoolsPaginator = Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribePoolsRequest,
                                                                 Pagination::DescribePoolsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeProtectConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeProtectConfigurationsRequest,
                                      Pagination::DescribeProtectConfigurationsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationAttachmentsRequest,
                                      Pagination::DescribeRegistrationAttachmentsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationFieldDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationFieldDefinitionsRequest,
                                      Pagination::DescribeRegistrationFieldDefinitionsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationFieldValuesPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationFieldValuesRequest,
                                      Pagination::DescribeRegistrationFieldValuesPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationsRequest,
                                      Pagination::DescribeRegistrationsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationSectionDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationSectionDefinitionsRequest,
                                      Pagination::DescribeRegistrationSectionDefinitionsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationTypeDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationTypeDefinitionsRequest,
                                      Pagination::DescribeRegistrationTypeDefinitionsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeRegistrationVersionsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeRegistrationVersionsRequest,
                                      Pagination::DescribeRegistrationVersionsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeSenderIdsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeSenderIdsRequest,
                                      Pagination::DescribeSenderIdsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeSpendLimitsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeSpendLimitsRequest,
                                      Pagination::DescribeSpendLimitsPaginationTraits<PinpointSMSVoiceV2Client>>;
using DescribeVerifiedDestinationNumbersPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::DescribeVerifiedDestinationNumbersRequest,
                                      Pagination::DescribeVerifiedDestinationNumbersPaginationTraits<PinpointSMSVoiceV2Client>>;
using ListPoolOriginationIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::ListPoolOriginationIdentitiesRequest,
                                      Pagination::ListPoolOriginationIdentitiesPaginationTraits<PinpointSMSVoiceV2Client>>;
using ListProtectConfigurationRuleSetNumberOverridesPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::ListProtectConfigurationRuleSetNumberOverridesRequest,
                                      Pagination::ListProtectConfigurationRuleSetNumberOverridesPaginationTraits<PinpointSMSVoiceV2Client>>;
using ListRegistrationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointSMSVoiceV2Client, Model::ListRegistrationAssociationsRequest,
                                      Pagination::ListRegistrationAssociationsPaginationTraits<PinpointSMSVoiceV2Client>>;

}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
