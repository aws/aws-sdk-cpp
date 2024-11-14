/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/NationalSecurity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace NationalSecurityMapper
      {

        static const int Yes_HASH = HashingUtils::HashString("Yes");
        static const int No_HASH = HashingUtils::HashString("No");


        NationalSecurity GetNationalSecurityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Yes_HASH)
          {
            return NationalSecurity::Yes;
          }
          else if (hashCode == No_HASH)
          {
            return NationalSecurity::No;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NationalSecurity>(hashCode);
          }

          return NationalSecurity::NOT_SET;
        }

        Aws::String GetNameForNationalSecurity(NationalSecurity enumValue)
        {
          switch(enumValue)
          {
          case NationalSecurity::NOT_SET:
            return {};
          case NationalSecurity::Yes:
            return "Yes";
          case NationalSecurity::No:
            return "No";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NationalSecurityMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
