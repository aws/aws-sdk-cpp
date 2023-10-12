/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace ActiveDirectoryStatusMapper
      {

        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t DETACHED_HASH = ConstExprHashingUtils::HashString("DETACHED");
        static constexpr uint32_t JOINED_HASH = ConstExprHashingUtils::HashString("JOINED");
        static constexpr uint32_t JOINING_HASH = ConstExprHashingUtils::HashString("JOINING");
        static constexpr uint32_t NETWORK_ERROR_HASH = ConstExprHashingUtils::HashString("NETWORK_ERROR");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t UNKNOWN_ERROR_HASH = ConstExprHashingUtils::HashString("UNKNOWN_ERROR");


        ActiveDirectoryStatus GetActiveDirectoryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return ActiveDirectoryStatus::ACCESS_DENIED;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return ActiveDirectoryStatus::DETACHED;
          }
          else if (hashCode == JOINED_HASH)
          {
            return ActiveDirectoryStatus::JOINED;
          }
          else if (hashCode == JOINING_HASH)
          {
            return ActiveDirectoryStatus::JOINING;
          }
          else if (hashCode == NETWORK_ERROR_HASH)
          {
            return ActiveDirectoryStatus::NETWORK_ERROR;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return ActiveDirectoryStatus::TIMEOUT;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return ActiveDirectoryStatus::UNKNOWN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveDirectoryStatus>(hashCode);
          }

          return ActiveDirectoryStatus::NOT_SET;
        }

        Aws::String GetNameForActiveDirectoryStatus(ActiveDirectoryStatus enumValue)
        {
          switch(enumValue)
          {
          case ActiveDirectoryStatus::NOT_SET:
            return {};
          case ActiveDirectoryStatus::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ActiveDirectoryStatus::DETACHED:
            return "DETACHED";
          case ActiveDirectoryStatus::JOINED:
            return "JOINED";
          case ActiveDirectoryStatus::JOINING:
            return "JOINING";
          case ActiveDirectoryStatus::NETWORK_ERROR:
            return "NETWORK_ERROR";
          case ActiveDirectoryStatus::TIMEOUT:
            return "TIMEOUT";
          case ActiveDirectoryStatus::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActiveDirectoryStatusMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
