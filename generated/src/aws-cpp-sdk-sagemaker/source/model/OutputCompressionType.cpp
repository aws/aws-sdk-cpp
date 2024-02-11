/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OutputCompressionType.h>
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
      namespace OutputCompressionTypeMapper
      {

        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        OutputCompressionType GetOutputCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return OutputCompressionType::GZIP;
          }
          else if (hashCode == NONE_HASH)
          {
            return OutputCompressionType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputCompressionType>(hashCode);
          }

          return OutputCompressionType::NOT_SET;
        }

        Aws::String GetNameForOutputCompressionType(OutputCompressionType enumValue)
        {
          switch(enumValue)
          {
          case OutputCompressionType::NOT_SET:
            return {};
          case OutputCompressionType::GZIP:
            return "GZIP";
          case OutputCompressionType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputCompressionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
