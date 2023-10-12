/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceQueryOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ComplianceQueryOperatorTypeMapper
      {

        static constexpr uint32_t EQUAL_HASH = ConstExprHashingUtils::HashString("EQUAL");
        static constexpr uint32_t NOT_EQUAL_HASH = ConstExprHashingUtils::HashString("NOT_EQUAL");
        static constexpr uint32_t BEGIN_WITH_HASH = ConstExprHashingUtils::HashString("BEGIN_WITH");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");


        ComplianceQueryOperatorType GetComplianceQueryOperatorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_HASH)
          {
            return ComplianceQueryOperatorType::EQUAL;
          }
          else if (hashCode == NOT_EQUAL_HASH)
          {
            return ComplianceQueryOperatorType::NOT_EQUAL;
          }
          else if (hashCode == BEGIN_WITH_HASH)
          {
            return ComplianceQueryOperatorType::BEGIN_WITH;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ComplianceQueryOperatorType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ComplianceQueryOperatorType::GREATER_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceQueryOperatorType>(hashCode);
          }

          return ComplianceQueryOperatorType::NOT_SET;
        }

        Aws::String GetNameForComplianceQueryOperatorType(ComplianceQueryOperatorType enumValue)
        {
          switch(enumValue)
          {
          case ComplianceQueryOperatorType::NOT_SET:
            return {};
          case ComplianceQueryOperatorType::EQUAL:
            return "EQUAL";
          case ComplianceQueryOperatorType::NOT_EQUAL:
            return "NOT_EQUAL";
          case ComplianceQueryOperatorType::BEGIN_WITH:
            return "BEGIN_WITH";
          case ComplianceQueryOperatorType::LESS_THAN:
            return "LESS_THAN";
          case ComplianceQueryOperatorType::GREATER_THAN:
            return "GREATER_THAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComplianceQueryOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
