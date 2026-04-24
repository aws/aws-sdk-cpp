/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class DomainVerificationMethod { NOT_SET, DNS_TXT, HTTP_ROUTE };

namespace DomainVerificationMethodMapper {
AWS_SECURITYAGENT_API DomainVerificationMethod GetDomainVerificationMethodForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForDomainVerificationMethod(DomainVerificationMethod value);
}  // namespace DomainVerificationMethodMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
