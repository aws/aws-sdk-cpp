/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ZeroETLIntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ZeroETLIntegrationStatusMapper
      {

        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int syncing_HASH = HashingUtils::HashString("syncing");
        static const int needs_attention_HASH = HashingUtils::HashString("needs_attention");


        ZeroETLIntegrationStatus GetZeroETLIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return ZeroETLIntegrationStatus::creating;
          }
          else if (hashCode == active_HASH)
          {
            return ZeroETLIntegrationStatus::active;
          }
          else if (hashCode == modifying_HASH)
          {
            return ZeroETLIntegrationStatus::modifying;
          }
          else if (hashCode == failed_HASH)
          {
            return ZeroETLIntegrationStatus::failed;
          }
          else if (hashCode == deleting_HASH)
          {
            return ZeroETLIntegrationStatus::deleting;
          }
          else if (hashCode == syncing_HASH)
          {
            return ZeroETLIntegrationStatus::syncing;
          }
          else if (hashCode == needs_attention_HASH)
          {
            return ZeroETLIntegrationStatus::needs_attention;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZeroETLIntegrationStatus>(hashCode);
          }

          return ZeroETLIntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForZeroETLIntegrationStatus(ZeroETLIntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case ZeroETLIntegrationStatus::NOT_SET:
            return {};
          case ZeroETLIntegrationStatus::creating:
            return "creating";
          case ZeroETLIntegrationStatus::active:
            return "active";
          case ZeroETLIntegrationStatus::modifying:
            return "modifying";
          case ZeroETLIntegrationStatus::failed:
            return "failed";
          case ZeroETLIntegrationStatus::deleting:
            return "deleting";
          case ZeroETLIntegrationStatus::syncing:
            return "syncing";
          case ZeroETLIntegrationStatus::needs_attention:
            return "needs_attention";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZeroETLIntegrationStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
