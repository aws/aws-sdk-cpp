/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/CommitmentLength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace CommitmentLengthMapper
      {

        static constexpr uint32_t SIXTY_DAYS_HASH = ConstExprHashingUtils::HashString("SIXTY_DAYS");
        static constexpr uint32_t ONE_YEAR_HASH = ConstExprHashingUtils::HashString("ONE_YEAR");
        static constexpr uint32_t THREE_YEARS_HASH = ConstExprHashingUtils::HashString("THREE_YEARS");


        CommitmentLength GetCommitmentLengthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIXTY_DAYS_HASH)
          {
            return CommitmentLength::SIXTY_DAYS;
          }
          else if (hashCode == ONE_YEAR_HASH)
          {
            return CommitmentLength::ONE_YEAR;
          }
          else if (hashCode == THREE_YEARS_HASH)
          {
            return CommitmentLength::THREE_YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommitmentLength>(hashCode);
          }

          return CommitmentLength::NOT_SET;
        }

        Aws::String GetNameForCommitmentLength(CommitmentLength enumValue)
        {
          switch(enumValue)
          {
          case CommitmentLength::NOT_SET:
            return {};
          case CommitmentLength::SIXTY_DAYS:
            return "SIXTY_DAYS";
          case CommitmentLength::ONE_YEAR:
            return "ONE_YEAR";
          case CommitmentLength::THREE_YEARS:
            return "THREE_YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommitmentLengthMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
