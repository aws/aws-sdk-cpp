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
enum class DNSRecordType { NOT_SET, TXT };

namespace DNSRecordTypeMapper {
AWS_SECURITYAGENT_API DNSRecordType GetDNSRecordTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForDNSRecordType(DNSRecordType value);
}  // namespace DNSRecordTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
