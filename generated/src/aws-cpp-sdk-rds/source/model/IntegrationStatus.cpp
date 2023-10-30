/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/IntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace IntegrationStatusMapper
      {

        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int syncing_HASH = HashingUtils::HashString("syncing");
        static const int needs_attention_HASH = HashingUtils::HashString("needs_attention");


        IntegrationStatus GetIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return IntegrationStatus::creating;
          }
          else if (hashCode == active_HASH)
          {
            return IntegrationStatus::active;
          }
          else if (hashCode == modifying_HASH)
          {
            return IntegrationStatus::modifying;
          }
          else if (hashCode == failed_HASH)
          {
            return IntegrationStatus::failed;
          }
          else if (hashCode == deleting_HASH)
          {
            return IntegrationStatus::deleting;
          }
          else if (hashCode == syncing_HASH)
          {
            return IntegrationStatus::syncing;
          }
          else if (hashCode == needs_attention_HASH)
          {
            return IntegrationStatus::needs_attention;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationStatus>(hashCode);
          }

          return IntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case IntegrationStatus::NOT_SET:
            return {};
          case IntegrationStatus::creating:
            return "creating";
          case IntegrationStatus::active:
            return "active";
          case IntegrationStatus::modifying:
            return "modifying";
          case IntegrationStatus::failed:
            return "failed";
          case IntegrationStatus::deleting:
            return "deleting";
          case IntegrationStatus::syncing:
            return "syncing";
          case IntegrationStatus::needs_attention:
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

      } // namespace IntegrationStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
