/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/S3OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace S3OutputFormatMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int plain_HASH = HashingUtils::HashString("plain");
        static const int w3c_HASH = HashingUtils::HashString("w3c");


        S3OutputFormat GetS3OutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return S3OutputFormat::json;
          }
          else if (hashCode == plain_HASH)
          {
            return S3OutputFormat::plain;
          }
          else if (hashCode == w3c_HASH)
          {
            return S3OutputFormat::w3c;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3OutputFormat>(hashCode);
          }

          return S3OutputFormat::NOT_SET;
        }

        Aws::String GetNameForS3OutputFormat(S3OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case S3OutputFormat::NOT_SET:
            return {};
          case S3OutputFormat::json:
            return "json";
          case S3OutputFormat::plain:
            return "plain";
          case S3OutputFormat::w3c:
            return "w3c";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3OutputFormatMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
