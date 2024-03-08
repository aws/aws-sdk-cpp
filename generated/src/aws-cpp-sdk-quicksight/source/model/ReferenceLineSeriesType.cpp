/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineSeriesType.h>
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
      namespace ReferenceLineSeriesTypeMapper
      {

        static const int BAR_HASH = HashingUtils::HashString("BAR");
        static const int LINE_HASH = HashingUtils::HashString("LINE");


        ReferenceLineSeriesType GetReferenceLineSeriesTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAR_HASH)
          {
            return ReferenceLineSeriesType::BAR;
          }
          else if (hashCode == LINE_HASH)
          {
            return ReferenceLineSeriesType::LINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceLineSeriesType>(hashCode);
          }

          return ReferenceLineSeriesType::NOT_SET;
        }

        Aws::String GetNameForReferenceLineSeriesType(ReferenceLineSeriesType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceLineSeriesType::NOT_SET:
            return {};
          case ReferenceLineSeriesType::BAR:
            return "BAR";
          case ReferenceLineSeriesType::LINE:
            return "LINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceLineSeriesTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
