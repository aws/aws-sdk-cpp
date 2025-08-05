/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchAddClusterNodesErrorCode.h>
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
      namespace BatchAddClusterNodesErrorCodeMapper
      {

        static const int InstanceGroupNotFound_HASH = HashingUtils::HashString("InstanceGroupNotFound");
        static const int InvalidInstanceGroupStatus_HASH = HashingUtils::HashString("InvalidInstanceGroupStatus");


        BatchAddClusterNodesErrorCode GetBatchAddClusterNodesErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceGroupNotFound_HASH)
          {
            return BatchAddClusterNodesErrorCode::InstanceGroupNotFound;
          }
          else if (hashCode == InvalidInstanceGroupStatus_HASH)
          {
            return BatchAddClusterNodesErrorCode::InvalidInstanceGroupStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchAddClusterNodesErrorCode>(hashCode);
          }

          return BatchAddClusterNodesErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchAddClusterNodesErrorCode(BatchAddClusterNodesErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchAddClusterNodesErrorCode::NOT_SET:
            return {};
          case BatchAddClusterNodesErrorCode::InstanceGroupNotFound:
            return "InstanceGroupNotFound";
          case BatchAddClusterNodesErrorCode::InvalidInstanceGroupStatus:
            return "InvalidInstanceGroupStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchAddClusterNodesErrorCodeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
