/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/OpenTableFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace OpenTableFormatMapper
      {

        static const int ICEBERG_HASH = HashingUtils::HashString("ICEBERG");


        OpenTableFormat GetOpenTableFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ICEBERG_HASH)
          {
            return OpenTableFormat::ICEBERG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenTableFormat>(hashCode);
          }

          return OpenTableFormat::NOT_SET;
        }

        Aws::String GetNameForOpenTableFormat(OpenTableFormat enumValue)
        {
          switch(enumValue)
          {
          case OpenTableFormat::NOT_SET:
            return {};
          case OpenTableFormat::ICEBERG:
            return "ICEBERG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenTableFormatMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
