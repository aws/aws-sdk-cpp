/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static constexpr uint32_t restore_cluster_HASH = ConstExprHashingUtils::HashString("restore-cluster");
        static constexpr uint32_t recommend_node_config_HASH = ConstExprHashingUtils::HashString("recommend-node-config");
        static constexpr uint32_t resize_cluster_HASH = ConstExprHashingUtils::HashString("resize-cluster");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == restore_cluster_HASH)
          {
            return ActionType::restore_cluster;
          }
          else if (hashCode == recommend_node_config_HASH)
          {
            return ActionType::recommend_node_config;
          }
          else if (hashCode == resize_cluster_HASH)
          {
            return ActionType::resize_cluster;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::NOT_SET:
            return {};
          case ActionType::restore_cluster:
            return "restore-cluster";
          case ActionType::recommend_node_config:
            return "recommend-node-config";
          case ActionType::resize_cluster:
            return "resize-cluster";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
