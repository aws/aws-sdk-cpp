/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroupAggregation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace ProtectionGroupAggregationMapper
      {

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MEAN_HASH = HashingUtils::HashString("MEAN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        ProtectionGroupAggregation GetProtectionGroupAggregationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return ProtectionGroupAggregation::SUM;
          }
          else if (hashCode == MEAN_HASH)
          {
            return ProtectionGroupAggregation::MEAN;
          }
          else if (hashCode == MAX_HASH)
          {
            return ProtectionGroupAggregation::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectionGroupAggregation>(hashCode);
          }

          return ProtectionGroupAggregation::NOT_SET;
        }

        Aws::String GetNameForProtectionGroupAggregation(ProtectionGroupAggregation enumValue)
        {
          switch(enumValue)
          {
          case ProtectionGroupAggregation::SUM:
            return "SUM";
          case ProtectionGroupAggregation::MEAN:
            return "MEAN";
          case ProtectionGroupAggregation::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectionGroupAggregationMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
