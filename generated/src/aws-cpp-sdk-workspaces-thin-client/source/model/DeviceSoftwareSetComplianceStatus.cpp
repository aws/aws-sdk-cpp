/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/DeviceSoftwareSetComplianceStatus.h>
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
      namespace DeviceSoftwareSetComplianceStatusMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
        static const int NOT_COMPLIANT_HASH = HashingUtils::HashString("NOT_COMPLIANT");


        DeviceSoftwareSetComplianceStatus GetDeviceSoftwareSetComplianceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DeviceSoftwareSetComplianceStatus::NONE;
          }
          else if (hashCode == COMPLIANT_HASH)
          {
            return DeviceSoftwareSetComplianceStatus::COMPLIANT;
          }
          else if (hashCode == NOT_COMPLIANT_HASH)
          {
            return DeviceSoftwareSetComplianceStatus::NOT_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceSoftwareSetComplianceStatus>(hashCode);
          }

          return DeviceSoftwareSetComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceSoftwareSetComplianceStatus(DeviceSoftwareSetComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceSoftwareSetComplianceStatus::NOT_SET:
            return {};
          case DeviceSoftwareSetComplianceStatus::NONE:
            return "NONE";
          case DeviceSoftwareSetComplianceStatus::COMPLIANT:
            return "COMPLIANT";
          case DeviceSoftwareSetComplianceStatus::NOT_COMPLIANT:
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

      } // namespace DeviceSoftwareSetComplianceStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
