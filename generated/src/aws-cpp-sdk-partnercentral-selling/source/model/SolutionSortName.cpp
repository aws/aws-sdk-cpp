/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SolutionSortName.h>
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
      namespace SolutionSortNameMapper
      {

        static const int Identifier_HASH = HashingUtils::HashString("Identifier");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int Category_HASH = HashingUtils::HashString("Category");
        static const int CreatedDate_HASH = HashingUtils::HashString("CreatedDate");


        SolutionSortName GetSolutionSortNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Identifier_HASH)
          {
            return SolutionSortName::Identifier;
          }
          else if (hashCode == Name_HASH)
          {
            return SolutionSortName::Name;
          }
          else if (hashCode == Status_HASH)
          {
            return SolutionSortName::Status;
          }
          else if (hashCode == Category_HASH)
          {
            return SolutionSortName::Category;
          }
          else if (hashCode == CreatedDate_HASH)
          {
            return SolutionSortName::CreatedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SolutionSortName>(hashCode);
          }

          return SolutionSortName::NOT_SET;
        }

        Aws::String GetNameForSolutionSortName(SolutionSortName enumValue)
        {
          switch(enumValue)
          {
          case SolutionSortName::NOT_SET:
            return {};
          case SolutionSortName::Identifier:
            return "Identifier";
          case SolutionSortName::Name:
            return "Name";
          case SolutionSortName::Status:
            return "Status";
          case SolutionSortName::Category:
            return "Category";
          case SolutionSortName::CreatedDate:
            return "CreatedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SolutionSortNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
