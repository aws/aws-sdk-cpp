/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ComparisonOperator.h>
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
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t LE_HASH = ConstExprHashingUtils::HashString("LE");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return ComparisonOperator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return ComparisonOperator::NE;
          }
          else if (hashCode == LE_HASH)
          {
            return ComparisonOperator::LE;
          }
          else if (hashCode == LT_HASH)
          {
            return ComparisonOperator::LT;
          }
          else if (hashCode == GE_HASH)
          {
            return ComparisonOperator::GE;
          }
          else if (hashCode == GT_HASH)
          {
            return ComparisonOperator::GT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperator>(hashCode);
          }

          return ComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperator::NOT_SET:
            return {};
          case ComparisonOperator::EQ:
            return "EQ";
          case ComparisonOperator::NE:
            return "NE";
          case ComparisonOperator::LE:
            return "LE";
          case ComparisonOperator::LT:
            return "LT";
          case ComparisonOperator::GE:
            return "GE";
          case ComparisonOperator::GT:
            return "GT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
