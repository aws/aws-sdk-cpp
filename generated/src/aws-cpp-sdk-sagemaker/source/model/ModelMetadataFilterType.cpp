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

        static const int Domain_HASH = HashingUtils::HashString("Domain");
        static const int Framework_HASH = HashingUtils::HashString("Framework");
        static const int Task_HASH = HashingUtils::HashString("Task");
        static const int FrameworkVersion_HASH = HashingUtils::HashString("FrameworkVersion");


        ModelMetadataFilterType GetModelMetadataFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
