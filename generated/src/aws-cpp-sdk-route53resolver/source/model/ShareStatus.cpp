/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static const int NOT_SHARED_HASH = HashingUtils::HashString("NOT_SHARED");
        static const int SHARED_WITH_ME_HASH = HashingUtils::HashString("SHARED_WITH_ME");
        static const int SHARED_BY_ME_HASH = HashingUtils::HashString("SHARED_BY_ME");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_SHARED_HASH)
          {
            return ShareStatus::NOT_SHARED;
          }
          else if (hashCode == SHARED_WITH_ME_HASH)
          {
            return ShareStatus::SHARED_WITH_ME;
          }
          else if (hashCode == SHARED_BY_ME_HASH)
          {
            return ShareStatus::SHARED_BY_ME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::NOT_SHARED:
            return "NOT_SHARED";
          case ShareStatus::SHARED_WITH_ME:
            return "SHARED_WITH_ME";
          case ShareStatus::SHARED_BY_ME:
            return "SHARED_BY_ME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
