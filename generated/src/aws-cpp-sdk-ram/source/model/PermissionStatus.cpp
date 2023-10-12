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

        static constexpr uint32_t ATTACHABLE_HASH = ConstExprHashingUtils::HashString("ATTACHABLE");
        static constexpr uint32_t UNATTACHABLE_HASH = ConstExprHashingUtils::HashString("UNATTACHABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        PermissionStatus GetPermissionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
