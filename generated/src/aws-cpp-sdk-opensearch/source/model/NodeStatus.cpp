/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NodeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace NodeStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int StandBy_HASH = HashingUtils::HashString("StandBy");
        static const int NotAvailable_HASH = HashingUtils::HashString("NotAvailable");


        NodeStatus GetNodeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return NodeStatus::Active;
          }
          else if (hashCode == StandBy_HASH)
          {
            return NodeStatus::StandBy;
          }
          else if (hashCode == NotAvailable_HASH)
          {
            return NodeStatus::NotAvailable;
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
          case NodeStatus::Active:
            return "Active";
          case NodeStatus::StandBy:
            return "StandBy";
          case NodeStatus::NotAvailable:
            return "NotAvailable";
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
  } // namespace OpenSearchService
} // namespace Aws
