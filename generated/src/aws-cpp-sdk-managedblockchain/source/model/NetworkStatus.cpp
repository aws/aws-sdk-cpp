/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace NetworkStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        NetworkStatus GetNetworkStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NetworkStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkStatus::AVAILABLE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NetworkStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NetworkStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkStatus>(hashCode);
          }

          return NetworkStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkStatus(NetworkStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkStatus::NOT_SET:
            return {};
          case NetworkStatus::CREATING:
            return "CREATING";
          case NetworkStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case NetworkStatus::DELETING:
            return "DELETING";
          case NetworkStatus::DELETED:
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

      } // namespace NetworkStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
