/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ChannelAssociationOverrideOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace ChannelAssociationOverrideOptionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ChannelAssociationOverrideOption GetChannelAssociationOverrideOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ChannelAssociationOverrideOption::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ChannelAssociationOverrideOption::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelAssociationOverrideOption>(hashCode);
          }

          return ChannelAssociationOverrideOption::NOT_SET;
        }

        Aws::String GetNameForChannelAssociationOverrideOption(ChannelAssociationOverrideOption enumValue)
        {
          switch(enumValue)
          {
          case ChannelAssociationOverrideOption::NOT_SET:
            return {};
          case ChannelAssociationOverrideOption::ENABLED:
            return "ENABLED";
          case ChannelAssociationOverrideOption::DISABLED:
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

      } // namespace ChannelAssociationOverrideOptionMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
