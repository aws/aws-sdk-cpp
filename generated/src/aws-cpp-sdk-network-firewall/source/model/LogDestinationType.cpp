/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/LogDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace LogDestinationTypeMapper
      {

        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");
        static constexpr uint32_t CloudWatchLogs_HASH = ConstExprHashingUtils::HashString("CloudWatchLogs");
        static constexpr uint32_t KinesisDataFirehose_HASH = ConstExprHashingUtils::HashString("KinesisDataFirehose");


        LogDestinationType GetLogDestinationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return LogDestinationType::S3;
          }
          else if (hashCode == CloudWatchLogs_HASH)
          {
            return LogDestinationType::CloudWatchLogs;
          }
          else if (hashCode == KinesisDataFirehose_HASH)
          {
            return LogDestinationType::KinesisDataFirehose;
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
          case LogDestinationType::S3:
            return "S3";
          case LogDestinationType::CloudWatchLogs:
            return "CloudWatchLogs";
          case LogDestinationType::KinesisDataFirehose:
            return "KinesisDataFirehose";
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
  } // namespace NetworkFirewall
} // namespace Aws
