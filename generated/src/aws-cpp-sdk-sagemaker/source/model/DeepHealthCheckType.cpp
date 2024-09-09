/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeepHealthCheckType.h>
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
      namespace DeepHealthCheckTypeMapper
      {

        static const int InstanceStress_HASH = HashingUtils::HashString("InstanceStress");
        static const int InstanceConnectivity_HASH = HashingUtils::HashString("InstanceConnectivity");


        DeepHealthCheckType GetDeepHealthCheckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceStress_HASH)
          {
            return DeepHealthCheckType::InstanceStress;
          }
          else if (hashCode == InstanceConnectivity_HASH)
          {
            return DeepHealthCheckType::InstanceConnectivity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeepHealthCheckType>(hashCode);
          }

          return DeepHealthCheckType::NOT_SET;
        }

        Aws::String GetNameForDeepHealthCheckType(DeepHealthCheckType enumValue)
        {
          switch(enumValue)
          {
          case DeepHealthCheckType::NOT_SET:
            return {};
          case DeepHealthCheckType::InstanceStress:
            return "InstanceStress";
          case DeepHealthCheckType::InstanceConnectivity:
            return "InstanceConnectivity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeepHealthCheckTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
