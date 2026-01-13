/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ServiceClientModel.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsResult.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Pagination {

template <typename Client = PinpointSMSVoiceV2Client>
struct DescribeRegistrationAttachmentsPaginationTraits {
  using RequestType = Model::DescribeRegistrationAttachmentsRequest;
  using ResultType = Model::DescribeRegistrationAttachmentsResult;
  using OutcomeType = Model::DescribeRegistrationAttachmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRegistrationAttachments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
