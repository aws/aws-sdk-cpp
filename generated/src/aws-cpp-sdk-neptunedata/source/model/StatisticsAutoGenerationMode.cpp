/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StatisticsAutoGenerationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace StatisticsAutoGenerationModeMapper
      {

        static const int disableAutoCompute_HASH = HashingUtils::HashString("disableAutoCompute");
        static const int enableAutoCompute_HASH = HashingUtils::HashString("enableAutoCompute");
        static const int refresh_HASH = HashingUtils::HashString("refresh");


        StatisticsAutoGenerationMode GetStatisticsAutoGenerationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disableAutoCompute_HASH)
          {
            return StatisticsAutoGenerationMode::disableAutoCompute;
          }
          else if (hashCode == enableAutoCompute_HASH)
          {
            return StatisticsAutoGenerationMode::enableAutoCompute;
          }
          else if (hashCode == refresh_HASH)
          {
            return StatisticsAutoGenerationMode::refresh;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatisticsAutoGenerationMode>(hashCode);
          }

          return StatisticsAutoGenerationMode::NOT_SET;
        }

        Aws::String GetNameForStatisticsAutoGenerationMode(StatisticsAutoGenerationMode enumValue)
        {
          switch(enumValue)
          {
          case StatisticsAutoGenerationMode::NOT_SET:
            return {};
          case StatisticsAutoGenerationMode::disableAutoCompute:
            return "disableAutoCompute";
          case StatisticsAutoGenerationMode::enableAutoCompute:
            return "enableAutoCompute";
          case StatisticsAutoGenerationMode::refresh:
            return "refresh";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticsAutoGenerationModeMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
