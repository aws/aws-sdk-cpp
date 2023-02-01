/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ParameterExceptionField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace ParameterExceptionFieldMapper
      {

        static const int WEB_ACL_HASH = HashingUtils::HashString("WEB_ACL");
        static const int RULE_GROUP_HASH = HashingUtils::HashString("RULE_GROUP");
        static const int REGEX_PATTERN_SET_HASH = HashingUtils::HashString("REGEX_PATTERN_SET");
        static const int IP_SET_HASH = HashingUtils::HashString("IP_SET");
        static const int MANAGED_RULE_SET_HASH = HashingUtils::HashString("MANAGED_RULE_SET");
        static const int RULE_HASH = HashingUtils::HashString("RULE");
        static const int EXCLUDED_RULE_HASH = HashingUtils::HashString("EXCLUDED_RULE");
        static const int STATEMENT_HASH = HashingUtils::HashString("STATEMENT");
        static const int BYTE_MATCH_STATEMENT_HASH = HashingUtils::HashString("BYTE_MATCH_STATEMENT");
        static const int SQLI_MATCH_STATEMENT_HASH = HashingUtils::HashString("SQLI_MATCH_STATEMENT");
        static const int XSS_MATCH_STATEMENT_HASH = HashingUtils::HashString("XSS_MATCH_STATEMENT");
        static const int SIZE_CONSTRAINT_STATEMENT_HASH = HashingUtils::HashString("SIZE_CONSTRAINT_STATEMENT");
        static const int GEO_MATCH_STATEMENT_HASH = HashingUtils::HashString("GEO_MATCH_STATEMENT");
        static const int RATE_BASED_STATEMENT_HASH = HashingUtils::HashString("RATE_BASED_STATEMENT");
        static const int RULE_GROUP_REFERENCE_STATEMENT_HASH = HashingUtils::HashString("RULE_GROUP_REFERENCE_STATEMENT");
        static const int REGEX_PATTERN_REFERENCE_STATEMENT_HASH = HashingUtils::HashString("REGEX_PATTERN_REFERENCE_STATEMENT");
        static const int IP_SET_REFERENCE_STATEMENT_HASH = HashingUtils::HashString("IP_SET_REFERENCE_STATEMENT");
        static const int MANAGED_RULE_SET_STATEMENT_HASH = HashingUtils::HashString("MANAGED_RULE_SET_STATEMENT");
        static const int LABEL_MATCH_STATEMENT_HASH = HashingUtils::HashString("LABEL_MATCH_STATEMENT");
        static const int AND_STATEMENT_HASH = HashingUtils::HashString("AND_STATEMENT");
        static const int OR_STATEMENT_HASH = HashingUtils::HashString("OR_STATEMENT");
        static const int NOT_STATEMENT_HASH = HashingUtils::HashString("NOT_STATEMENT");
        static const int IP_ADDRESS_HASH = HashingUtils::HashString("IP_ADDRESS");
        static const int IP_ADDRESS_VERSION_HASH = HashingUtils::HashString("IP_ADDRESS_VERSION");
        static const int FIELD_TO_MATCH_HASH = HashingUtils::HashString("FIELD_TO_MATCH");
        static const int TEXT_TRANSFORMATION_HASH = HashingUtils::HashString("TEXT_TRANSFORMATION");
        static const int SINGLE_QUERY_ARGUMENT_HASH = HashingUtils::HashString("SINGLE_QUERY_ARGUMENT");
        static const int SINGLE_HEADER_HASH = HashingUtils::HashString("SINGLE_HEADER");
        static const int DEFAULT_ACTION_HASH = HashingUtils::HashString("DEFAULT_ACTION");
        static const int RULE_ACTION_HASH = HashingUtils::HashString("RULE_ACTION");
        static const int ENTITY_LIMIT_HASH = HashingUtils::HashString("ENTITY_LIMIT");
        static const int OVERRIDE_ACTION_HASH = HashingUtils::HashString("OVERRIDE_ACTION");
        static const int SCOPE_VALUE_HASH = HashingUtils::HashString("SCOPE_VALUE");
        static const int RESOURCE_ARN_HASH = HashingUtils::HashString("RESOURCE_ARN");
        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int TAGS_HASH = HashingUtils::HashString("TAGS");
        static const int TAG_KEYS_HASH = HashingUtils::HashString("TAG_KEYS");
        static const int METRIC_NAME_HASH = HashingUtils::HashString("METRIC_NAME");
        static const int FIREWALL_MANAGER_STATEMENT_HASH = HashingUtils::HashString("FIREWALL_MANAGER_STATEMENT");
        static const int FALLBACK_BEHAVIOR_HASH = HashingUtils::HashString("FALLBACK_BEHAVIOR");
        static const int POSITION_HASH = HashingUtils::HashString("POSITION");
        static const int FORWARDED_IP_CONFIG_HASH = HashingUtils::HashString("FORWARDED_IP_CONFIG");
        static const int IP_SET_FORWARDED_IP_CONFIG_HASH = HashingUtils::HashString("IP_SET_FORWARDED_IP_CONFIG");
        static const int HEADER_NAME_HASH = HashingUtils::HashString("HEADER_NAME");
        static const int CUSTOM_REQUEST_HANDLING_HASH = HashingUtils::HashString("CUSTOM_REQUEST_HANDLING");
        static const int RESPONSE_CONTENT_TYPE_HASH = HashingUtils::HashString("RESPONSE_CONTENT_TYPE");
        static const int CUSTOM_RESPONSE_HASH = HashingUtils::HashString("CUSTOM_RESPONSE");
        static const int CUSTOM_RESPONSE_BODY_HASH = HashingUtils::HashString("CUSTOM_RESPONSE_BODY");
        static const int JSON_MATCH_PATTERN_HASH = HashingUtils::HashString("JSON_MATCH_PATTERN");
        static const int JSON_MATCH_SCOPE_HASH = HashingUtils::HashString("JSON_MATCH_SCOPE");
        static const int BODY_PARSING_FALLBACK_BEHAVIOR_HASH = HashingUtils::HashString("BODY_PARSING_FALLBACK_BEHAVIOR");
        static const int LOGGING_FILTER_HASH = HashingUtils::HashString("LOGGING_FILTER");
        static const int FILTER_CONDITION_HASH = HashingUtils::HashString("FILTER_CONDITION");
        static const int EXPIRE_TIMESTAMP_HASH = HashingUtils::HashString("EXPIRE_TIMESTAMP");
        static const int CHANGE_PROPAGATION_STATUS_HASH = HashingUtils::HashString("CHANGE_PROPAGATION_STATUS");
        static const int ASSOCIABLE_RESOURCE_HASH = HashingUtils::HashString("ASSOCIABLE_RESOURCE");
        static const int LOG_DESTINATION_HASH = HashingUtils::HashString("LOG_DESTINATION");
        static const int MANAGED_RULE_GROUP_CONFIG_HASH = HashingUtils::HashString("MANAGED_RULE_GROUP_CONFIG");
        static const int PAYLOAD_TYPE_HASH = HashingUtils::HashString("PAYLOAD_TYPE");
        static const int HEADER_MATCH_PATTERN_HASH = HashingUtils::HashString("HEADER_MATCH_PATTERN");
        static const int COOKIE_MATCH_PATTERN_HASH = HashingUtils::HashString("COOKIE_MATCH_PATTERN");
        static const int MAP_MATCH_SCOPE_HASH = HashingUtils::HashString("MAP_MATCH_SCOPE");
        static const int OVERSIZE_HANDLING_HASH = HashingUtils::HashString("OVERSIZE_HANDLING");
        static const int CHALLENGE_CONFIG_HASH = HashingUtils::HashString("CHALLENGE_CONFIG");
        static const int TOKEN_DOMAIN_HASH = HashingUtils::HashString("TOKEN_DOMAIN");


        ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_ACL_HASH)
          {
            return ParameterExceptionField::WEB_ACL;
          }
          else if (hashCode == RULE_GROUP_HASH)
          {
            return ParameterExceptionField::RULE_GROUP;
          }
          else if (hashCode == REGEX_PATTERN_SET_HASH)
          {
            return ParameterExceptionField::REGEX_PATTERN_SET;
          }
          else if (hashCode == IP_SET_HASH)
          {
            return ParameterExceptionField::IP_SET;
          }
          else if (hashCode == MANAGED_RULE_SET_HASH)
          {
            return ParameterExceptionField::MANAGED_RULE_SET;
          }
          else if (hashCode == RULE_HASH)
          {
            return ParameterExceptionField::RULE;
          }
          else if (hashCode == EXCLUDED_RULE_HASH)
          {
            return ParameterExceptionField::EXCLUDED_RULE;
          }
          else if (hashCode == STATEMENT_HASH)
          {
            return ParameterExceptionField::STATEMENT;
          }
          else if (hashCode == BYTE_MATCH_STATEMENT_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_STATEMENT;
          }
          else if (hashCode == SQLI_MATCH_STATEMENT_HASH)
          {
            return ParameterExceptionField::SQLI_MATCH_STATEMENT;
          }
          else if (hashCode == XSS_MATCH_STATEMENT_HASH)
          {
            return ParameterExceptionField::XSS_MATCH_STATEMENT;
          }
          else if (hashCode == SIZE_CONSTRAINT_STATEMENT_HASH)
          {
            return ParameterExceptionField::SIZE_CONSTRAINT_STATEMENT;
          }
          else if (hashCode == GEO_MATCH_STATEMENT_HASH)
          {
            return ParameterExceptionField::GEO_MATCH_STATEMENT;
          }
          else if (hashCode == RATE_BASED_STATEMENT_HASH)
          {
            return ParameterExceptionField::RATE_BASED_STATEMENT;
          }
          else if (hashCode == RULE_GROUP_REFERENCE_STATEMENT_HASH)
          {
            return ParameterExceptionField::RULE_GROUP_REFERENCE_STATEMENT;
          }
          else if (hashCode == REGEX_PATTERN_REFERENCE_STATEMENT_HASH)
          {
            return ParameterExceptionField::REGEX_PATTERN_REFERENCE_STATEMENT;
          }
          else if (hashCode == IP_SET_REFERENCE_STATEMENT_HASH)
          {
            return ParameterExceptionField::IP_SET_REFERENCE_STATEMENT;
          }
          else if (hashCode == MANAGED_RULE_SET_STATEMENT_HASH)
          {
            return ParameterExceptionField::MANAGED_RULE_SET_STATEMENT;
          }
          else if (hashCode == LABEL_MATCH_STATEMENT_HASH)
          {
            return ParameterExceptionField::LABEL_MATCH_STATEMENT;
          }
          else if (hashCode == AND_STATEMENT_HASH)
          {
            return ParameterExceptionField::AND_STATEMENT;
          }
          else if (hashCode == OR_STATEMENT_HASH)
          {
            return ParameterExceptionField::OR_STATEMENT;
          }
          else if (hashCode == NOT_STATEMENT_HASH)
          {
            return ParameterExceptionField::NOT_STATEMENT;
          }
          else if (hashCode == IP_ADDRESS_HASH)
          {
            return ParameterExceptionField::IP_ADDRESS;
          }
          else if (hashCode == IP_ADDRESS_VERSION_HASH)
          {
            return ParameterExceptionField::IP_ADDRESS_VERSION;
          }
          else if (hashCode == FIELD_TO_MATCH_HASH)
          {
            return ParameterExceptionField::FIELD_TO_MATCH;
          }
          else if (hashCode == TEXT_TRANSFORMATION_HASH)
          {
            return ParameterExceptionField::TEXT_TRANSFORMATION;
          }
          else if (hashCode == SINGLE_QUERY_ARGUMENT_HASH)
          {
            return ParameterExceptionField::SINGLE_QUERY_ARGUMENT;
          }
          else if (hashCode == SINGLE_HEADER_HASH)
          {
            return ParameterExceptionField::SINGLE_HEADER;
          }
          else if (hashCode == DEFAULT_ACTION_HASH)
          {
            return ParameterExceptionField::DEFAULT_ACTION;
          }
          else if (hashCode == RULE_ACTION_HASH)
          {
            return ParameterExceptionField::RULE_ACTION;
          }
          else if (hashCode == ENTITY_LIMIT_HASH)
          {
            return ParameterExceptionField::ENTITY_LIMIT;
          }
          else if (hashCode == OVERRIDE_ACTION_HASH)
          {
            return ParameterExceptionField::OVERRIDE_ACTION;
          }
          else if (hashCode == SCOPE_VALUE_HASH)
          {
            return ParameterExceptionField::SCOPE_VALUE;
          }
          else if (hashCode == RESOURCE_ARN_HASH)
          {
            return ParameterExceptionField::RESOURCE_ARN;
          }
          else if (hashCode == RESOURCE_TYPE_HASH)
          {
            return ParameterExceptionField::RESOURCE_TYPE;
          }
          else if (hashCode == TAGS_HASH)
          {
            return ParameterExceptionField::TAGS;
          }
          else if (hashCode == TAG_KEYS_HASH)
          {
            return ParameterExceptionField::TAG_KEYS;
          }
          else if (hashCode == METRIC_NAME_HASH)
          {
            return ParameterExceptionField::METRIC_NAME;
          }
          else if (hashCode == FIREWALL_MANAGER_STATEMENT_HASH)
          {
            return ParameterExceptionField::FIREWALL_MANAGER_STATEMENT;
          }
          else if (hashCode == FALLBACK_BEHAVIOR_HASH)
          {
            return ParameterExceptionField::FALLBACK_BEHAVIOR;
          }
          else if (hashCode == POSITION_HASH)
          {
            return ParameterExceptionField::POSITION;
          }
          else if (hashCode == FORWARDED_IP_CONFIG_HASH)
          {
            return ParameterExceptionField::FORWARDED_IP_CONFIG;
          }
          else if (hashCode == IP_SET_FORWARDED_IP_CONFIG_HASH)
          {
            return ParameterExceptionField::IP_SET_FORWARDED_IP_CONFIG;
          }
          else if (hashCode == HEADER_NAME_HASH)
          {
            return ParameterExceptionField::HEADER_NAME;
          }
          else if (hashCode == CUSTOM_REQUEST_HANDLING_HASH)
          {
            return ParameterExceptionField::CUSTOM_REQUEST_HANDLING;
          }
          else if (hashCode == RESPONSE_CONTENT_TYPE_HASH)
          {
            return ParameterExceptionField::RESPONSE_CONTENT_TYPE;
          }
          else if (hashCode == CUSTOM_RESPONSE_HASH)
          {
            return ParameterExceptionField::CUSTOM_RESPONSE;
          }
          else if (hashCode == CUSTOM_RESPONSE_BODY_HASH)
          {
            return ParameterExceptionField::CUSTOM_RESPONSE_BODY;
          }
          else if (hashCode == JSON_MATCH_PATTERN_HASH)
          {
            return ParameterExceptionField::JSON_MATCH_PATTERN;
          }
          else if (hashCode == JSON_MATCH_SCOPE_HASH)
          {
            return ParameterExceptionField::JSON_MATCH_SCOPE;
          }
          else if (hashCode == BODY_PARSING_FALLBACK_BEHAVIOR_HASH)
          {
            return ParameterExceptionField::BODY_PARSING_FALLBACK_BEHAVIOR;
          }
          else if (hashCode == LOGGING_FILTER_HASH)
          {
            return ParameterExceptionField::LOGGING_FILTER;
          }
          else if (hashCode == FILTER_CONDITION_HASH)
          {
            return ParameterExceptionField::FILTER_CONDITION;
          }
          else if (hashCode == EXPIRE_TIMESTAMP_HASH)
          {
            return ParameterExceptionField::EXPIRE_TIMESTAMP;
          }
          else if (hashCode == CHANGE_PROPAGATION_STATUS_HASH)
          {
            return ParameterExceptionField::CHANGE_PROPAGATION_STATUS;
          }
          else if (hashCode == ASSOCIABLE_RESOURCE_HASH)
          {
            return ParameterExceptionField::ASSOCIABLE_RESOURCE;
          }
          else if (hashCode == LOG_DESTINATION_HASH)
          {
            return ParameterExceptionField::LOG_DESTINATION;
          }
          else if (hashCode == MANAGED_RULE_GROUP_CONFIG_HASH)
          {
            return ParameterExceptionField::MANAGED_RULE_GROUP_CONFIG;
          }
          else if (hashCode == PAYLOAD_TYPE_HASH)
          {
            return ParameterExceptionField::PAYLOAD_TYPE;
          }
          else if (hashCode == HEADER_MATCH_PATTERN_HASH)
          {
            return ParameterExceptionField::HEADER_MATCH_PATTERN;
          }
          else if (hashCode == COOKIE_MATCH_PATTERN_HASH)
          {
            return ParameterExceptionField::COOKIE_MATCH_PATTERN;
          }
          else if (hashCode == MAP_MATCH_SCOPE_HASH)
          {
            return ParameterExceptionField::MAP_MATCH_SCOPE;
          }
          else if (hashCode == OVERSIZE_HANDLING_HASH)
          {
            return ParameterExceptionField::OVERSIZE_HANDLING;
          }
          else if (hashCode == CHALLENGE_CONFIG_HASH)
          {
            return ParameterExceptionField::CHALLENGE_CONFIG;
          }
          else if (hashCode == TOKEN_DOMAIN_HASH)
          {
            return ParameterExceptionField::TOKEN_DOMAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterExceptionField>(hashCode);
          }

          return ParameterExceptionField::NOT_SET;
        }

        Aws::String GetNameForParameterExceptionField(ParameterExceptionField enumValue)
        {
          switch(enumValue)
          {
          case ParameterExceptionField::WEB_ACL:
            return "WEB_ACL";
          case ParameterExceptionField::RULE_GROUP:
            return "RULE_GROUP";
          case ParameterExceptionField::REGEX_PATTERN_SET:
            return "REGEX_PATTERN_SET";
          case ParameterExceptionField::IP_SET:
            return "IP_SET";
          case ParameterExceptionField::MANAGED_RULE_SET:
            return "MANAGED_RULE_SET";
          case ParameterExceptionField::RULE:
            return "RULE";
          case ParameterExceptionField::EXCLUDED_RULE:
            return "EXCLUDED_RULE";
          case ParameterExceptionField::STATEMENT:
            return "STATEMENT";
          case ParameterExceptionField::BYTE_MATCH_STATEMENT:
            return "BYTE_MATCH_STATEMENT";
          case ParameterExceptionField::SQLI_MATCH_STATEMENT:
            return "SQLI_MATCH_STATEMENT";
          case ParameterExceptionField::XSS_MATCH_STATEMENT:
            return "XSS_MATCH_STATEMENT";
          case ParameterExceptionField::SIZE_CONSTRAINT_STATEMENT:
            return "SIZE_CONSTRAINT_STATEMENT";
          case ParameterExceptionField::GEO_MATCH_STATEMENT:
            return "GEO_MATCH_STATEMENT";
          case ParameterExceptionField::RATE_BASED_STATEMENT:
            return "RATE_BASED_STATEMENT";
          case ParameterExceptionField::RULE_GROUP_REFERENCE_STATEMENT:
            return "RULE_GROUP_REFERENCE_STATEMENT";
          case ParameterExceptionField::REGEX_PATTERN_REFERENCE_STATEMENT:
            return "REGEX_PATTERN_REFERENCE_STATEMENT";
          case ParameterExceptionField::IP_SET_REFERENCE_STATEMENT:
            return "IP_SET_REFERENCE_STATEMENT";
          case ParameterExceptionField::MANAGED_RULE_SET_STATEMENT:
            return "MANAGED_RULE_SET_STATEMENT";
          case ParameterExceptionField::LABEL_MATCH_STATEMENT:
            return "LABEL_MATCH_STATEMENT";
          case ParameterExceptionField::AND_STATEMENT:
            return "AND_STATEMENT";
          case ParameterExceptionField::OR_STATEMENT:
            return "OR_STATEMENT";
          case ParameterExceptionField::NOT_STATEMENT:
            return "NOT_STATEMENT";
          case ParameterExceptionField::IP_ADDRESS:
            return "IP_ADDRESS";
          case ParameterExceptionField::IP_ADDRESS_VERSION:
            return "IP_ADDRESS_VERSION";
          case ParameterExceptionField::FIELD_TO_MATCH:
            return "FIELD_TO_MATCH";
          case ParameterExceptionField::TEXT_TRANSFORMATION:
            return "TEXT_TRANSFORMATION";
          case ParameterExceptionField::SINGLE_QUERY_ARGUMENT:
            return "SINGLE_QUERY_ARGUMENT";
          case ParameterExceptionField::SINGLE_HEADER:
            return "SINGLE_HEADER";
          case ParameterExceptionField::DEFAULT_ACTION:
            return "DEFAULT_ACTION";
          case ParameterExceptionField::RULE_ACTION:
            return "RULE_ACTION";
          case ParameterExceptionField::ENTITY_LIMIT:
            return "ENTITY_LIMIT";
          case ParameterExceptionField::OVERRIDE_ACTION:
            return "OVERRIDE_ACTION";
          case ParameterExceptionField::SCOPE_VALUE:
            return "SCOPE_VALUE";
          case ParameterExceptionField::RESOURCE_ARN:
            return "RESOURCE_ARN";
          case ParameterExceptionField::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case ParameterExceptionField::TAGS:
            return "TAGS";
          case ParameterExceptionField::TAG_KEYS:
            return "TAG_KEYS";
          case ParameterExceptionField::METRIC_NAME:
            return "METRIC_NAME";
          case ParameterExceptionField::FIREWALL_MANAGER_STATEMENT:
            return "FIREWALL_MANAGER_STATEMENT";
          case ParameterExceptionField::FALLBACK_BEHAVIOR:
            return "FALLBACK_BEHAVIOR";
          case ParameterExceptionField::POSITION:
            return "POSITION";
          case ParameterExceptionField::FORWARDED_IP_CONFIG:
            return "FORWARDED_IP_CONFIG";
          case ParameterExceptionField::IP_SET_FORWARDED_IP_CONFIG:
            return "IP_SET_FORWARDED_IP_CONFIG";
          case ParameterExceptionField::HEADER_NAME:
            return "HEADER_NAME";
          case ParameterExceptionField::CUSTOM_REQUEST_HANDLING:
            return "CUSTOM_REQUEST_HANDLING";
          case ParameterExceptionField::RESPONSE_CONTENT_TYPE:
            return "RESPONSE_CONTENT_TYPE";
          case ParameterExceptionField::CUSTOM_RESPONSE:
            return "CUSTOM_RESPONSE";
          case ParameterExceptionField::CUSTOM_RESPONSE_BODY:
            return "CUSTOM_RESPONSE_BODY";
          case ParameterExceptionField::JSON_MATCH_PATTERN:
            return "JSON_MATCH_PATTERN";
          case ParameterExceptionField::JSON_MATCH_SCOPE:
            return "JSON_MATCH_SCOPE";
          case ParameterExceptionField::BODY_PARSING_FALLBACK_BEHAVIOR:
            return "BODY_PARSING_FALLBACK_BEHAVIOR";
          case ParameterExceptionField::LOGGING_FILTER:
            return "LOGGING_FILTER";
          case ParameterExceptionField::FILTER_CONDITION:
            return "FILTER_CONDITION";
          case ParameterExceptionField::EXPIRE_TIMESTAMP:
            return "EXPIRE_TIMESTAMP";
          case ParameterExceptionField::CHANGE_PROPAGATION_STATUS:
            return "CHANGE_PROPAGATION_STATUS";
          case ParameterExceptionField::ASSOCIABLE_RESOURCE:
            return "ASSOCIABLE_RESOURCE";
          case ParameterExceptionField::LOG_DESTINATION:
            return "LOG_DESTINATION";
          case ParameterExceptionField::MANAGED_RULE_GROUP_CONFIG:
            return "MANAGED_RULE_GROUP_CONFIG";
          case ParameterExceptionField::PAYLOAD_TYPE:
            return "PAYLOAD_TYPE";
          case ParameterExceptionField::HEADER_MATCH_PATTERN:
            return "HEADER_MATCH_PATTERN";
          case ParameterExceptionField::COOKIE_MATCH_PATTERN:
            return "COOKIE_MATCH_PATTERN";
          case ParameterExceptionField::MAP_MATCH_SCOPE:
            return "MAP_MATCH_SCOPE";
          case ParameterExceptionField::OVERSIZE_HANDLING:
            return "OVERSIZE_HANDLING";
          case ParameterExceptionField::CHALLENGE_CONFIG:
            return "CHALLENGE_CONFIG";
          case ParameterExceptionField::TOKEN_DOMAIN:
            return "TOKEN_DOMAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterExceptionFieldMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
