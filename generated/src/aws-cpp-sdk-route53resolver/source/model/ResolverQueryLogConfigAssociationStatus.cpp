/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverQueryLogConfigAssociationStatus.h>
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
      namespace ResolverQueryLogConfigAssociationStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t ACTION_NEEDED_HASH = ConstExprHashingUtils::HashString("ACTION_NEEDED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ResolverQueryLogConfigAssociationStatus GetResolverQueryLogConfigAssociationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ResolverQueryLogConfigAssociationStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ResolverQueryLogConfigAssociationStatus::ACTIVE;
          }
          else if (hashCode == ACTION_NEEDED_HASH)
          {
            return ResolverQueryLogConfigAssociationStatus::ACTION_NEEDED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResolverQueryLogConfigAssociationStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResolverQueryLogConfigAssociationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverQueryLogConfigAssociationStatus>(hashCode);
          }

          return ResolverQueryLogConfigAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForResolverQueryLogConfigAssociationStatus(ResolverQueryLogConfigAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverQueryLogConfigAssociationStatus::NOT_SET:
            return {};
          case ResolverQueryLogConfigAssociationStatus::CREATING:
            return "CREATING";
          case ResolverQueryLogConfigAssociationStatus::ACTIVE:
            return "ACTIVE";
          case ResolverQueryLogConfigAssociationStatus::ACTION_NEEDED:
            return "ACTION_NEEDED";
          case ResolverQueryLogConfigAssociationStatus::DELETING:
            return "DELETING";
          case ResolverQueryLogConfigAssociationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverQueryLogConfigAssociationStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
