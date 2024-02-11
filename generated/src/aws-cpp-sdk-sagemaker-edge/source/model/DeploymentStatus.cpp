/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SagemakerEdgeManager
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return DeploymentStatus::SUCCESS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return DeploymentStatus::FAIL;
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
          case DeploymentStatus::SUCCESS:
            return "SUCCESS";
          case DeploymentStatus::FAIL:
            return "FAIL";
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
  } // namespace SagemakerEdgeManager
} // namespace Aws
