/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AquaConfigurationStatus.h>
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
      namespace AquaConfigurationStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int auto__HASH = HashingUtils::HashString("auto");


        AquaConfigurationStatus GetAquaConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AquaConfigurationStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AquaConfigurationStatus::disabled;
          }
          else if (hashCode == auto__HASH)
          {
            return AquaConfigurationStatus::auto_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AquaConfigurationStatus>(hashCode);
          }

          return AquaConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForAquaConfigurationStatus(AquaConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case AquaConfigurationStatus::NOT_SET:
            return {};
          case AquaConfigurationStatus::enabled:
            return "enabled";
          case AquaConfigurationStatus::disabled:
            return "disabled";
          case AquaConfigurationStatus::auto_:
            return "auto";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AquaConfigurationStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
