/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsFundingUsed.h>
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
      namespace AwsFundingUsedMapper
      {

        static const int Yes_HASH = HashingUtils::HashString("Yes");
        static const int No_HASH = HashingUtils::HashString("No");


        AwsFundingUsed GetAwsFundingUsedForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Yes_HASH)
          {
            return AwsFundingUsed::Yes;
          }
          else if (hashCode == No_HASH)
          {
            return AwsFundingUsed::No;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsFundingUsed>(hashCode);
          }

          return AwsFundingUsed::NOT_SET;
        }

        Aws::String GetNameForAwsFundingUsed(AwsFundingUsed enumValue)
        {
          switch(enumValue)
          {
          case AwsFundingUsed::NOT_SET:
            return {};
          case AwsFundingUsed::Yes:
            return "Yes";
          case AwsFundingUsed::No:
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

      } // namespace AwsFundingUsedMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
