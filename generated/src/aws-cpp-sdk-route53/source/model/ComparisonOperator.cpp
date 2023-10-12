/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t GreaterThanOrEqualToThreshold_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEqualToThreshold");
        static constexpr uint32_t GreaterThanThreshold_HASH = ConstExprHashingUtils::HashString("GreaterThanThreshold");
        static constexpr uint32_t LessThanThreshold_HASH = ConstExprHashingUtils::HashString("LessThanThreshold");
        static constexpr uint32_t LessThanOrEqualToThreshold_HASH = ConstExprHashingUtils::HashString("LessThanOrEqualToThreshold");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperator::GreaterThanOrEqualToThreshold;
          }
          else if (hashCode == GreaterThanThreshold_HASH)
          {
            return ComparisonOperator::GreaterThanThreshold;
          }
          else if (hashCode == LessThanThreshold_HASH)
          {
            return ComparisonOperator::LessThanThreshold;
          }
          else if (hashCode == LessThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperator::LessThanOrEqualToThreshold;
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
          case ComparisonOperator::GreaterThanOrEqualToThreshold:
            return "GreaterThanOrEqualToThreshold";
          case ComparisonOperator::GreaterThanThreshold:
            return "GreaterThanThreshold";
          case ComparisonOperator::LessThanThreshold:
            return "LessThanThreshold";
          case ComparisonOperator::LessThanOrEqualToThreshold:
            return "LessThanOrEqualToThreshold";
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
  } // namespace Route53
} // namespace Aws
