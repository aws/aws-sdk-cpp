/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/WaveHealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace WaveHealthStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int LAGGING_HASH = HashingUtils::HashString("LAGGING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WaveHealthStatus GetWaveHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return WaveHealthStatus::HEALTHY;
          }
          else if (hashCode == LAGGING_HASH)
          {
            return WaveHealthStatus::LAGGING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WaveHealthStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaveHealthStatus>(hashCode);
          }

          return WaveHealthStatus::NOT_SET;
        }

        Aws::String GetNameForWaveHealthStatus(WaveHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case WaveHealthStatus::HEALTHY:
            return "HEALTHY";
          case WaveHealthStatus::LAGGING:
            return "LAGGING";
          case WaveHealthStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaveHealthStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
