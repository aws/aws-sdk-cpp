/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HistogramBinType.h>
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
      namespace HistogramBinTypeMapper
      {

        static const int BIN_COUNT_HASH = HashingUtils::HashString("BIN_COUNT");
        static const int BIN_WIDTH_HASH = HashingUtils::HashString("BIN_WIDTH");


        HistogramBinType GetHistogramBinTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BIN_COUNT_HASH)
          {
            return HistogramBinType::BIN_COUNT;
          }
          else if (hashCode == BIN_WIDTH_HASH)
          {
            return HistogramBinType::BIN_WIDTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HistogramBinType>(hashCode);
          }

          return HistogramBinType::NOT_SET;
        }

        Aws::String GetNameForHistogramBinType(HistogramBinType enumValue)
        {
          switch(enumValue)
          {
          case HistogramBinType::BIN_COUNT:
            return "BIN_COUNT";
          case HistogramBinType::BIN_WIDTH:
            return "BIN_WIDTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HistogramBinTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
