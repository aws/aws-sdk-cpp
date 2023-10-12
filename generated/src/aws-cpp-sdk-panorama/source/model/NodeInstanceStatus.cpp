/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace NodeInstanceStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");


        NodeInstanceStatus GetNodeInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return NodeInstanceStatus::RUNNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return NodeInstanceStatus::ERROR_;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return NodeInstanceStatus::NOT_AVAILABLE;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return NodeInstanceStatus::PAUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeInstanceStatus>(hashCode);
          }

          return NodeInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForNodeInstanceStatus(NodeInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeInstanceStatus::NOT_SET:
            return {};
          case NodeInstanceStatus::RUNNING:
            return "RUNNING";
          case NodeInstanceStatus::ERROR_:
            return "ERROR";
          case NodeInstanceStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case NodeInstanceStatus::PAUSED:
            return "PAUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeInstanceStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
