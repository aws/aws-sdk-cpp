/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class EndTimeBehaviorReasonCode {
  NOT_SET,
  PROPOSER_RENEW_OPTED_OUT,
  ACCEPTOR_RENEW_OPTED_OUT,
  NO_RENEWAL_TERM,
  RENEWAL_LIMIT_EXHAUSTED
};

namespace EndTimeBehaviorReasonCodeMapper {
AWS_AGREEMENTSERVICE_API EndTimeBehaviorReasonCode GetEndTimeBehaviorReasonCodeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForEndTimeBehaviorReasonCode(EndTimeBehaviorReasonCode value);
}  // namespace EndTimeBehaviorReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
