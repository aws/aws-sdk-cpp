/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ApplicationDiscoveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ApplicationDiscoveryStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t REGISTRATION_FAILED_HASH = ConstExprHashingUtils::HashString("REGISTRATION_FAILED");
        static constexpr uint32_t REFRESH_FAILED_HASH = ConstExprHashingUtils::HashString("REFRESH_FAILED");
        static constexpr uint32_t REGISTERING_HASH = ConstExprHashingUtils::HashString("REGISTERING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ApplicationDiscoveryStatus GetApplicationDiscoveryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ApplicationDiscoveryStatus::SUCCESS;
          }
          else if (hashCode == REGISTRATION_FAILED_HASH)
          {
            return ApplicationDiscoveryStatus::REGISTRATION_FAILED;
          }
          else if (hashCode == REFRESH_FAILED_HASH)
          {
            return ApplicationDiscoveryStatus::REFRESH_FAILED;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return ApplicationDiscoveryStatus::REGISTERING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationDiscoveryStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationDiscoveryStatus>(hashCode);
          }

          return ApplicationDiscoveryStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationDiscoveryStatus(ApplicationDiscoveryStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationDiscoveryStatus::NOT_SET:
            return {};
          case ApplicationDiscoveryStatus::SUCCESS:
            return "SUCCESS";
          case ApplicationDiscoveryStatus::REGISTRATION_FAILED:
            return "REGISTRATION_FAILED";
          case ApplicationDiscoveryStatus::REFRESH_FAILED:
            return "REFRESH_FAILED";
          case ApplicationDiscoveryStatus::REGISTERING:
            return "REGISTERING";
          case ApplicationDiscoveryStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationDiscoveryStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
