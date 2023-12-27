/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/LogExport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace LogExportMapper
      {

        static const int useractivitylog_HASH = HashingUtils::HashString("useractivitylog");
        static const int userlog_HASH = HashingUtils::HashString("userlog");
        static const int connectionlog_HASH = HashingUtils::HashString("connectionlog");


        LogExport GetLogExportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == useractivitylog_HASH)
          {
            return LogExport::useractivitylog;
          }
          else if (hashCode == userlog_HASH)
          {
            return LogExport::userlog;
          }
          else if (hashCode == connectionlog_HASH)
          {
            return LogExport::connectionlog;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogExport>(hashCode);
          }

          return LogExport::NOT_SET;
        }

        Aws::String GetNameForLogExport(LogExport enumValue)
        {
          switch(enumValue)
          {
          case LogExport::NOT_SET:
            return {};
          case LogExport::useractivitylog:
            return "useractivitylog";
          case LogExport::userlog:
            return "userlog";
          case LogExport::connectionlog:
            return "connectionlog";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogExportMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
