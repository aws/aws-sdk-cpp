/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterAutoScalerType.h>
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
      namespace ClusterAutoScalerTypeMapper
      {

        static const int Karpenter_HASH = HashingUtils::HashString("Karpenter");


        ClusterAutoScalerType GetClusterAutoScalerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Karpenter_HASH)
          {
            return ClusterAutoScalerType::Karpenter;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterAutoScalerType>(hashCode);
          }

          return ClusterAutoScalerType::NOT_SET;
        }

        Aws::String GetNameForClusterAutoScalerType(ClusterAutoScalerType enumValue)
        {
          switch(enumValue)
          {
          case ClusterAutoScalerType::NOT_SET:
            return {};
          case ClusterAutoScalerType::Karpenter:
            return "Karpenter";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterAutoScalerTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
