/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverRuleAssociationStatus.h>
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
      namespace ResolverRuleAssociationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int OVERRIDDEN_HASH = HashingUtils::HashString("OVERRIDDEN");


        ResolverRuleAssociationStatus GetResolverRuleAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ResolverRuleAssociationStatus::CREATING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ResolverRuleAssociationStatus::COMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResolverRuleAssociationStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResolverRuleAssociationStatus::FAILED;
          }
          else if (hashCode == OVERRIDDEN_HASH)
          {
            return ResolverRuleAssociationStatus::OVERRIDDEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverRuleAssociationStatus>(hashCode);
          }

          return ResolverRuleAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForResolverRuleAssociationStatus(ResolverRuleAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverRuleAssociationStatus::CREATING:
            return "CREATING";
          case ResolverRuleAssociationStatus::COMPLETE:
            return "COMPLETE";
          case ResolverRuleAssociationStatus::DELETING:
            return "DELETING";
          case ResolverRuleAssociationStatus::FAILED:
            return "FAILED";
          case ResolverRuleAssociationStatus::OVERRIDDEN:
            return "OVERRIDDEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverRuleAssociationStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
