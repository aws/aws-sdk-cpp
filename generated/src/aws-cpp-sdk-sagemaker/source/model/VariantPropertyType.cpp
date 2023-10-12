/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VariantPropertyType.h>
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
      namespace VariantPropertyTypeMapper
      {

        static constexpr uint32_t DesiredInstanceCount_HASH = ConstExprHashingUtils::HashString("DesiredInstanceCount");
        static constexpr uint32_t DesiredWeight_HASH = ConstExprHashingUtils::HashString("DesiredWeight");
        static constexpr uint32_t DataCaptureConfig_HASH = ConstExprHashingUtils::HashString("DataCaptureConfig");


        VariantPropertyType GetVariantPropertyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DesiredInstanceCount_HASH)
          {
            return VariantPropertyType::DesiredInstanceCount;
          }
          else if (hashCode == DesiredWeight_HASH)
          {
            return VariantPropertyType::DesiredWeight;
          }
          else if (hashCode == DataCaptureConfig_HASH)
          {
            return VariantPropertyType::DataCaptureConfig;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VariantPropertyType>(hashCode);
          }

          return VariantPropertyType::NOT_SET;
        }

        Aws::String GetNameForVariantPropertyType(VariantPropertyType enumValue)
        {
          switch(enumValue)
          {
          case VariantPropertyType::NOT_SET:
            return {};
          case VariantPropertyType::DesiredInstanceCount:
            return "DesiredInstanceCount";
          case VariantPropertyType::DesiredWeight:
            return "DesiredWeight";
          case VariantPropertyType::DataCaptureConfig:
            return "DataCaptureConfig";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VariantPropertyTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
