/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/RiskType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace RiskTypeMapper {

static const int CROSS_SITE_SCRIPTING_HASH = HashingUtils::HashString("CROSS_SITE_SCRIPTING");
static const int DEFAULT_CREDENTIALS_HASH = HashingUtils::HashString("DEFAULT_CREDENTIALS");
static const int INSECURE_DIRECT_OBJECT_REFERENCE_HASH = HashingUtils::HashString("INSECURE_DIRECT_OBJECT_REFERENCE");
static const int PRIVILEGE_ESCALATION_HASH = HashingUtils::HashString("PRIVILEGE_ESCALATION");
static const int SERVER_SIDE_TEMPLATE_INJECTION_HASH = HashingUtils::HashString("SERVER_SIDE_TEMPLATE_INJECTION");
static const int COMMAND_INJECTION_HASH = HashingUtils::HashString("COMMAND_INJECTION");
static const int CODE_INJECTION_HASH = HashingUtils::HashString("CODE_INJECTION");
static const int SQL_INJECTION_HASH = HashingUtils::HashString("SQL_INJECTION");
static const int ARBITRARY_FILE_UPLOAD_HASH = HashingUtils::HashString("ARBITRARY_FILE_UPLOAD");
static const int INSECURE_DESERIALIZATION_HASH = HashingUtils::HashString("INSECURE_DESERIALIZATION");
static const int LOCAL_FILE_INCLUSION_HASH = HashingUtils::HashString("LOCAL_FILE_INCLUSION");
static const int INFORMATION_DISCLOSURE_HASH = HashingUtils::HashString("INFORMATION_DISCLOSURE");
static const int PATH_TRAVERSAL_HASH = HashingUtils::HashString("PATH_TRAVERSAL");
static const int SERVER_SIDE_REQUEST_FORGERY_HASH = HashingUtils::HashString("SERVER_SIDE_REQUEST_FORGERY");
static const int JSON_WEB_TOKEN_VULNERABILITIES_HASH = HashingUtils::HashString("JSON_WEB_TOKEN_VULNERABILITIES");
static const int XML_EXTERNAL_ENTITY_HASH = HashingUtils::HashString("XML_EXTERNAL_ENTITY");
static const int FILE_DELETION_HASH = HashingUtils::HashString("FILE_DELETION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int GRAPHQL_VULNERABILITIES_HASH = HashingUtils::HashString("GRAPHQL_VULNERABILITIES");
static const int BUSINESS_LOGIC_VULNERABILITIES_HASH = HashingUtils::HashString("BUSINESS_LOGIC_VULNERABILITIES");
static const int CRYPTOGRAPHIC_VULNERABILITIES_HASH = HashingUtils::HashString("CRYPTOGRAPHIC_VULNERABILITIES");
static const int DENIAL_OF_SERVICE_HASH = HashingUtils::HashString("DENIAL_OF_SERVICE");
static const int FILE_ACCESS_HASH = HashingUtils::HashString("FILE_ACCESS");
static const int FILE_CREATION_HASH = HashingUtils::HashString("FILE_CREATION");
static const int DATABASE_MODIFICATION_HASH = HashingUtils::HashString("DATABASE_MODIFICATION");
static const int DATABASE_ACCESS_HASH = HashingUtils::HashString("DATABASE_ACCESS");
static const int OUTBOUND_SERVICE_REQUEST_HASH = HashingUtils::HashString("OUTBOUND_SERVICE_REQUEST");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

RiskType GetRiskTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CROSS_SITE_SCRIPTING_HASH) {
    return RiskType::CROSS_SITE_SCRIPTING;
  } else if (hashCode == DEFAULT_CREDENTIALS_HASH) {
    return RiskType::DEFAULT_CREDENTIALS;
  } else if (hashCode == INSECURE_DIRECT_OBJECT_REFERENCE_HASH) {
    return RiskType::INSECURE_DIRECT_OBJECT_REFERENCE;
  } else if (hashCode == PRIVILEGE_ESCALATION_HASH) {
    return RiskType::PRIVILEGE_ESCALATION;
  } else if (hashCode == SERVER_SIDE_TEMPLATE_INJECTION_HASH) {
    return RiskType::SERVER_SIDE_TEMPLATE_INJECTION;
  } else if (hashCode == COMMAND_INJECTION_HASH) {
    return RiskType::COMMAND_INJECTION;
  } else if (hashCode == CODE_INJECTION_HASH) {
    return RiskType::CODE_INJECTION;
  } else if (hashCode == SQL_INJECTION_HASH) {
    return RiskType::SQL_INJECTION;
  } else if (hashCode == ARBITRARY_FILE_UPLOAD_HASH) {
    return RiskType::ARBITRARY_FILE_UPLOAD;
  } else if (hashCode == INSECURE_DESERIALIZATION_HASH) {
    return RiskType::INSECURE_DESERIALIZATION;
  } else if (hashCode == LOCAL_FILE_INCLUSION_HASH) {
    return RiskType::LOCAL_FILE_INCLUSION;
  } else if (hashCode == INFORMATION_DISCLOSURE_HASH) {
    return RiskType::INFORMATION_DISCLOSURE;
  } else if (hashCode == PATH_TRAVERSAL_HASH) {
    return RiskType::PATH_TRAVERSAL;
  } else if (hashCode == SERVER_SIDE_REQUEST_FORGERY_HASH) {
    return RiskType::SERVER_SIDE_REQUEST_FORGERY;
  } else if (hashCode == JSON_WEB_TOKEN_VULNERABILITIES_HASH) {
    return RiskType::JSON_WEB_TOKEN_VULNERABILITIES;
  } else if (hashCode == XML_EXTERNAL_ENTITY_HASH) {
    return RiskType::XML_EXTERNAL_ENTITY;
  } else if (hashCode == FILE_DELETION_HASH) {
    return RiskType::FILE_DELETION;
  } else if (hashCode == OTHER_HASH) {
    return RiskType::OTHER;
  } else if (hashCode == GRAPHQL_VULNERABILITIES_HASH) {
    return RiskType::GRAPHQL_VULNERABILITIES;
  } else if (hashCode == BUSINESS_LOGIC_VULNERABILITIES_HASH) {
    return RiskType::BUSINESS_LOGIC_VULNERABILITIES;
  } else if (hashCode == CRYPTOGRAPHIC_VULNERABILITIES_HASH) {
    return RiskType::CRYPTOGRAPHIC_VULNERABILITIES;
  } else if (hashCode == DENIAL_OF_SERVICE_HASH) {
    return RiskType::DENIAL_OF_SERVICE;
  } else if (hashCode == FILE_ACCESS_HASH) {
    return RiskType::FILE_ACCESS;
  } else if (hashCode == FILE_CREATION_HASH) {
    return RiskType::FILE_CREATION;
  } else if (hashCode == DATABASE_MODIFICATION_HASH) {
    return RiskType::DATABASE_MODIFICATION;
  } else if (hashCode == DATABASE_ACCESS_HASH) {
    return RiskType::DATABASE_ACCESS;
  } else if (hashCode == OUTBOUND_SERVICE_REQUEST_HASH) {
    return RiskType::OUTBOUND_SERVICE_REQUEST;
  } else if (hashCode == UNKNOWN_HASH) {
    return RiskType::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RiskType>(hashCode);
  }

  return RiskType::NOT_SET;
}

