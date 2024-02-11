/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/DeploymentTargetResourceType.h>
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
      namespace DeploymentTargetResourceTypeMapper
      {

        static const int ENVIRONMENT_HASH = HashingUtils::HashString("ENVIRONMENT");
        static const int SERVICE_PIPELINE_HASH = HashingUtils::HashString("SERVICE_PIPELINE");
        static const int SERVICE_INSTANCE_HASH = HashingUtils::HashString("SERVICE_INSTANCE");
        static const int COMPONENT_HASH = HashingUtils::HashString("COMPONENT");


        DeploymentTargetResourceType GetDeploymentTargetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENVIRONMENT_HASH)
          {
            return DeploymentTargetResourceType::ENVIRONMENT;
          }
          else if (hashCode == SERVICE_PIPELINE_HASH)
          {
            return DeploymentTargetResourceType::SERVICE_PIPELINE;
          }
          else if (hashCode == SERVICE_INSTANCE_HASH)
          {
            return DeploymentTargetResourceType::SERVICE_INSTANCE;
          }
          else if (hashCode == COMPONENT_HASH)
          {
            return DeploymentTargetResourceType::COMPONENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentTargetResourceType>(hashCode);
          }

          return DeploymentTargetResourceType::NOT_SET;
        }

        Aws::String GetNameForDeploymentTargetResourceType(DeploymentTargetResourceType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentTargetResourceType::NOT_SET:
            return {};
          case DeploymentTargetResourceType::ENVIRONMENT:
            return "ENVIRONMENT";
          case DeploymentTargetResourceType::SERVICE_PIPELINE:
            return "SERVICE_PIPELINE";
          case DeploymentTargetResourceType::SERVICE_INSTANCE:
            return "SERVICE_INSTANCE";
          case DeploymentTargetResourceType::COMPONENT:
            return "COMPONENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTargetResourceTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
