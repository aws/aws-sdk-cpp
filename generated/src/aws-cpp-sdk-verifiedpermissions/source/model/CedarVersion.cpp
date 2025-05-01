/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CedarVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace CedarVersionMapper
      {

        static const int CEDAR_2_HASH = HashingUtils::HashString("CEDAR_2");
        static const int CEDAR_4_HASH = HashingUtils::HashString("CEDAR_4");


        CedarVersion GetCedarVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CEDAR_2_HASH)
          {
            return CedarVersion::CEDAR_2;
          }
          else if (hashCode == CEDAR_4_HASH)
          {
            return CedarVersion::CEDAR_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CedarVersion>(hashCode);
          }

          return CedarVersion::NOT_SET;
        }

        Aws::String GetNameForCedarVersion(CedarVersion enumValue)
        {
          switch(enumValue)
          {
          case CedarVersion::NOT_SET:
            return {};
          case CedarVersion::CEDAR_2:
            return "CEDAR_2";
          case CedarVersion::CEDAR_4:
            return "CEDAR_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CedarVersionMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
