/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgePresetDeploymentType.h>
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
      namespace EdgePresetDeploymentTypeMapper
      {

        static const int GreengrassV2Component_HASH = HashingUtils::HashString("GreengrassV2Component");


        EdgePresetDeploymentType GetEdgePresetDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreengrassV2Component_HASH)
          {
            return EdgePresetDeploymentType::GreengrassV2Component;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EdgePresetDeploymentType>(hashCode);
          }

          return EdgePresetDeploymentType::NOT_SET;
        }

        Aws::String GetNameForEdgePresetDeploymentType(EdgePresetDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case EdgePresetDeploymentType::NOT_SET:
            return {};
          case EdgePresetDeploymentType::GreengrassV2Component:
            return "GreengrassV2Component";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EdgePresetDeploymentTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
