/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SimpleAttributeAggregationFunction.h>
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
      namespace SimpleAttributeAggregationFunctionMapper
      {

        static const int UNIQUE_VALUE_HASH = HashingUtils::HashString("UNIQUE_VALUE");


        SimpleAttributeAggregationFunction GetSimpleAttributeAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIQUE_VALUE_HASH)
          {
            return SimpleAttributeAggregationFunction::UNIQUE_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimpleAttributeAggregationFunction>(hashCode);
          }

          return SimpleAttributeAggregationFunction::NOT_SET;
        }

        Aws::String GetNameForSimpleAttributeAggregationFunction(SimpleAttributeAggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case SimpleAttributeAggregationFunction::NOT_SET:
            return {};
          case SimpleAttributeAggregationFunction::UNIQUE_VALUE:
            return "UNIQUE_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimpleAttributeAggregationFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
