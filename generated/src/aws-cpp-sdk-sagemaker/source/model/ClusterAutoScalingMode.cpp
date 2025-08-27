/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterAutoScalingMode.h>
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
      namespace ClusterAutoScalingModeMapper
      {

        static const int Enable_HASH = HashingUtils::HashString("Enable");
        static const int Disable_HASH = HashingUtils::HashString("Disable");


        ClusterAutoScalingMode GetClusterAutoScalingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enable_HASH)
          {
            return ClusterAutoScalingMode::Enable;
          }
          else if (hashCode == Disable_HASH)
          {
            return ClusterAutoScalingMode::Disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterAutoScalingMode>(hashCode);
          }

          return ClusterAutoScalingMode::NOT_SET;
        }

        Aws::String GetNameForClusterAutoScalingMode(ClusterAutoScalingMode enumValue)
        {
          switch(enumValue)
          {
          case ClusterAutoScalingMode::NOT_SET:
            return {};
          case ClusterAutoScalingMode::Enable:
            return "Enable";
          case ClusterAutoScalingMode::Disable:
            return "Disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterAutoScalingModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
