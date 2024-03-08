/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/LocalWriteForwardingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace LocalWriteForwardingStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int requested_HASH = HashingUtils::HashString("requested");


        LocalWriteForwardingStatus GetLocalWriteForwardingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return LocalWriteForwardingStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return LocalWriteForwardingStatus::disabled;
          }
          else if (hashCode == enabling_HASH)
          {
            return LocalWriteForwardingStatus::enabling;
          }
          else if (hashCode == disabling_HASH)
          {
            return LocalWriteForwardingStatus::disabling;
          }
          else if (hashCode == requested_HASH)
          {
            return LocalWriteForwardingStatus::requested;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalWriteForwardingStatus>(hashCode);
          }

          return LocalWriteForwardingStatus::NOT_SET;
        }

        Aws::String GetNameForLocalWriteForwardingStatus(LocalWriteForwardingStatus enumValue)
        {
          switch(enumValue)
          {
          case LocalWriteForwardingStatus::NOT_SET:
            return {};
          case LocalWriteForwardingStatus::enabled:
            return "enabled";
          case LocalWriteForwardingStatus::disabled:
            return "disabled";
          case LocalWriteForwardingStatus::enabling:
            return "enabling";
          case LocalWriteForwardingStatus::disabling:
            return "disabling";
          case LocalWriteForwardingStatus::requested:
            return "requested";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocalWriteForwardingStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
