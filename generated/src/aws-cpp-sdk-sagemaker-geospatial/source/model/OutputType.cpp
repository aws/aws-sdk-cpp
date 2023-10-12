/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/OutputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace OutputTypeMapper
      {

        static constexpr uint32_t INT32_HASH = ConstExprHashingUtils::HashString("INT32");
        static constexpr uint32_t FLOAT32_HASH = ConstExprHashingUtils::HashString("FLOAT32");
        static constexpr uint32_t INT16_HASH = ConstExprHashingUtils::HashString("INT16");
        static constexpr uint32_t FLOAT64_HASH = ConstExprHashingUtils::HashString("FLOAT64");
        static constexpr uint32_t UINT16_HASH = ConstExprHashingUtils::HashString("UINT16");


        OutputType GetOutputTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INT32_HASH)
          {
            return OutputType::INT32;
          }
          else if (hashCode == FLOAT32_HASH)
          {
            return OutputType::FLOAT32;
          }
          else if (hashCode == INT16_HASH)
          {
            return OutputType::INT16;
          }
          else if (hashCode == FLOAT64_HASH)
          {
            return OutputType::FLOAT64;
          }
          else if (hashCode == UINT16_HASH)
          {
            return OutputType::UINT16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputType>(hashCode);
          }

          return OutputType::NOT_SET;
        }

        Aws::String GetNameForOutputType(OutputType enumValue)
        {
          switch(enumValue)
          {
          case OutputType::NOT_SET:
            return {};
          case OutputType::INT32:
            return "INT32";
          case OutputType::FLOAT32:
            return "FLOAT32";
          case OutputType::INT16:
            return "INT16";
          case OutputType::FLOAT64:
            return "FLOAT64";
          case OutputType::UINT16:
            return "UINT16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputTypeMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
