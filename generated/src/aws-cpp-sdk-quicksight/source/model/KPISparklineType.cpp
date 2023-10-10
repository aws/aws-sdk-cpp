/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPISparklineType.h>
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
      namespace KPISparklineTypeMapper
      {

        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int AREA_HASH = HashingUtils::HashString("AREA");


        KPISparklineType GetKPISparklineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_HASH)
          {
            return KPISparklineType::LINE;
          }
          else if (hashCode == AREA_HASH)
          {
            return KPISparklineType::AREA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KPISparklineType>(hashCode);
          }

          return KPISparklineType::NOT_SET;
        }

        Aws::String GetNameForKPISparklineType(KPISparklineType enumValue)
        {
          switch(enumValue)
          {
          case KPISparklineType::NOT_SET:
            return {};
          case KPISparklineType::LINE:
            return "LINE";
          case KPISparklineType::AREA:
            return "AREA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KPISparklineTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
