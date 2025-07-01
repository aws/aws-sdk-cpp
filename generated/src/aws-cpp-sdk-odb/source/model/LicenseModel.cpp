/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/LicenseModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace LicenseModelMapper
      {

        static const int BRING_YOUR_OWN_LICENSE_HASH = HashingUtils::HashString("BRING_YOUR_OWN_LICENSE");
        static const int LICENSE_INCLUDED_HASH = HashingUtils::HashString("LICENSE_INCLUDED");


        LicenseModel GetLicenseModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BRING_YOUR_OWN_LICENSE_HASH)
          {
            return LicenseModel::BRING_YOUR_OWN_LICENSE;
          }
          else if (hashCode == LICENSE_INCLUDED_HASH)
          {
            return LicenseModel::LICENSE_INCLUDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseModel>(hashCode);
          }

          return LicenseModel::NOT_SET;
        }

        Aws::String GetNameForLicenseModel(LicenseModel enumValue)
        {
          switch(enumValue)
          {
          case LicenseModel::NOT_SET:
            return {};
          case LicenseModel::BRING_YOUR_OWN_LICENSE:
            return "BRING_YOUR_OWN_LICENSE";
          case LicenseModel::LICENSE_INCLUDED:
            return "LICENSE_INCLUDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseModelMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
