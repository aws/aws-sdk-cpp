/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ReservedCapacityType.h>
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
      namespace ReservedCapacityTypeMapper
      {

        static const int UltraServer_HASH = HashingUtils::HashString("UltraServer");
        static const int Instance_HASH = HashingUtils::HashString("Instance");


        ReservedCapacityType GetReservedCapacityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UltraServer_HASH)
          {
            return ReservedCapacityType::UltraServer;
          }
          else if (hashCode == Instance_HASH)
          {
            return ReservedCapacityType::Instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedCapacityType>(hashCode);
          }

          return ReservedCapacityType::NOT_SET;
        }

        Aws::String GetNameForReservedCapacityType(ReservedCapacityType enumValue)
        {
          switch(enumValue)
          {
          case ReservedCapacityType::NOT_SET:
            return {};
          case ReservedCapacityType::UltraServer:
            return "UltraServer";
          case ReservedCapacityType::Instance:
            return "Instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedCapacityTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
