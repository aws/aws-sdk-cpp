/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericEqualityMatchOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NumericEqualityMatchOperatorMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t DOES_NOT_EQUAL_HASH = ConstExprHashingUtils::HashString("DOES_NOT_EQUAL");


        NumericEqualityMatchOperator GetNumericEqualityMatchOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return NumericEqualityMatchOperator::EQUALS;
          }
          else if (hashCode == DOES_NOT_EQUAL_HASH)
          {
            return NumericEqualityMatchOperator::DOES_NOT_EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumericEqualityMatchOperator>(hashCode);
          }

          return NumericEqualityMatchOperator::NOT_SET;
        }

        Aws::String GetNameForNumericEqualityMatchOperator(NumericEqualityMatchOperator enumValue)
        {
          switch(enumValue)
          {
          case NumericEqualityMatchOperator::NOT_SET:
            return {};
          case NumericEqualityMatchOperator::EQUALS:
            return "EQUALS";
          case NumericEqualityMatchOperator::DOES_NOT_EQUAL:
            return "DOES_NOT_EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumericEqualityMatchOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
