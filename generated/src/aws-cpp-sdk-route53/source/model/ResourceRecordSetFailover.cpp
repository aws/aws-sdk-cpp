/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ResourceRecordSetFailover.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ResourceRecordSetFailoverMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");


        ResourceRecordSetFailover GetResourceRecordSetFailoverForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return ResourceRecordSetFailover::PRIMARY;
          }
          else if (hashCode == SECONDARY_HASH)
          {
            return ResourceRecordSetFailover::SECONDARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceRecordSetFailover>(hashCode);
          }

          return ResourceRecordSetFailover::NOT_SET;
        }

        Aws::String GetNameForResourceRecordSetFailover(ResourceRecordSetFailover enumValue)
        {
          switch(enumValue)
          {
          case ResourceRecordSetFailover::PRIMARY:
            return "PRIMARY";
          case ResourceRecordSetFailover::SECONDARY:
            return "SECONDARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceRecordSetFailoverMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
