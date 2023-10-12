/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/DeploymentStatus.h>
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
      namespace DeploymentStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeploymentStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DeploymentStatus::SUCCEEDED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return DeploymentStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return DeploymentStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return DeploymentStatus::DELETE_COMPLETE;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return DeploymentStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return DeploymentStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentStatus>(hashCode);
          }

          return DeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForDeploymentStatus(DeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case DeploymentStatus::NOT_SET:
            return {};
          case DeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeploymentStatus::FAILED:
            return "FAILED";
          case DeploymentStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DeploymentStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case DeploymentStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case DeploymentStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case DeploymentStatus::CANCELLING:
            return "CANCELLING";
          case DeploymentStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
