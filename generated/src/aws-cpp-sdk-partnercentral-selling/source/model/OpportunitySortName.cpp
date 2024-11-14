/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunitySortName.h>
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
      namespace OpportunitySortNameMapper
      {

        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
        static const int Identifier_HASH = HashingUtils::HashString("Identifier");
        static const int CustomerCompanyName_HASH = HashingUtils::HashString("CustomerCompanyName");


        OpportunitySortName GetOpportunitySortNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LastModifiedDate_HASH)
          {
            return OpportunitySortName::LastModifiedDate;
          }
          else if (hashCode == Identifier_HASH)
          {
            return OpportunitySortName::Identifier;
          }
          else if (hashCode == CustomerCompanyName_HASH)
          {
            return OpportunitySortName::CustomerCompanyName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpportunitySortName>(hashCode);
          }

          return OpportunitySortName::NOT_SET;
        }

        Aws::String GetNameForOpportunitySortName(OpportunitySortName enumValue)
        {
          switch(enumValue)
          {
          case OpportunitySortName::NOT_SET:
            return {};
          case OpportunitySortName::LastModifiedDate:
            return "LastModifiedDate";
          case OpportunitySortName::Identifier:
            return "Identifier";
          case OpportunitySortName::CustomerCompanyName:
            return "CustomerCompanyName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpportunitySortNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
