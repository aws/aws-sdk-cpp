/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/PermissionType.h>
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
      namespace PermissionTypeMapper
      {

        static const int READONLY_HASH = HashingUtils::HashString("READONLY");
        static const int CONTRIBUTOR_HASH = HashingUtils::HashString("CONTRIBUTOR");


        PermissionType GetPermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READONLY_HASH)
          {
            return PermissionType::READONLY;
          }
          else if (hashCode == CONTRIBUTOR_HASH)
          {
            return PermissionType::CONTRIBUTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionType>(hashCode);
          }

          return PermissionType::NOT_SET;
        }

        Aws::String GetNameForPermissionType(PermissionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionType::NOT_SET:
            return {};
          case PermissionType::READONLY:
            return "READONLY";
          case PermissionType::CONTRIBUTOR:
            return "CONTRIBUTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
