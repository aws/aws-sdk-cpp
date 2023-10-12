/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AquaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace AquaStatusMapper
      {

        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t applying_HASH = ConstExprHashingUtils::HashString("applying");


        AquaStatus GetAquaStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AquaStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AquaStatus::disabled;
          }
          else if (hashCode == applying_HASH)
          {
            return AquaStatus::applying;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AquaStatus>(hashCode);
          }

          return AquaStatus::NOT_SET;
        }

        Aws::String GetNameForAquaStatus(AquaStatus enumValue)
        {
          switch(enumValue)
          {
          case AquaStatus::NOT_SET:
            return {};
          case AquaStatus::enabled:
            return "enabled";
          case AquaStatus::disabled:
            return "disabled";
          case AquaStatus::applying:
            return "applying";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AquaStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