Aws::String GetNameForRiskType(RiskType enumValue) {
  switch (enumValue) {
    case RiskType::NOT_SET:
      return {};
    case RiskType::CROSS_SITE_SCRIPTING:
      return "CROSS_SITE_SCRIPTING";
    case RiskType::DEFAULT_CREDENTIALS:
      return "DEFAULT_CREDENTIALS";
    case RiskType::INSECURE_DIRECT_OBJECT_REFERENCE:
      return "INSECURE_DIRECT_OBJECT_REFERENCE";
    case RiskType::PRIVILEGE_ESCALATION:
      return "PRIVILEGE_ESCALATION";
    case RiskType::SERVER_SIDE_TEMPLATE_INJECTION:
      return "SERVER_SIDE_TEMPLATE_INJECTION";
    case RiskType::COMMAND_INJECTION:
      return "COMMAND_INJECTION";
    case RiskType::CODE_INJECTION:
      return "CODE_INJECTION";
    case RiskType::SQL_INJECTION:
      return "SQL_INJECTION";
    case RiskType::ARBITRARY_FILE_UPLOAD:
      return "ARBITRARY_FILE_UPLOAD";
    case RiskType::INSECURE_DESERIALIZATION:
      return "INSECURE_DESERIALIZATION";
    case RiskType::LOCAL_FILE_INCLUSION:
      return "LOCAL_FILE_INCLUSION";
    case RiskType::INFORMATION_DISCLOSURE:
      return "INFORMATION_DISCLOSURE";
    case RiskType::PATH_TRAVERSAL:
      return "PATH_TRAVERSAL";
    case RiskType::SERVER_SIDE_REQUEST_FORGERY:
      return "SERVER_SIDE_REQUEST_FORGERY";
    case RiskType::JSON_WEB_TOKEN_VULNERABILITIES:
      return "JSON_WEB_TOKEN_VULNERABILITIES";
    case RiskType::XML_EXTERNAL_ENTITY:
      return "XML_EXTERNAL_ENTITY";
    case RiskType::FILE_DELETION:
      return "FILE_DELETION";
    case RiskType::OTHER:
      return "OTHER";
    case RiskType::GRAPHQL_VULNERABILITIES:
      return "GRAPHQL_VULNERABILITIES";
    case RiskType::BUSINESS_LOGIC_VULNERABILITIES:
      return "BUSINESS_LOGIC_VULNERABILITIES";
    case RiskType::CRYPTOGRAPHIC_VULNERABILITIES:
      return "CRYPTOGRAPHIC_VULNERABILITIES";
    case RiskType::DENIAL_OF_SERVICE:
      return "DENIAL_OF_SERVICE";
    case RiskType::FILE_ACCESS:
      return "FILE_ACCESS";
    case RiskType::FILE_CREATION:
      return "FILE_CREATION";
    case RiskType::DATABASE_MODIFICATION:
      return "DATABASE_MODIFICATION";
    case RiskType::DATABASE_ACCESS:
      return "DATABASE_ACCESS";
    case RiskType::OUTBOUND_SERVICE_REQUEST:
      return "OUTBOUND_SERVICE_REQUEST";
    case RiskType::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RiskTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
