/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/OutpostResolverStatus.h>
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
      namespace OutpostResolverStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTION_NEEDED_HASH = HashingUtils::HashString("ACTION_NEEDED");
        static const int FAILED_CREATION_HASH = HashingUtils::HashString("FAILED_CREATION");
        static const int FAILED_DELETION_HASH = HashingUtils::HashString("FAILED_DELETION");


        OutpostResolverStatus GetOutpostResolverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return OutpostResolverStatus::CREATING;
          }
          else if (hashCode == OPERATIONAL_HASH)
          {
            return OutpostResolverStatus::OPERATIONAL;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return OutpostResolverStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return OutpostResolverStatus::DELETING;
          }
          else if (hashCode == ACTION_NEEDED_HASH)
          {
            return OutpostResolverStatus::ACTION_NEEDED;
          }
          else if (hashCode == FAILED_CREATION_HASH)
          {
            return OutpostResolverStatus::FAILED_CREATION;
          }
          else if (hashCode == FAILED_DELETION_HASH)
          {
            return OutpostResolverStatus::FAILED_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutpostResolverStatus>(hashCode);
          }

          return OutpostResolverStatus::NOT_SET;
        }

        Aws::String GetNameForOutpostResolverStatus(OutpostResolverStatus enumValue)
        {
          switch(enumValue)
          {
          case OutpostResolverStatus::NOT_SET:
            return {};
          case OutpostResolverStatus::CREATING:
            return "CREATING";
          case OutpostResolverStatus::OPERATIONAL:
            return "OPERATIONAL";
          case OutpostResolverStatus::UPDATING:
            return "UPDATING";
          case OutpostResolverStatus::DELETING:
            return "DELETING";
          case OutpostResolverStatus::ACTION_NEEDED:
            return "ACTION_NEEDED";
          case OutpostResolverStatus::FAILED_CREATION:
            return "FAILED_CREATION";
          case OutpostResolverStatus::FAILED_DELETION:
            return "FAILED_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutpostResolverStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
