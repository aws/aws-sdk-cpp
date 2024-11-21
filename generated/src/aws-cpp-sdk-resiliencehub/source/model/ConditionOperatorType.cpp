/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ConditionOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ConditionOperatorTypeMapper
      {

        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
        static const int GreaterThen_HASH = HashingUtils::HashString("GreaterThen");
        static const int GreaterOrEquals_HASH = HashingUtils::HashString("GreaterOrEquals");
        static const int LessThen_HASH = HashingUtils::HashString("LessThen");
        static const int LessOrEquals_HASH = HashingUtils::HashString("LessOrEquals");


        ConditionOperatorType GetConditionOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return ConditionOperatorType::Equals;
          }
          else if (hashCode == NotEquals_HASH)
          {
            return ConditionOperatorType::NotEquals;
          }
          else if (hashCode == GreaterThen_HASH)
          {
            return ConditionOperatorType::GreaterThen;
          }
          else if (hashCode == GreaterOrEquals_HASH)
          {
            return ConditionOperatorType::GreaterOrEquals;
          }
          else if (hashCode == LessThen_HASH)
          {
            return ConditionOperatorType::LessThen;
          }
          else if (hashCode == LessOrEquals_HASH)
          {
            return ConditionOperatorType::LessOrEquals;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionOperatorType>(hashCode);
          }

          return ConditionOperatorType::NOT_SET;
        }

        Aws::String GetNameForConditionOperatorType(ConditionOperatorType enumValue)
        {
          switch(enumValue)
          {
          case ConditionOperatorType::NOT_SET:
            return {};
          case ConditionOperatorType::Equals:
            return "Equals";
          case ConditionOperatorType::NotEquals:
            return "NotEquals";
          case ConditionOperatorType::GreaterThen:
            return "GreaterThen";
          case ConditionOperatorType::GreaterOrEquals:
            return "GreaterOrEquals";
          case ConditionOperatorType::LessThen:
            return "LessThen";
          case ConditionOperatorType::LessOrEquals:
            return "LessOrEquals";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionOperatorTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
