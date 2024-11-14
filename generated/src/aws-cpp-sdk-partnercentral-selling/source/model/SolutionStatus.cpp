/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SolutionStatus.h>
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
      namespace SolutionStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        SolutionStatus GetSolutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SolutionStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return SolutionStatus::Inactive;
          }
          else if (hashCode == Draft_HASH)
          {
            return SolutionStatus::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SolutionStatus>(hashCode);
          }

          return SolutionStatus::NOT_SET;
        }

        Aws::String GetNameForSolutionStatus(SolutionStatus enumValue)
        {
          switch(enumValue)
          {
          case SolutionStatus::NOT_SET:
            return {};
          case SolutionStatus::Active:
            return "Active";
          case SolutionStatus::Inactive:
            return "Inactive";
          case SolutionStatus::Draft:
            return "Draft";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SolutionStatusMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
