/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelOverlap.h>
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
      namespace DataLabelOverlapMapper
      {

        static const int DISABLE_OVERLAP_HASH = HashingUtils::HashString("DISABLE_OVERLAP");
        static const int ENABLE_OVERLAP_HASH = HashingUtils::HashString("ENABLE_OVERLAP");


        DataLabelOverlap GetDataLabelOverlapForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLE_OVERLAP_HASH)
          {
            return DataLabelOverlap::DISABLE_OVERLAP;
          }
          else if (hashCode == ENABLE_OVERLAP_HASH)
          {
            return DataLabelOverlap::ENABLE_OVERLAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLabelOverlap>(hashCode);
          }

          return DataLabelOverlap::NOT_SET;
        }

        Aws::String GetNameForDataLabelOverlap(DataLabelOverlap enumValue)
        {
          switch(enumValue)
          {
          case DataLabelOverlap::DISABLE_OVERLAP:
            return "DISABLE_OVERLAP";
          case DataLabelOverlap::ENABLE_OVERLAP:
            return "ENABLE_OVERLAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLabelOverlapMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
