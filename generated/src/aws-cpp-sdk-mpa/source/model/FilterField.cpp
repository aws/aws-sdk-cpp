/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/FilterField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace FilterFieldMapper
      {

        static const int ActionName_HASH = HashingUtils::HashString("ActionName");
        static const int ApprovalTeamName_HASH = HashingUtils::HashString("ApprovalTeamName");
        static const int VotingTime_HASH = HashingUtils::HashString("VotingTime");
        static const int Vote_HASH = HashingUtils::HashString("Vote");
        static const int SessionStatus_HASH = HashingUtils::HashString("SessionStatus");
        static const int InitiationTime_HASH = HashingUtils::HashString("InitiationTime");


        FilterField GetFilterFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActionName_HASH)
          {
            return FilterField::ActionName;
          }
          else if (hashCode == ApprovalTeamName_HASH)
          {
            return FilterField::ApprovalTeamName;
          }
          else if (hashCode == VotingTime_HASH)
          {
            return FilterField::VotingTime;
          }
          else if (hashCode == Vote_HASH)
          {
            return FilterField::Vote;
          }
          else if (hashCode == SessionStatus_HASH)
          {
            return FilterField::SessionStatus;
          }
          else if (hashCode == InitiationTime_HASH)
          {
            return FilterField::InitiationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterField>(hashCode);
          }

          return FilterField::NOT_SET;
        }

        Aws::String GetNameForFilterField(FilterField enumValue)
        {
          switch(enumValue)
          {
          case FilterField::NOT_SET:
            return {};
          case FilterField::ActionName:
            return "ActionName";
          case FilterField::ApprovalTeamName:
            return "ApprovalTeamName";
          case FilterField::VotingTime:
            return "VotingTime";
          case FilterField::Vote:
            return "Vote";
          case FilterField::SessionStatus:
            return "SessionStatus";
          case FilterField::InitiationTime:
            return "InitiationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterFieldMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
