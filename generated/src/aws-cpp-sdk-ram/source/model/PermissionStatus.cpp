/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/PermissionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace PermissionStatusMapper
      {

        static const int ATTACHABLE_HASH = HashingUtils::HashString("ATTACHABLE");
        static const int UNATTACHABLE_HASH = HashingUtils::HashString("UNATTACHABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        PermissionStatus GetPermissionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHABLE_HASH)
          {
            return PermissionStatus::ATTACHABLE;
          }
          else if (hashCode == UNATTACHABLE_HASH)
          {
            return PermissionStatus::UNATTACHABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PermissionStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return PermissionStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionStatus>(hashCode);
          }

          return PermissionStatus::NOT_SET;
        }

        Aws::String GetNameForPermissionStatus(PermissionStatus enumValue)
        {
          switch(enumValue)
          {
          case PermissionStatus::NOT_SET:
            return {};
          case PermissionStatus::ATTACHABLE:
            return "ATTACHABLE";
          case PermissionStatus::UNATTACHABLE:
            return "UNATTACHABLE";
          case PermissionStatus::DELETING:
            return "DELETING";
          case PermissionStatus::DELETED:
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

      } // namespace PermissionStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
