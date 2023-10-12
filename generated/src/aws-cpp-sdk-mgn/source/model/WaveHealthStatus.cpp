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

        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t LAGGING_HASH = ConstExprHashingUtils::HashString("LAGGING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        WaveHealthStatus GetWaveHealthStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case WaveHealthStatus::NOT_SET:
            return {};
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
