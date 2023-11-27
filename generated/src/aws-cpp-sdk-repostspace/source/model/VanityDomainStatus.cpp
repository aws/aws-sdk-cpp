/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/VanityDomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace VanityDomainStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int UNAPPROVED_HASH = HashingUtils::HashString("UNAPPROVED");


        VanityDomainStatus GetVanityDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return VanityDomainStatus::PENDING;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return VanityDomainStatus::APPROVED;
          }
          else if (hashCode == UNAPPROVED_HASH)
          {
            return VanityDomainStatus::UNAPPROVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VanityDomainStatus>(hashCode);
          }

          return VanityDomainStatus::NOT_SET;
        }

        Aws::String GetNameForVanityDomainStatus(VanityDomainStatus enumValue)
        {
          switch(enumValue)
          {
          case VanityDomainStatus::NOT_SET:
            return {};
          case VanityDomainStatus::PENDING:
            return "PENDING";
          case VanityDomainStatus::APPROVED:
            return "APPROVED";
          case VanityDomainStatus::UNAPPROVED:
            return "UNAPPROVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VanityDomainStatusMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
