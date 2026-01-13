/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ServiceClientModel.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesResult.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Pagination {

template <typename Client = PinpointSMSVoiceV2Client>
struct DescribeRegistrationFieldValuesPaginationTraits {
  using RequestType = Model::DescribeRegistrationFieldValuesRequest;
  using ResultType = Model::DescribeRegistrationFieldValuesResult;
  using OutcomeType = Model::DescribeRegistrationFieldValuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRegistrationFieldValues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
