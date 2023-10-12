/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ParameterExceptionField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace ParameterExceptionFieldMapper
      {

        static constexpr uint32_t CHANGE_ACTION_HASH = ConstExprHashingUtils::HashString("CHANGE_ACTION");
        static constexpr uint32_t WAF_ACTION_HASH = ConstExprHashingUtils::HashString("WAF_ACTION");
        static constexpr uint32_t WAF_OVERRIDE_ACTION_HASH = ConstExprHashingUtils::HashString("WAF_OVERRIDE_ACTION");
        static constexpr uint32_t PREDICATE_TYPE_HASH = ConstExprHashingUtils::HashString("PREDICATE_TYPE");
        static constexpr uint32_t IPSET_TYPE_HASH = ConstExprHashingUtils::HashString("IPSET_TYPE");
        static constexpr uint32_t BYTE_MATCH_FIELD_TYPE_HASH = ConstExprHashingUtils::HashString("BYTE_MATCH_FIELD_TYPE");
        static constexpr uint32_t SQL_INJECTION_MATCH_FIELD_TYPE_HASH = ConstExprHashingUtils::HashString("SQL_INJECTION_MATCH_FIELD_TYPE");
        static constexpr uint32_t BYTE_MATCH_TEXT_TRANSFORMATION_HASH = ConstExprHashingUtils::HashString("BYTE_MATCH_TEXT_TRANSFORMATION");
        static constexpr uint32_t BYTE_MATCH_POSITIONAL_CONSTRAINT_HASH = ConstExprHashingUtils::HashString("BYTE_MATCH_POSITIONAL_CONSTRAINT");
        static constexpr uint32_t SIZE_CONSTRAINT_COMPARISON_OPERATOR_HASH = ConstExprHashingUtils::HashString("SIZE_CONSTRAINT_COMPARISON_OPERATOR");
        static constexpr uint32_t GEO_MATCH_LOCATION_TYPE_HASH = ConstExprHashingUtils::HashString("GEO_MATCH_LOCATION_TYPE");
        static constexpr uint32_t GEO_MATCH_LOCATION_VALUE_HASH = ConstExprHashingUtils::HashString("GEO_MATCH_LOCATION_VALUE");
        static constexpr uint32_t RATE_KEY_HASH = ConstExprHashingUtils::HashString("RATE_KEY");
        static constexpr uint32_t RULE_TYPE_HASH = ConstExprHashingUtils::HashString("RULE_TYPE");
        static constexpr uint32_t NEXT_MARKER_HASH = ConstExprHashingUtils::HashString("NEXT_MARKER");
        static constexpr uint32_t RESOURCE_ARN_HASH = ConstExprHashingUtils::HashString("RESOURCE_ARN");
        static constexpr uint32_t TAGS_HASH = ConstExprHashingUtils::HashString("TAGS");
        static constexpr uint32_t TAG_KEYS_HASH = ConstExprHashingUtils::HashString("TAG_KEYS");


        ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGE_ACTION_HASH)
          {
            return ParameterExceptionField::CHANGE_ACTION;
          }
          else if (hashCode == WAF_ACTION_HASH)
          {
            return ParameterExceptionField::WAF_ACTION;
          }
          else if (hashCode == WAF_OVERRIDE_ACTION_HASH)
          {
            return ParameterExceptionField::WAF_OVERRIDE_ACTION;
          }
          else if (hashCode == PREDICATE_TYPE_HASH)
          {
            return ParameterExceptionField::PREDICATE_TYPE;
          }
          else if (hashCode == IPSET_TYPE_HASH)
          {
            return ParameterExceptionField::IPSET_TYPE;
          }
          else if (hashCode == BYTE_MATCH_FIELD_TYPE_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_FIELD_TYPE;
          }
          else if (hashCode == SQL_INJECTION_MATCH_FIELD_TYPE_HASH)
          {
            return ParameterExceptionField::SQL_INJECTION_MATCH_FIELD_TYPE;
          }
          else if (hashCode == BYTE_MATCH_TEXT_TRANSFORMATION_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_TEXT_TRANSFORMATION;
          }
          else if (hashCode == BYTE_MATCH_POSITIONAL_CONSTRAINT_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_POSITIONAL_CONSTRAINT;
          }
          else if (hashCode == SIZE_CONSTRAINT_COMPARISON_OPERATOR_HASH)
          {
            return ParameterExceptionField::SIZE_CONSTRAINT_COMPARISON_OPERATOR;
          }
          else if (hashCode == GEO_MATCH_LOCATION_TYPE_HASH)
          {
            return ParameterExceptionField::GEO_MATCH_LOCATION_TYPE;
          }
          else if (hashCode == GEO_MATCH_LOCATION_VALUE_HASH)
          {
            return ParameterExceptionField::GEO_MATCH_LOCATION_VALUE;
          }
          else if (hashCode == RATE_KEY_HASH)
          {
            return ParameterExceptionField::RATE_KEY;
          }
          else if (hashCode == RULE_TYPE_HASH)
          {
            return ParameterExceptionField::RULE_TYPE;
          }
          else if (hashCode == NEXT_MARKER_HASH)
          {
            return ParameterExceptionField::NEXT_MARKER;
          }
          else if (hashCode == RESOURCE_ARN_HASH)
          {
            return ParameterExceptionField::RESOURCE_ARN;
          }
          else if (hashCode == TAGS_HASH)
          {
            return ParameterExceptionField::TAGS;
          }
          else if (hashCode == TAG_KEYS_HASH)
          {
            return ParameterExceptionField::TAG_KEYS;
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
          case ParameterExceptionField::CHANGE_ACTION:
            return "CHANGE_ACTION";
          case ParameterExceptionField::WAF_ACTION:
            return "WAF_ACTION";
          case ParameterExceptionField::WAF_OVERRIDE_ACTION:
            return "WAF_OVERRIDE_ACTION";
          case ParameterExceptionField::PREDICATE_TYPE:
            return "PREDICATE_TYPE";
          case ParameterExceptionField::IPSET_TYPE:
            return "IPSET_TYPE";
          case ParameterExceptionField::BYTE_MATCH_FIELD_TYPE:
            return "BYTE_MATCH_FIELD_TYPE";
          case ParameterExceptionField::SQL_INJECTION_MATCH_FIELD_TYPE:
            return "SQL_INJECTION_MATCH_FIELD_TYPE";
          case ParameterExceptionField::BYTE_MATCH_TEXT_TRANSFORMATION:
            return "BYTE_MATCH_TEXT_TRANSFORMATION";
          case ParameterExceptionField::BYTE_MATCH_POSITIONAL_CONSTRAINT:
            return "BYTE_MATCH_POSITIONAL_CONSTRAINT";
          case ParameterExceptionField::SIZE_CONSTRAINT_COMPARISON_OPERATOR:
            return "SIZE_CONSTRAINT_COMPARISON_OPERATOR";
          case ParameterExceptionField::GEO_MATCH_LOCATION_TYPE:
            return "GEO_MATCH_LOCATION_TYPE";
          case ParameterExceptionField::GEO_MATCH_LOCATION_VALUE:
            return "GEO_MATCH_LOCATION_VALUE";
          case ParameterExceptionField::RATE_KEY:
            return "RATE_KEY";
          case ParameterExceptionField::RULE_TYPE:
            return "RULE_TYPE";
          case ParameterExceptionField::NEXT_MARKER:
            return "NEXT_MARKER";
          case ParameterExceptionField::RESOURCE_ARN:
            return "RESOURCE_ARN";
          case ParameterExceptionField::TAGS:
            return "TAGS";
          case ParameterExceptionField::TAG_KEYS:
            return "TAG_KEYS";
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
  } // namespace WAFRegional
} // namespace Aws
