/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchDeploymentStatusMapper
      {

        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t PENDING_APPROVAL_HASH = ConstExprHashingUtils::HashString("PENDING_APPROVAL");
        static constexpr uint32_t EXPLICIT_APPROVED_HASH = ConstExprHashingUtils::HashString("EXPLICIT_APPROVED");
        static constexpr uint32_t EXPLICIT_REJECTED_HASH = ConstExprHashingUtils::HashString("EXPLICIT_REJECTED");


        PatchDeploymentStatus GetPatchDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return PatchDeploymentStatus::APPROVED;
          }
          else if (hashCode == PENDING_APPROVAL_HASH)
          {
            return PatchDeploymentStatus::PENDING_APPROVAL;
          }
          else if (hashCode == EXPLICIT_APPROVED_HASH)
          {
            return PatchDeploymentStatus::EXPLICIT_APPROVED;
          }
          else if (hashCode == EXPLICIT_REJECTED_HASH)
          {
            return PatchDeploymentStatus::EXPLICIT_REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchDeploymentStatus>(hashCode);
          }

          return PatchDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForPatchDeploymentStatus(PatchDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case PatchDeploymentStatus::NOT_SET:
            return {};
          case PatchDeploymentStatus::APPROVED:
            return "APPROVED";
          case PatchDeploymentStatus::PENDING_APPROVAL:
            return "PENDING_APPROVAL";
          case PatchDeploymentStatus::EXPLICIT_APPROVED:
            return "EXPLICIT_APPROVED";
          case PatchDeploymentStatus::EXPLICIT_REJECTED:
            return "EXPLICIT_REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchDeploymentStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
