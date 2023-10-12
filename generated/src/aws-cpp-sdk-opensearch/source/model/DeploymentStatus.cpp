/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DeploymentStatus.h>
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
      namespace DeploymentStatusMapper
      {

        static constexpr uint32_t PENDING_UPDATE_HASH = ConstExprHashingUtils::HashString("PENDING_UPDATE");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t NOT_ELIGIBLE_HASH = ConstExprHashingUtils::HashString("NOT_ELIGIBLE");
        static constexpr uint32_t ELIGIBLE_HASH = ConstExprHashingUtils::HashString("ELIGIBLE");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_UPDATE_HASH)
          {
            return DeploymentStatus::PENDING_UPDATE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DeploymentStatus::COMPLETED;
          }
          else if (hashCode == NOT_ELIGIBLE_HASH)
          {
            return DeploymentStatus::NOT_ELIGIBLE;
          }
          else if (hashCode == ELIGIBLE_HASH)
          {
            return DeploymentStatus::ELIGIBLE;
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
          case DeploymentStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          case DeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeploymentStatus::COMPLETED:
            return "COMPLETED";
          case DeploymentStatus::NOT_ELIGIBLE:
            return "NOT_ELIGIBLE";
          case DeploymentStatus::ELIGIBLE:
            return "ELIGIBLE";
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
  } // namespace OpenSearchService
} // namespace Aws
