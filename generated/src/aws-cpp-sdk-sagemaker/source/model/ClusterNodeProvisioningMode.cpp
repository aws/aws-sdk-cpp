/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterNodeProvisioningMode.h>
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
      namespace ClusterNodeProvisioningModeMapper
      {

        static const int Continuous_HASH = HashingUtils::HashString("Continuous");


        ClusterNodeProvisioningMode GetClusterNodeProvisioningModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Continuous_HASH)
          {
            return ClusterNodeProvisioningMode::Continuous;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterNodeProvisioningMode>(hashCode);
          }

          return ClusterNodeProvisioningMode::NOT_SET;
        }

        Aws::String GetNameForClusterNodeProvisioningMode(ClusterNodeProvisioningMode enumValue)
        {
          switch(enumValue)
          {
          case ClusterNodeProvisioningMode::NOT_SET:
            return {};
          case ClusterNodeProvisioningMode::Continuous:
            return "Continuous";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterNodeProvisioningModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
