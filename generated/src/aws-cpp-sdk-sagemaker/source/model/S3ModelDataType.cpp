/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3ModelDataType.h>
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
      namespace S3ModelDataTypeMapper
      {

        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");
        static const int S3Object_HASH = HashingUtils::HashString("S3Object");


        S3ModelDataType GetS3ModelDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3Prefix_HASH)
          {
            return S3ModelDataType::S3Prefix;
          }
          else if (hashCode == S3Object_HASH)
          {
            return S3ModelDataType::S3Object;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ModelDataType>(hashCode);
          }

          return S3ModelDataType::NOT_SET;
        }

        Aws::String GetNameForS3ModelDataType(S3ModelDataType enumValue)
        {
          switch(enumValue)
          {
          case S3ModelDataType::NOT_SET:
            return {};
          case S3ModelDataType::S3Prefix:
            return "S3Prefix";
          case S3ModelDataType::S3Object:
            return "S3Object";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ModelDataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
