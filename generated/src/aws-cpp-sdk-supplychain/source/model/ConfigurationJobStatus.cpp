/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/ConfigurationJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupplyChain
  {
    namespace Model
    {
      namespace ConfigurationJobStatusMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        ConfigurationJobStatus GetConfigurationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return ConfigurationJobStatus::NEW_;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConfigurationJobStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ConfigurationJobStatus::IN_PROGRESS;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return ConfigurationJobStatus::QUEUED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ConfigurationJobStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationJobStatus>(hashCode);
          }

          return ConfigurationJobStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationJobStatus(ConfigurationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationJobStatus::NOT_SET:
            return {};
          case ConfigurationJobStatus::NEW_:
            return "NEW";
          case ConfigurationJobStatus::FAILED:
            return "FAILED";
          case ConfigurationJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ConfigurationJobStatus::QUEUED:
            return "QUEUED";
          case ConfigurationJobStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationJobStatusMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
