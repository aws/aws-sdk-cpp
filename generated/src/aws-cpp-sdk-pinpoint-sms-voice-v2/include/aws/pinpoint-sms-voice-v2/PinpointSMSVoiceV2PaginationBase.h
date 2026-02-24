/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace PinpointSMSVoiceV2 {

class PinpointSMSVoiceV2Client;

template <typename DerivedClient>
class PinpointSMSVoiceV2PaginationBase {
 public:
  /**
   * Create a paginator for DescribeAccountAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountAttributesRequest,
                                    Pagination::DescribeAccountAttributesPaginationTraits<DerivedClient>>
  DescribeAccountAttributesPaginator(const Model::DescribeAccountAttributesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountAttributesRequest,
                                             Pagination::DescribeAccountAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAccountLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                    Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>
  DescribeAccountLimitsPaginator(const Model::DescribeAccountLimitsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                             Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConfigurationSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationSetsRequest,
                                    Pagination::DescribeConfigurationSetsPaginationTraits<DerivedClient>>
  DescribeConfigurationSetsPaginator(const Model::DescribeConfigurationSetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationSetsRequest,
                                             Pagination::DescribeConfigurationSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeKeywords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeKeywordsRequest,
                                    Pagination::DescribeKeywordsPaginationTraits<DerivedClient>>
  DescribeKeywordsPaginator(const Model::DescribeKeywordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeKeywordsRequest,
                                             Pagination::DescribeKeywordsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeOptedOutNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptedOutNumbersRequest,
                                    Pagination::DescribeOptedOutNumbersPaginationTraits<DerivedClient>>
  DescribeOptedOutNumbersPaginator(const Model::DescribeOptedOutNumbersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptedOutNumbersRequest,
                                             Pagination::DescribeOptedOutNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOptOutLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptOutListsRequest,
                                    Pagination::DescribeOptOutListsPaginationTraits<DerivedClient>>
  DescribeOptOutListsPaginator(const Model::DescribeOptOutListsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptOutListsRequest,
                                             Pagination::DescribeOptOutListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePhoneNumbersRequest,
                                    Pagination::DescribePhoneNumbersPaginationTraits<DerivedClient>>
  DescribePhoneNumbersPaginator(const Model::DescribePhoneNumbersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePhoneNumbersRequest,
                                             Pagination::DescribePhoneNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePoolsRequest, Pagination::DescribePoolsPaginationTraits<DerivedClient>>
  DescribePoolsPaginator(const Model::DescribePoolsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePoolsRequest,
                                             Pagination::DescribePoolsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeProtectConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProtectConfigurationsRequest,
                                    Pagination::DescribeProtectConfigurationsPaginationTraits<DerivedClient>>
  DescribeProtectConfigurationsPaginator(const Model::DescribeProtectConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProtectConfigurationsRequest,
                                             Pagination::DescribeProtectConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationAttachmentsRequest,
                                    Pagination::DescribeRegistrationAttachmentsPaginationTraits<DerivedClient>>
  DescribeRegistrationAttachmentsPaginator(const Model::DescribeRegistrationAttachmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationAttachmentsRequest,
                                             Pagination::DescribeRegistrationAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationFieldDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationFieldDefinitionsRequest,
                                    Pagination::DescribeRegistrationFieldDefinitionsPaginationTraits<DerivedClient>>
  DescribeRegistrationFieldDefinitionsPaginator(const Model::DescribeRegistrationFieldDefinitionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationFieldDefinitionsRequest,
                                             Pagination::DescribeRegistrationFieldDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationFieldValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationFieldValuesRequest,
                                    Pagination::DescribeRegistrationFieldValuesPaginationTraits<DerivedClient>>
  DescribeRegistrationFieldValuesPaginator(const Model::DescribeRegistrationFieldValuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationFieldValuesRequest,
                                             Pagination::DescribeRegistrationFieldValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationsRequest,
                                    Pagination::DescribeRegistrationsPaginationTraits<DerivedClient>>
  DescribeRegistrationsPaginator(const Model::DescribeRegistrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationsRequest,
                                             Pagination::DescribeRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationSectionDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationSectionDefinitionsRequest,
                                    Pagination::DescribeRegistrationSectionDefinitionsPaginationTraits<DerivedClient>>
  DescribeRegistrationSectionDefinitionsPaginator(const Model::DescribeRegistrationSectionDefinitionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationSectionDefinitionsRequest,
                                             Pagination::DescribeRegistrationSectionDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationTypeDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationTypeDefinitionsRequest,
                                    Pagination::DescribeRegistrationTypeDefinitionsPaginationTraits<DerivedClient>>
  DescribeRegistrationTypeDefinitionsPaginator(const Model::DescribeRegistrationTypeDefinitionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationTypeDefinitionsRequest,
                                             Pagination::DescribeRegistrationTypeDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistrationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationVersionsRequest,
                                    Pagination::DescribeRegistrationVersionsPaginationTraits<DerivedClient>>
  DescribeRegistrationVersionsPaginator(const Model::DescribeRegistrationVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistrationVersionsRequest,
                                             Pagination::DescribeRegistrationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSenderIds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSenderIdsRequest,
                                    Pagination::DescribeSenderIdsPaginationTraits<DerivedClient>>
  DescribeSenderIdsPaginator(const Model::DescribeSenderIdsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSenderIdsRequest,
                                             Pagination::DescribeSenderIdsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSpendLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpendLimitsRequest,
                                    Pagination::DescribeSpendLimitsPaginationTraits<DerivedClient>>
  DescribeSpendLimitsPaginator(const Model::DescribeSpendLimitsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpendLimitsRequest,
                                             Pagination::DescribeSpendLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVerifiedDestinationNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedDestinationNumbersRequest,
                                    Pagination::DescribeVerifiedDestinationNumbersPaginationTraits<DerivedClient>>
  DescribeVerifiedDestinationNumbersPaginator(const Model::DescribeVerifiedDestinationNumbersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedDestinationNumbersRequest,
                                             Pagination::DescribeVerifiedDestinationNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPoolOriginationIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoolOriginationIdentitiesRequest,
                                    Pagination::ListPoolOriginationIdentitiesPaginationTraits<DerivedClient>>
  ListPoolOriginationIdentitiesPaginator(const Model::ListPoolOriginationIdentitiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoolOriginationIdentitiesRequest,
                                             Pagination::ListPoolOriginationIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProtectConfigurationRuleSetNumberOverrides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectConfigurationRuleSetNumberOverridesRequest,
                                    Pagination::ListProtectConfigurationRuleSetNumberOverridesPaginationTraits<DerivedClient>>
  ListProtectConfigurationRuleSetNumberOverridesPaginator(const Model::ListProtectConfigurationRuleSetNumberOverridesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectConfigurationRuleSetNumberOverridesRequest,
                                             Pagination::ListProtectConfigurationRuleSetNumberOverridesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegistrationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistrationAssociationsRequest,
                                    Pagination::ListRegistrationAssociationsPaginationTraits<DerivedClient>>
  ListRegistrationAssociationsPaginator(const Model::ListRegistrationAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistrationAssociationsRequest,
                                             Pagination::ListRegistrationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
