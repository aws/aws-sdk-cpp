/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/DiscoveryIntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace DiscoveryIntegrationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DiscoveryIntegrationStatus GetDiscoveryIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DiscoveryIntegrationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DiscoveryIntegrationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryIntegrationStatus>(hashCode);
          }

          return DiscoveryIntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForDiscoveryIntegrationStatus(DiscoveryIntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryIntegrationStatus::NOT_SET:
            return {};
          case DiscoveryIntegrationStatus::ENABLED:
            return "ENABLED";
          case DiscoveryIntegrationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryIntegrationStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
