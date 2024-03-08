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

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");
        static const int REFRESH_FAILED_HASH = HashingUtils::HashString("REFRESH_FAILED");
        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ApplicationDiscoveryStatus GetApplicationDiscoveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
