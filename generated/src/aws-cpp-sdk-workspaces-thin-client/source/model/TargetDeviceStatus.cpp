/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/TargetDeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace TargetDeviceStatusMapper
      {

        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        TargetDeviceStatus GetTargetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEREGISTERED_HASH)
          {
            return TargetDeviceStatus::DEREGISTERED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return TargetDeviceStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDeviceStatus>(hashCode);
          }

          return TargetDeviceStatus::NOT_SET;
        }

        Aws::String GetNameForTargetDeviceStatus(TargetDeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetDeviceStatus::NOT_SET:
            return {};
          case TargetDeviceStatus::DEREGISTERED:
            return "DEREGISTERED";
          case TargetDeviceStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDeviceStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
