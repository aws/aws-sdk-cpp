/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceSubsetType.h>
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
      namespace DeviceSubsetTypeMapper
      {

        static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
        static const int SELECTION_HASH = HashingUtils::HashString("SELECTION");
        static const int NAMECONTAINS_HASH = HashingUtils::HashString("NAMECONTAINS");


        DeviceSubsetType GetDeviceSubsetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENTAGE_HASH)
          {
            return DeviceSubsetType::PERCENTAGE;
          }
          else if (hashCode == SELECTION_HASH)
          {
            return DeviceSubsetType::SELECTION;
          }
          else if (hashCode == NAMECONTAINS_HASH)
          {
            return DeviceSubsetType::NAMECONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceSubsetType>(hashCode);
          }

          return DeviceSubsetType::NOT_SET;
        }

        Aws::String GetNameForDeviceSubsetType(DeviceSubsetType enumValue)
        {
          switch(enumValue)
          {
          case DeviceSubsetType::NOT_SET:
            return {};
          case DeviceSubsetType::PERCENTAGE:
            return "PERCENTAGE";
          case DeviceSubsetType::SELECTION:
            return "SELECTION";
          case DeviceSubsetType::NAMECONTAINS:
            return "NAMECONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceSubsetTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
