/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Preparing_HASH = ConstExprHashingUtils::HashString("Preparing");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Canceled_HASH = ConstExprHashingUtils::HashString("Canceled");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return DeploymentStatus::Pending;
          }
          else if (hashCode == Preparing_HASH)
          {
            return DeploymentStatus::Preparing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return DeploymentStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return DeploymentStatus::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return DeploymentStatus::Succeeded;
          }
          else if (hashCode == Canceled_HASH)
          {
            return DeploymentStatus::Canceled;
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
          case DeploymentStatus::Pending:
            return "Pending";
          case DeploymentStatus::Preparing:
            return "Preparing";
          case DeploymentStatus::InProgress:
            return "InProgress";
          case DeploymentStatus::Failed:
            return "Failed";
          case DeploymentStatus::Succeeded:
            return "Succeeded";
          case DeploymentStatus::Canceled:
            return "Canceled";
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
  } // namespace RoboMaker
} // namespace Aws
