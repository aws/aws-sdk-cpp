﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/PermissionActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace PermissionActionTypeMapper
      {

        static const int RESTORE_HASH = HashingUtils::HashString("RESTORE");


        PermissionActionType GetPermissionActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESTORE_HASH)
          {
            return PermissionActionType::RESTORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionActionType>(hashCode);
          }

          return PermissionActionType::NOT_SET;
        }

        Aws::String GetNameForPermissionActionType(PermissionActionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionActionType::NOT_SET:
            return {};
          case PermissionActionType::RESTORE:
            return "RESTORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionActionTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
