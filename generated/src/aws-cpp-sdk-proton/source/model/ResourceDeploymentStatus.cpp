/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ResourceDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ResourceDeploymentStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");


        ResourceDeploymentStatus GetResourceDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceDeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceDeploymentStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ResourceDeploymentStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceDeploymentStatus>(hashCode);
          }

          return ResourceDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForResourceDeploymentStatus(ResourceDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceDeploymentStatus::NOT_SET:
            return {};
          case ResourceDeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceDeploymentStatus::FAILED:
            return "FAILED";
          case ResourceDeploymentStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceDeploymentStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
