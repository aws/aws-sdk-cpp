/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgePresetDeploymentStatus.h>
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
      namespace EdgePresetDeploymentStatusMapper
      {

        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        EdgePresetDeploymentStatus GetEdgePresetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return EdgePresetDeploymentStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EdgePresetDeploymentStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EdgePresetDeploymentStatus>(hashCode);
          }

          return EdgePresetDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForEdgePresetDeploymentStatus(EdgePresetDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case EdgePresetDeploymentStatus::NOT_SET:
            return {};
          case EdgePresetDeploymentStatus::COMPLETED:
            return "COMPLETED";
          case EdgePresetDeploymentStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EdgePresetDeploymentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
