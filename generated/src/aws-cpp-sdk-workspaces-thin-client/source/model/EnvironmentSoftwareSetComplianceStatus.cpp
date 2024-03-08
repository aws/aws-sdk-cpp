/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/EnvironmentSoftwareSetComplianceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace EnvironmentSoftwareSetComplianceStatusMapper
      {

        static const int NO_REGISTERED_DEVICES_HASH = HashingUtils::HashString("NO_REGISTERED_DEVICES");
        static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
        static const int NOT_COMPLIANT_HASH = HashingUtils::HashString("NOT_COMPLIANT");


        EnvironmentSoftwareSetComplianceStatus GetEnvironmentSoftwareSetComplianceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_REGISTERED_DEVICES_HASH)
          {
            return EnvironmentSoftwareSetComplianceStatus::NO_REGISTERED_DEVICES;
          }
          else if (hashCode == COMPLIANT_HASH)
          {
            return EnvironmentSoftwareSetComplianceStatus::COMPLIANT;
          }
          else if (hashCode == NOT_COMPLIANT_HASH)
          {
            return EnvironmentSoftwareSetComplianceStatus::NOT_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentSoftwareSetComplianceStatus>(hashCode);
          }

          return EnvironmentSoftwareSetComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentSoftwareSetComplianceStatus::NOT_SET:
            return {};
          case EnvironmentSoftwareSetComplianceStatus::NO_REGISTERED_DEVICES:
            return "NO_REGISTERED_DEVICES";
          case EnvironmentSoftwareSetComplianceStatus::COMPLIANT:
            return "COMPLIANT";
          case EnvironmentSoftwareSetComplianceStatus::NOT_COMPLIANT:
            return "NOT_COMPLIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentSoftwareSetComplianceStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
