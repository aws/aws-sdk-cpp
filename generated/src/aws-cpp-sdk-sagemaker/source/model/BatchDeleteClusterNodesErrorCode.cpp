/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDeleteClusterNodesErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace BatchDeleteClusterNodesErrorCodeMapper
      {

        static const int NodeIdNotFound_HASH = HashingUtils::HashString("NodeIdNotFound");
        static const int InvalidNodeStatus_HASH = HashingUtils::HashString("InvalidNodeStatus");
        static const int NodeIdInUse_HASH = HashingUtils::HashString("NodeIdInUse");


        BatchDeleteClusterNodesErrorCode GetBatchDeleteClusterNodesErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NodeIdNotFound_HASH)
          {
            return BatchDeleteClusterNodesErrorCode::NodeIdNotFound;
          }
          else if (hashCode == InvalidNodeStatus_HASH)
          {
            return BatchDeleteClusterNodesErrorCode::InvalidNodeStatus;
          }
          else if (hashCode == NodeIdInUse_HASH)
          {
            return BatchDeleteClusterNodesErrorCode::NodeIdInUse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchDeleteClusterNodesErrorCode>(hashCode);
          }

          return BatchDeleteClusterNodesErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchDeleteClusterNodesErrorCode(BatchDeleteClusterNodesErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchDeleteClusterNodesErrorCode::NOT_SET:
            return {};
          case BatchDeleteClusterNodesErrorCode::NodeIdNotFound:
            return "NodeIdNotFound";
          case BatchDeleteClusterNodesErrorCode::InvalidNodeStatus:
            return "InvalidNodeStatus";
          case BatchDeleteClusterNodesErrorCode::NodeIdInUse:
            return "NodeIdInUse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchDeleteClusterNodesErrorCodeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
