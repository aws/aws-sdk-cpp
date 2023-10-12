/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeStatus.h>
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
      namespace NodeStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INACCESSIBLE_ENCRYPTION_KEY_HASH = ConstExprHashingUtils::HashString("INACCESSIBLE_ENCRYPTION_KEY");


        NodeStatus GetNodeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NodeStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NodeStatus::AVAILABLE;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return NodeStatus::UNHEALTHY;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NodeStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return NodeStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NodeStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NodeStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NodeStatus::FAILED;
          }
          else if (hashCode == INACCESSIBLE_ENCRYPTION_KEY_HASH)
          {
            return NodeStatus::INACCESSIBLE_ENCRYPTION_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeStatus>(hashCode);
          }

          return NodeStatus::NOT_SET;
        }

        Aws::String GetNameForNodeStatus(NodeStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeStatus::NOT_SET:
            return {};
          case NodeStatus::CREATING:
            return "CREATING";
          case NodeStatus::AVAILABLE:
            return "AVAILABLE";
          case NodeStatus::UNHEALTHY:
            return "UNHEALTHY";
          case NodeStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case NodeStatus::UPDATING:
            return "UPDATING";
          case NodeStatus::DELETING:
            return "DELETING";
          case NodeStatus::DELETED:
            return "DELETED";
          case NodeStatus::FAILED:
            return "FAILED";
          case NodeStatus::INACCESSIBLE_ENCRYPTION_KEY:
            return "INACCESSIBLE_ENCRYPTION_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
