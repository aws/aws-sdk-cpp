/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/LogFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace LogFileFormatMapper
      {

        static const int JSONLines_HASH = HashingUtils::HashString("JSONLines");
        static const int Json_HASH = HashingUtils::HashString("Json");


        LogFileFormat GetLogFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSONLines_HASH)
          {
            return LogFileFormat::JSONLines;
          }
          else if (hashCode == Json_HASH)
          {
            return LogFileFormat::Json;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogFileFormat>(hashCode);
          }

          return LogFileFormat::NOT_SET;
        }

        Aws::String GetNameForLogFileFormat(LogFileFormat enumValue)
        {
          switch(enumValue)
          {
          case LogFileFormat::NOT_SET:
            return {};
          case LogFileFormat::JSONLines:
            return "JSONLines";
          case LogFileFormat::Json:
            return "Json";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogFileFormatMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
