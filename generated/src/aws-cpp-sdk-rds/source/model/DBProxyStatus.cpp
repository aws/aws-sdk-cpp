/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyStatus.h>
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
      namespace DBProxyStatusMapper
      {

        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t modifying_HASH = ConstExprHashingUtils::HashString("modifying");
        static constexpr uint32_t incompatible_network_HASH = ConstExprHashingUtils::HashString("incompatible-network");
        static constexpr uint32_t insufficient_resource_limits_HASH = ConstExprHashingUtils::HashString("insufficient-resource-limits");
        static constexpr uint32_t creating_HASH = ConstExprHashingUtils::HashString("creating");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t suspended_HASH = ConstExprHashingUtils::HashString("suspended");
        static constexpr uint32_t suspending_HASH = ConstExprHashingUtils::HashString("suspending");
        static constexpr uint32_t reactivating_HASH = ConstExprHashingUtils::HashString("reactivating");


        DBProxyStatus GetDBProxyStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return DBProxyStatus::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return DBProxyStatus::modifying;
          }
          else if (hashCode == incompatible_network_HASH)
          {
            return DBProxyStatus::incompatible_network;
          }
          else if (hashCode == insufficient_resource_limits_HASH)
          {
            return DBProxyStatus::insufficient_resource_limits;
          }
          else if (hashCode == creating_HASH)
          {
            return DBProxyStatus::creating;
          }
          else if (hashCode == deleting_HASH)
          {
            return DBProxyStatus::deleting;
          }
          else if (hashCode == suspended_HASH)
          {
            return DBProxyStatus::suspended;
          }
          else if (hashCode == suspending_HASH)
          {
            return DBProxyStatus::suspending;
          }
          else if (hashCode == reactivating_HASH)
          {
            return DBProxyStatus::reactivating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DBProxyStatus>(hashCode);
          }

          return DBProxyStatus::NOT_SET;
        }

        Aws::String GetNameForDBProxyStatus(DBProxyStatus enumValue)
        {
          switch(enumValue)
          {
          case DBProxyStatus::NOT_SET:
            return {};
          case DBProxyStatus::available:
            return "available";
          case DBProxyStatus::modifying:
            return "modifying";
          case DBProxyStatus::incompatible_network:
            return "incompatible-network";
          case DBProxyStatus::insufficient_resource_limits:
            return "insufficient-resource-limits";
          case DBProxyStatus::creating:
            return "creating";
          case DBProxyStatus::deleting:
            return "deleting";
          case DBProxyStatus::suspended:
            return "suspended";
          case DBProxyStatus::suspending:
            return "suspending";
          case DBProxyStatus::reactivating:
            return "reactivating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DBProxyStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
