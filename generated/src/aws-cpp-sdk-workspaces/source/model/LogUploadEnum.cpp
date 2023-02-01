/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/LogUploadEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace LogUploadEnumMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        LogUploadEnum GetLogUploadEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return LogUploadEnum::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LogUploadEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogUploadEnum>(hashCode);
          }

          return LogUploadEnum::NOT_SET;
        }

        Aws::String GetNameForLogUploadEnum(LogUploadEnum enumValue)
        {
          switch(enumValue)
          {
          case LogUploadEnum::ENABLED:
            return "ENABLED";
          case LogUploadEnum::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogUploadEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
