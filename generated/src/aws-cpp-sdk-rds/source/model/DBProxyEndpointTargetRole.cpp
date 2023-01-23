/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyEndpointTargetRole.h>
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
      namespace DBProxyEndpointTargetRoleMapper
      {

        static const int READ_WRITE_HASH = HashingUtils::HashString("READ_WRITE");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");


        DBProxyEndpointTargetRole GetDBProxyEndpointTargetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_WRITE_HASH)
          {
            return DBProxyEndpointTargetRole::READ_WRITE;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return DBProxyEndpointTargetRole::READ_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DBProxyEndpointTargetRole>(hashCode);
          }

          return DBProxyEndpointTargetRole::NOT_SET;
        }

        Aws::String GetNameForDBProxyEndpointTargetRole(DBProxyEndpointTargetRole enumValue)
        {
          switch(enumValue)
          {
          case DBProxyEndpointTargetRole::READ_WRITE:
            return "READ_WRITE";
          case DBProxyEndpointTargetRole::READ_ONLY:
            return "READ_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DBProxyEndpointTargetRoleMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
