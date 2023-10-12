/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/HaArchitecture.h>
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
      namespace HaArchitectureMapper
      {

        static constexpr uint32_t MultiSite_HASH = ConstExprHashingUtils::HashString("MultiSite");
        static constexpr uint32_t WarmStandby_HASH = ConstExprHashingUtils::HashString("WarmStandby");
        static constexpr uint32_t PilotLight_HASH = ConstExprHashingUtils::HashString("PilotLight");
        static constexpr uint32_t BackupAndRestore_HASH = ConstExprHashingUtils::HashString("BackupAndRestore");
        static constexpr uint32_t NoRecoveryPlan_HASH = ConstExprHashingUtils::HashString("NoRecoveryPlan");


        HaArchitecture GetHaArchitectureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MultiSite_HASH)
          {
            return HaArchitecture::MultiSite;
          }
          else if (hashCode == WarmStandby_HASH)
          {
            return HaArchitecture::WarmStandby;
          }
          else if (hashCode == PilotLight_HASH)
          {
            return HaArchitecture::PilotLight;
          }
          else if (hashCode == BackupAndRestore_HASH)
          {
            return HaArchitecture::BackupAndRestore;
          }
          else if (hashCode == NoRecoveryPlan_HASH)
          {
            return HaArchitecture::NoRecoveryPlan;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HaArchitecture>(hashCode);
          }

          return HaArchitecture::NOT_SET;
        }

        Aws::String GetNameForHaArchitecture(HaArchitecture enumValue)
        {
          switch(enumValue)
          {
          case HaArchitecture::NOT_SET:
            return {};
          case HaArchitecture::MultiSite:
            return "MultiSite";
          case HaArchitecture::WarmStandby:
            return "WarmStandby";
          case HaArchitecture::PilotLight:
            return "PilotLight";
          case HaArchitecture::BackupAndRestore:
            return "BackupAndRestore";
          case HaArchitecture::NoRecoveryPlan:
            return "NoRecoveryPlan";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HaArchitectureMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
