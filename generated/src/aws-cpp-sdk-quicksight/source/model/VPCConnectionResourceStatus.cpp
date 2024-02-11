/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VPCConnectionResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace VPCConnectionResourceStatusMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int CREATION_SUCCESSFUL_HASH = HashingUtils::HashString("CREATION_SUCCESSFUL");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_SUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_SUCCESSFUL");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VPCConnectionResourceStatus GetVPCConnectionResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return VPCConnectionResourceStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_SUCCESSFUL_HASH)
          {
            return VPCConnectionResourceStatus::CREATION_SUCCESSFUL;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return VPCConnectionResourceStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return VPCConnectionResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCESSFUL_HASH)
          {
            return VPCConnectionResourceStatus::UPDATE_SUCCESSFUL;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return VPCConnectionResourceStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return VPCConnectionResourceStatus::DELETION_IN_PROGRESS;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return VPCConnectionResourceStatus::DELETION_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VPCConnectionResourceStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VPCConnectionResourceStatus>(hashCode);
          }

          return VPCConnectionResourceStatus::NOT_SET;
        }

        Aws::String GetNameForVPCConnectionResourceStatus(VPCConnectionResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case VPCConnectionResourceStatus::NOT_SET:
            return {};
          case VPCConnectionResourceStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case VPCConnectionResourceStatus::CREATION_SUCCESSFUL:
            return "CREATION_SUCCESSFUL";
          case VPCConnectionResourceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case VPCConnectionResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case VPCConnectionResourceStatus::UPDATE_SUCCESSFUL:
            return "UPDATE_SUCCESSFUL";
          case VPCConnectionResourceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case VPCConnectionResourceStatus::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case VPCConnectionResourceStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case VPCConnectionResourceStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VPCConnectionResourceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
