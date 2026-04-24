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
enum class RiskType {
  NOT_SET,
  CROSS_SITE_SCRIPTING,
  DEFAULT_CREDENTIALS,
  INSECURE_DIRECT_OBJECT_REFERENCE,
  PRIVILEGE_ESCALATION,
  SERVER_SIDE_TEMPLATE_INJECTION,
  COMMAND_INJECTION,
  CODE_INJECTION,
  SQL_INJECTION,
  ARBITRARY_FILE_UPLOAD,
  INSECURE_DESERIALIZATION,
  LOCAL_FILE_INCLUSION,
  INFORMATION_DISCLOSURE,
  PATH_TRAVERSAL,
  SERVER_SIDE_REQUEST_FORGERY,
  JSON_WEB_TOKEN_VULNERABILITIES,
  XML_EXTERNAL_ENTITY,
  FILE_DELETION,
  OTHER,
  GRAPHQL_VULNERABILITIES,
  BUSINESS_LOGIC_VULNERABILITIES,
  CRYPTOGRAPHIC_VULNERABILITIES,
  DENIAL_OF_SERVICE,
  FILE_ACCESS,
  FILE_CREATION,
  DATABASE_MODIFICATION,
  DATABASE_ACCESS,
  OUTBOUND_SERVICE_REQUEST,
  UNKNOWN
};

namespace RiskTypeMapper {
AWS_SECURITYAGENT_API RiskType GetRiskTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForRiskType(RiskType value);
}  // namespace RiskTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
