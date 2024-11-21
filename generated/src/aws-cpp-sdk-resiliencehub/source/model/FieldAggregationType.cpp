/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/FieldAggregationType.h>
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
      namespace FieldAggregationTypeMapper
      {

        static const int Min_HASH = HashingUtils::HashString("Min");
        static const int Max_HASH = HashingUtils::HashString("Max");
        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int Avg_HASH = HashingUtils::HashString("Avg");
        static const int Count_HASH = HashingUtils::HashString("Count");


        FieldAggregationType GetFieldAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Min_HASH)
          {
            return FieldAggregationType::Min;
          }
          else if (hashCode == Max_HASH)
          {
            return FieldAggregationType::Max;
          }
          else if (hashCode == Sum_HASH)
          {
            return FieldAggregationType::Sum;
          }
          else if (hashCode == Avg_HASH)
          {
            return FieldAggregationType::Avg;
          }
          else if (hashCode == Count_HASH)
          {
            return FieldAggregationType::Count;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldAggregationType>(hashCode);
          }

          return FieldAggregationType::NOT_SET;
        }

        Aws::String GetNameForFieldAggregationType(FieldAggregationType enumValue)
        {
          switch(enumValue)
          {
          case FieldAggregationType::NOT_SET:
            return {};
          case FieldAggregationType::Min:
            return "Min";
          case FieldAggregationType::Max:
            return "Max";
          case FieldAggregationType::Sum:
            return "Sum";
          case FieldAggregationType::Avg:
            return "Avg";
          case FieldAggregationType::Count:
            return "Count";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldAggregationTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
