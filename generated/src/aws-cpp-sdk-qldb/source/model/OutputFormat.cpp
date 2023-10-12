/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace OutputFormatMapper
      {

        static constexpr uint32_t ION_BINARY_HASH = ConstExprHashingUtils::HashString("ION_BINARY");
        static constexpr uint32_t ION_TEXT_HASH = ConstExprHashingUtils::HashString("ION_TEXT");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ION_BINARY_HASH)
          {
            return OutputFormat::ION_BINARY;
          }
          else if (hashCode == ION_TEXT_HASH)
          {
            return OutputFormat::ION_TEXT;
          }
          else if (hashCode == JSON_HASH)
          {
            return OutputFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::NOT_SET:
            return {};
          case OutputFormat::ION_BINARY:
            return "ION_BINARY";
          case OutputFormat::ION_TEXT:
            return "ION_TEXT";
          case OutputFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
