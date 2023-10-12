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

        static constexpr uint32_t WEB_ACL_HASH = ConstExprHashingUtils::HashString("WEB_ACL");
        static constexpr uint32_t RULE_GROUP_HASH = ConstExprHashingUtils::HashString("RULE_GROUP");
        static constexpr uint32_t REGEX_PATTERN_SET_HASH = ConstExprHashingUtils::HashString("REGEX_PATTERN_SET");
        static constexpr uint32_t IP_SET_HASH = ConstExprHashingUtils::HashString("IP_SET");
        static constexpr uint32_t MANAGED_RULE_SET_HASH = ConstExprHashingUtils::HashString("MANAGED_RULE_SET");
        static constexpr uint32_t RULE_HASH = ConstExprHashingUtils::HashString("RULE");
        static constexpr uint32_t EXCLUDED_RULE_HASH = ConstExprHashingUtils::HashString("EXCLUDED_RULE");
        static constexpr uint32_t STATEMENT_HASH = ConstExprHashingUtils::HashString("STATEMENT");
        static constexpr uint32_t BYTE_MATCH_STATEMENT_HASH = ConstExprHashingUtils::HashString("BYTE_MATCH_STATEMENT");
        static constexpr uint32_t SQLI_MATCH_STATEMENT_HASH = ConstExprHashingUtils::HashString("SQLI_MATCH_STATEMENT");
        static constexpr uint32_t XSS_MATCH_STATEMENT_HASH = ConstExprHashingUtils::HashString("XSS_MATCH_STATEMENT");
        static constexpr uint32_t SIZE_CONSTRAINT_STATEMENT_HASH = ConstExprHashingUtils::HashString("SIZE_CONSTRAINT_STATEMENT");
        static constexpr uint32_t GEO_MATCH_STATEMENT_HASH = ConstExprHashingUtils::HashString("GEO_MATCH_STATEMENT");
        static constexpr uint32_t RATE_BASED_STATEMENT_HASH = ConstExprHashingUtils::HashString("RATE_BASED_STATEMENT");
        static constexpr uint32_t RULE_GROUP_REFERENCE_STATEMENT_HASH = ConstExprHashingUtils::HashString("RULE_GROUP_REFERENCE_STATEMENT");
        static constexpr uint32_t REGEX_PATTERN_REFERENCE_STATEMENT_HASH = ConstExprHashingUtils::HashString("REGEX_PATTERN_REFERENCE_STATEMENT");
        static constexpr uint32_t IP_SET_REFERENCE_STATEMENT_HASH = ConstExprHashingUtils::HashString("IP_SET_REFERENCE_STATEMENT");
        static constexpr uint32_t MANAGED_RULE_SET_STATEMENT_HASH = ConstExprHashingUtils::HashString("MANAGED_RULE_SET_STATEMENT");
        static constexpr uint32_t LABEL_MATCH_STATEMENT_HASH = ConstExprHashingUtils::HashString("LABEL_MATCH_STATEMENT");
        static constexpr uint32_t AND_STATEMENT_HASH = ConstExprHashingUtils::HashString("AND_STATEMENT");
        static constexpr uint32_t OR_STATEMENT_HASH = ConstExprHashingUtils::HashString("OR_STATEMENT");
        static constexpr uint32_t NOT_STATEMENT_HASH = ConstExprHashingUtils::HashString("NOT_STATEMENT");
        static constexpr uint32_t IP_ADDRESS_HASH = ConstExprHashingUtils::HashString("IP_ADDRESS");
        static constexpr uint32_t IP_ADDRESS_VERSION_HASH = ConstExprHashingUtils::HashString("IP_ADDRESS_VERSION");
        static constexpr uint32_t FIELD_TO_MATCH_HASH = ConstExprHashingUtils::HashString("FIELD_TO_MATCH");
        static constexpr uint32_t TEXT_TRANSFORMATION_HASH = ConstExprHashingUtils::HashString("TEXT_TRANSFORMATION");
        static constexpr uint32_t SINGLE_QUERY_ARGUMENT_HASH = ConstExprHashingUtils::HashString("SINGLE_QUERY_ARGUMENT");
        static constexpr uint32_t SINGLE_HEADER_HASH = ConstExprHashingUtils::HashString("SINGLE_HEADER");
        static constexpr uint32_t DEFAULT_ACTION_HASH = ConstExprHashingUtils::HashString("DEFAULT_ACTION");
        static constexpr uint32_t RULE_ACTION_HASH = ConstExprHashingUtils::HashString("RULE_ACTION");
        static constexpr uint32_t ENTITY_LIMIT_HASH = ConstExprHashingUtils::HashString("ENTITY_LIMIT");
        static constexpr uint32_t OVERRIDE_ACTION_HASH = ConstExprHashingUtils::HashString("OVERRIDE_ACTION");
        static constexpr uint32_t SCOPE_VALUE_HASH = ConstExprHashingUtils::HashString("SCOPE_VALUE");
        static constexpr uint32_t RESOURCE_ARN_HASH = ConstExprHashingUtils::HashString("RESOURCE_ARN");
        static constexpr uint32_t RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("RESOURCE_TYPE");
        static constexpr uint32_t TAGS_HASH = ConstExprHashingUtils::HashString("TAGS");
        static constexpr uint32_t TAG_KEYS_HASH = ConstExprHashingUtils::HashString("TAG_KEYS");
        static constexpr uint32_t METRIC_NAME_HASH = ConstExprHashingUtils::HashString("METRIC_NAME");
        static constexpr uint32_t FIREWALL_MANAGER_STATEMENT_HASH = ConstExprHashingUtils::HashString("FIREWALL_MANAGER_STATEMENT");
        static constexpr uint32_t FALLBACK_BEHAVIOR_HASH = ConstExprHashingUtils::HashString("FALLBACK_BEHAVIOR");
        static constexpr uint32_t POSITION_HASH = ConstExprHashingUtils::HashString("POSITION");
        static constexpr uint32_t FORWARDED_IP_CONFIG_HASH = ConstExprHashingUtils::HashString("FORWARDED_IP_CONFIG");
        static constexpr uint32_t IP_SET_FORWARDED_IP_CONFIG_HASH = ConstExprHashingUtils::HashString("IP_SET_FORWARDED_IP_CONFIG");
        static constexpr uint32_t HEADER_NAME_HASH = ConstExprHashingUtils::HashString("HEADER_NAME");
        static constexpr uint32_t CUSTOM_REQUEST_HANDLING_HASH = ConstExprHashingUtils::HashString("CUSTOM_REQUEST_HANDLING");
        static constexpr uint32_t RESPONSE_CONTENT_TYPE_HASH = ConstExprHashingUtils::HashString("RESPONSE_CONTENT_TYPE");
        static constexpr uint32_t CUSTOM_RESPONSE_HASH = ConstExprHashingUtils::HashString("CUSTOM_RESPONSE");
        static constexpr uint32_t CUSTOM_RESPONSE_BODY_HASH = ConstExprHashingUtils::HashString("CUSTOM_RESPONSE_BODY");
        static constexpr uint32_t JSON_MATCH_PATTERN_HASH = ConstExprHashingUtils::HashString("JSON_MATCH_PATTERN");
        static constexpr uint32_t JSON_MATCH_SCOPE_HASH = ConstExprHashingUtils::HashString("JSON_MATCH_SCOPE");
        static constexpr uint32_t BODY_PARSING_FALLBACK_BEHAVIOR_HASH = ConstExprHashingUtils::HashString("BODY_PARSING_FALLBACK_BEHAVIOR");
        static constexpr uint32_t LOGGING_FILTER_HASH = ConstExprHashingUtils::HashString("LOGGING_FILTER");
        static constexpr uint32_t FILTER_CONDITION_HASH = ConstExprHashingUtils::HashString("FILTER_CONDITION");
        static constexpr uint32_t EXPIRE_TIMESTAMP_HASH = ConstExprHashingUtils::HashString("EXPIRE_TIMESTAMP");
        static constexpr uint32_t CHANGE_PROPAGATION_STATUS_HASH = ConstExprHashingUtils::HashString("CHANGE_PROPAGATION_STATUS");
        static constexpr uint32_t ASSOCIABLE_RESOURCE_HASH = ConstExprHashingUtils::HashString("ASSOCIABLE_RESOURCE");
        static constexpr uint32_t LOG_DESTINATION_HASH = ConstExprHashingUtils::HashString("LOG_DESTINATION");
        static constexpr uint32_t MANAGED_RULE_GROUP_CONFIG_HASH = ConstExprHashingUtils::HashString("MANAGED_RULE_GROUP_CONFIG");
        static constexpr uint32_t PAYLOAD_TYPE_HASH = ConstExprHashingUtils::HashString("PAYLOAD_TYPE");
        static constexpr uint32_t HEADER_MATCH_PATTERN_HASH = ConstExprHashingUtils::HashString("HEADER_MATCH_PATTERN");
        static constexpr uint32_t COOKIE_MATCH_PATTERN_HASH = ConstExprHashingUtils::HashString("COOKIE_MATCH_PATTERN");
        static constexpr uint32_t MAP_MATCH_SCOPE_HASH = ConstExprHashingUtils::HashString("MAP_MATCH_SCOPE");
        static constexpr uint32_t OVERSIZE_HANDLING_HASH = ConstExprHashingUtils::HashString("OVERSIZE_HANDLING");
        static constexpr uint32_t CHALLENGE_CONFIG_HASH = ConstExprHashingUtils::HashString("CHALLENGE_CONFIG");
        static constexpr uint32_t TOKEN_DOMAIN_HASH = ConstExprHashingUtils::HashString("TOKEN_DOMAIN");
        static constexpr uint32_t ATP_RULE_SET_RESPONSE_INSPECTION_HASH = ConstExprHashingUtils::HashString("ATP_RULE_SET_RESPONSE_INSPECTION");
        static constexpr uint32_t ASSOCIATED_RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("ASSOCIATED_RESOURCE_TYPE");
        static constexpr uint32_t SCOPE_DOWN_HASH = ConstExprHashingUtils::HashString("SCOPE_DOWN");
        static constexpr uint32_t CUSTOM_KEYS_HASH = ConstExprHashingUtils::HashString("CUSTOM_KEYS");
        static constexpr uint32_t ACP_RULE_SET_RESPONSE_INSPECTION_HASH = ConstExprHashingUtils::HashString("ACP_RULE_SET_RESPONSE_INSPECTION");


        ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ATP_RULE_SET_RESPONSE_INSPECTION_HASH)
          {
            return ParameterExceptionField::ATP_RULE_SET_RESPONSE_INSPECTION;
          }
          else if (hashCode == ASSOCIATED_RESOURCE_TYPE_HASH)
          {
            return ParameterExceptionField::ASSOCIATED_RESOURCE_TYPE;
          }
          else if (hashCode == SCOPE_DOWN_HASH)
          {
            return ParameterExceptionField::SCOPE_DOWN;
          }
          else if (hashCode == CUSTOM_KEYS_HASH)
          {
            return ParameterExceptionField::CUSTOM_KEYS;
          }
          else if (hashCode == ACP_RULE_SET_RESPONSE_INSPECTION_HASH)
          {
            return ParameterExceptionField::ACP_RULE_SET_RESPONSE_INSPECTION;
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
          case ParameterExceptionField::NOT_SET:
            return {};
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
          case ParameterExceptionField::ATP_RULE_SET_RESPONSE_INSPECTION:
            return "ATP_RULE_SET_RESPONSE_INSPECTION";
          case ParameterExceptionField::ASSOCIATED_RESOURCE_TYPE:
            return "ASSOCIATED_RESOURCE_TYPE";
          case ParameterExceptionField::SCOPE_DOWN:
            return "SCOPE_DOWN";
          case ParameterExceptionField::CUSTOM_KEYS:
            return "CUSTOM_KEYS";
          case ParameterExceptionField::ACP_RULE_SET_RESPONSE_INSPECTION:
            return "ACP_RULE_SET_RESPONSE_INSPECTION";
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
