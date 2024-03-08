/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/FeatureStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace FeatureStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");
        static const int ENABLED_PENDING_REBOOT_HASH = HashingUtils::HashString("ENABLED_PENDING_REBOOT");
        static const int DISABLED_PENDING_REBOOT_HASH = HashingUtils::HashString("DISABLED_PENDING_REBOOT");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        FeatureStatus GetFeatureStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return FeatureStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FeatureStatus::DISABLED;
          }
          else if (hashCode == UNSUPPORTED_HASH)
          {
            return FeatureStatus::UNSUPPORTED;
          }
          else if (hashCode == ENABLED_PENDING_REBOOT_HASH)
          {
            return FeatureStatus::ENABLED_PENDING_REBOOT;
          }
          else if (hashCode == DISABLED_PENDING_REBOOT_HASH)
          {
            return FeatureStatus::DISABLED_PENDING_REBOOT;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return FeatureStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureStatus>(hashCode);
          }

          return FeatureStatus::NOT_SET;
        }

        Aws::String GetNameForFeatureStatus(FeatureStatus enumValue)
        {
          switch(enumValue)
          {
          case FeatureStatus::NOT_SET:
            return {};
          case FeatureStatus::ENABLED:
            return "ENABLED";
          case FeatureStatus::DISABLED:
            return "DISABLED";
          case FeatureStatus::UNSUPPORTED:
            return "UNSUPPORTED";
          case FeatureStatus::ENABLED_PENDING_REBOOT:
            return "ENABLED_PENDING_REBOOT";
          case FeatureStatus::DISABLED_PENDING_REBOOT:
            return "DISABLED_PENDING_REBOOT";
          case FeatureStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureStatusMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
