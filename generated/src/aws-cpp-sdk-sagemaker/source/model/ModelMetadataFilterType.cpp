/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelMetadataFilterType.h>
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
      namespace ModelMetadataFilterTypeMapper
      {

        static constexpr uint32_t Domain_HASH = ConstExprHashingUtils::HashString("Domain");
        static constexpr uint32_t Framework_HASH = ConstExprHashingUtils::HashString("Framework");
        static constexpr uint32_t Task_HASH = ConstExprHashingUtils::HashString("Task");
        static constexpr uint32_t FrameworkVersion_HASH = ConstExprHashingUtils::HashString("FrameworkVersion");


        ModelMetadataFilterType GetModelMetadataFilterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Domain_HASH)
          {
            return ModelMetadataFilterType::Domain;
          }
          else if (hashCode == Framework_HASH)
          {
            return ModelMetadataFilterType::Framework;
          }
          else if (hashCode == Task_HASH)
          {
            return ModelMetadataFilterType::Task;
          }
          else if (hashCode == FrameworkVersion_HASH)
          {
            return ModelMetadataFilterType::FrameworkVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelMetadataFilterType>(hashCode);
          }

          return ModelMetadataFilterType::NOT_SET;
        }

        Aws::String GetNameForModelMetadataFilterType(ModelMetadataFilterType enumValue)
        {
          switch(enumValue)
          {
          case ModelMetadataFilterType::NOT_SET:
            return {};
          case ModelMetadataFilterType::Domain:
            return "Domain";
          case ModelMetadataFilterType::Framework:
            return "Framework";
          case ModelMetadataFilterType::Task:
            return "Task";
          case ModelMetadataFilterType::FrameworkVersion:
            return "FrameworkVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelMetadataFilterTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
