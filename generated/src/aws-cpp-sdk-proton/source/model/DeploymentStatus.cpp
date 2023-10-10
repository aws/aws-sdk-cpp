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

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
