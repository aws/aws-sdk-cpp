/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkSpaceApplicationLicenseType.h>
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
      namespace WorkSpaceApplicationLicenseTypeMapper
      {

        static const int LICENSED_HASH = HashingUtils::HashString("LICENSED");
        static const int UNLICENSED_HASH = HashingUtils::HashString("UNLICENSED");


        WorkSpaceApplicationLicenseType GetWorkSpaceApplicationLicenseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LICENSED_HASH)
          {
            return WorkSpaceApplicationLicenseType::LICENSED;
          }
          else if (hashCode == UNLICENSED_HASH)
          {
            return WorkSpaceApplicationLicenseType::UNLICENSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkSpaceApplicationLicenseType>(hashCode);
          }

          return WorkSpaceApplicationLicenseType::NOT_SET;
        }

        Aws::String GetNameForWorkSpaceApplicationLicenseType(WorkSpaceApplicationLicenseType enumValue)
        {
          switch(enumValue)
          {
          case WorkSpaceApplicationLicenseType::NOT_SET:
            return {};
          case WorkSpaceApplicationLicenseType::LICENSED:
            return "LICENSED";
          case WorkSpaceApplicationLicenseType::UNLICENSED:
            return "UNLICENSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkSpaceApplicationLicenseTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
