/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCompressionType.h>
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
      namespace ModelCompressionTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Gzip_HASH = HashingUtils::HashString("Gzip");


        ModelCompressionType GetModelCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return ModelCompressionType::None;
          }
          else if (hashCode == Gzip_HASH)
          {
            return ModelCompressionType::Gzip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCompressionType>(hashCode);
          }

          return ModelCompressionType::NOT_SET;
        }

        Aws::String GetNameForModelCompressionType(ModelCompressionType enumValue)
        {
          switch(enumValue)
          {
          case ModelCompressionType::NOT_SET:
            return {};
          case ModelCompressionType::None:
            return "None";
          case ModelCompressionType::Gzip:
            return "Gzip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCompressionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
