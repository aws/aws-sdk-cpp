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

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int DOES_NOT_EQUAL_HASH = HashingUtils::HashString("DOES_NOT_EQUAL");


        NumericEqualityMatchOperator GetNumericEqualityMatchOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
