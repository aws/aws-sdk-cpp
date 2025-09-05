/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterConfigMode.h>
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
      namespace ClusterConfigModeMapper
      {

        static const int Enable_HASH = HashingUtils::HashString("Enable");
        static const int Disable_HASH = HashingUtils::HashString("Disable");


        ClusterConfigMode GetClusterConfigModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enable_HASH)
          {
            return ClusterConfigMode::Enable;
          }
          else if (hashCode == Disable_HASH)
          {
            return ClusterConfigMode::Disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterConfigMode>(hashCode);
          }

          return ClusterConfigMode::NOT_SET;
        }

        Aws::String GetNameForClusterConfigMode(ClusterConfigMode enumValue)
        {
          switch(enumValue)
          {
          case ClusterConfigMode::NOT_SET:
            return {};
          case ClusterConfigMode::Enable:
            return "Enable";
          case ClusterConfigMode::Disable:
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

      } // namespace ClusterConfigModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
