/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverAutodefinedReverseStatus.h>
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
      namespace ResolverAutodefinedReverseStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int UPDATING_TO_USE_LOCAL_RESOURCE_SETTING_HASH = HashingUtils::HashString("UPDATING_TO_USE_LOCAL_RESOURCE_SETTING");
        static const int USE_LOCAL_RESOURCE_SETTING_HASH = HashingUtils::HashString("USE_LOCAL_RESOURCE_SETTING");


        ResolverAutodefinedReverseStatus GetResolverAutodefinedReverseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return ResolverAutodefinedReverseStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ResolverAutodefinedReverseStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return ResolverAutodefinedReverseStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ResolverAutodefinedReverseStatus::DISABLED;
          }
          else if (hashCode == UPDATING_TO_USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return ResolverAutodefinedReverseStatus::UPDATING_TO_USE_LOCAL_RESOURCE_SETTING;
          }
          else if (hashCode == USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return ResolverAutodefinedReverseStatus::USE_LOCAL_RESOURCE_SETTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverAutodefinedReverseStatus>(hashCode);
          }

          return ResolverAutodefinedReverseStatus::NOT_SET;
        }

        Aws::String GetNameForResolverAutodefinedReverseStatus(ResolverAutodefinedReverseStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverAutodefinedReverseStatus::NOT_SET:
            return {};
          case ResolverAutodefinedReverseStatus::ENABLING:
            return "ENABLING";
          case ResolverAutodefinedReverseStatus::ENABLED:
            return "ENABLED";
          case ResolverAutodefinedReverseStatus::DISABLING:
            return "DISABLING";
          case ResolverAutodefinedReverseStatus::DISABLED:
            return "DISABLED";
          case ResolverAutodefinedReverseStatus::UPDATING_TO_USE_LOCAL_RESOURCE_SETTING:
            return "UPDATING_TO_USE_LOCAL_RESOURCE_SETTING";
          case ResolverAutodefinedReverseStatus::USE_LOCAL_RESOURCE_SETTING:
            return "USE_LOCAL_RESOURCE_SETTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverAutodefinedReverseStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
