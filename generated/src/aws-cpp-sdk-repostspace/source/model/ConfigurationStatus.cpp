/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace ConfigurationStatusMapper
      {

        static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");
        static const int UNCONFIGURED_HASH = HashingUtils::HashString("UNCONFIGURED");


        ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURED_HASH)
          {
            return ConfigurationStatus::CONFIGURED;
          }
          else if (hashCode == UNCONFIGURED_HASH)
          {
            return ConfigurationStatus::UNCONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationStatus>(hashCode);
          }

          return ConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationStatus(ConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationStatus::NOT_SET:
            return {};
          case ConfigurationStatus::CONFIGURED:
            return "CONFIGURED";
          case ConfigurationStatus::UNCONFIGURED:
            return "UNCONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationStatusMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
