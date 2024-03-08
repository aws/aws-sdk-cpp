/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/LogDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace LogDestinationTypeMapper
      {

        static const int s3_HASH = HashingUtils::HashString("s3");
        static const int cloudwatch_HASH = HashingUtils::HashString("cloudwatch");


        LogDestinationType GetLogDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s3_HASH)
          {
            return LogDestinationType::s3;
          }
          else if (hashCode == cloudwatch_HASH)
          {
            return LogDestinationType::cloudwatch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDestinationType>(hashCode);
          }

          return LogDestinationType::NOT_SET;
        }

        Aws::String GetNameForLogDestinationType(LogDestinationType enumValue)
        {
          switch(enumValue)
          {
          case LogDestinationType::NOT_SET:
            return {};
          case LogDestinationType::s3:
            return "s3";
          case LogDestinationType::cloudwatch:
            return "cloudwatch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogDestinationTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
