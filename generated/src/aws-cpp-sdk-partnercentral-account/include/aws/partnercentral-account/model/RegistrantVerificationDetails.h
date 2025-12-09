/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains the personal information required for verifying an individual's
 * identity as part of the partner registration process in AWS Partner
 * Central.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/RegistrantVerificationDetails">AWS
 * API Reference</a></p>
 */
class RegistrantVerificationDetails {
 public:
  AWS_PARTNERCENTRALACCOUNT_API RegistrantVerificationDetails() = default;
  AWS_PARTNERCENTRALACCOUNT_API RegistrantVerificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API RegistrantVerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
