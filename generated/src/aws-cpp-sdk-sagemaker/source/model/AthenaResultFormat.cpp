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

        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int ORC_HASH = HashingUtils::HashString("ORC");
        static const int AVRO_HASH = HashingUtils::HashString("AVRO");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int TEXTFILE_HASH = HashingUtils::HashString("TEXTFILE");


        AthenaResultFormat GetAthenaResultFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
