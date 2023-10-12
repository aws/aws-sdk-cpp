/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AthenaResultFormat.h>
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
      namespace AthenaResultFormatMapper
      {

        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");
        static constexpr uint32_t ORC_HASH = ConstExprHashingUtils::HashString("ORC");
        static constexpr uint32_t AVRO_HASH = ConstExprHashingUtils::HashString("AVRO");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t TEXTFILE_HASH = ConstExprHashingUtils::HashString("TEXTFILE");


        AthenaResultFormat GetAthenaResultFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARQUET_HASH)
          {
            return AthenaResultFormat::PARQUET;
          }
          else if (hashCode == ORC_HASH)
          {
            return AthenaResultFormat::ORC;
          }
          else if (hashCode == AVRO_HASH)
          {
            return AthenaResultFormat::AVRO;
          }
          else if (hashCode == JSON_HASH)
          {
            return AthenaResultFormat::JSON;
          }
          else if (hashCode == TEXTFILE_HASH)
          {
            return AthenaResultFormat::TEXTFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AthenaResultFormat>(hashCode);
          }

          return AthenaResultFormat::NOT_SET;
        }

        Aws::String GetNameForAthenaResultFormat(AthenaResultFormat enumValue)
        {
          switch(enumValue)
          {
          case AthenaResultFormat::NOT_SET:
            return {};
          case AthenaResultFormat::PARQUET:
            return "PARQUET";
          case AthenaResultFormat::ORC:
            return "ORC";
          case AthenaResultFormat::AVRO:
            return "AVRO";
          case AthenaResultFormat::JSON:
            return "JSON";
          case AthenaResultFormat::TEXTFILE:
            return "TEXTFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AthenaResultFormatMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
