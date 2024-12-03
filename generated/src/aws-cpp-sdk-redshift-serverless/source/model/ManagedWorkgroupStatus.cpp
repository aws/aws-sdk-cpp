/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ManagedWorkgroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace ManagedWorkgroupStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");


        ManagedWorkgroupStatus GetManagedWorkgroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ManagedWorkgroupStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ManagedWorkgroupStatus::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return ManagedWorkgroupStatus::MODIFYING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ManagedWorkgroupStatus::AVAILABLE;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return ManagedWorkgroupStatus::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedWorkgroupStatus>(hashCode);
          }

          return ManagedWorkgroupStatus::NOT_SET;
        }

        Aws::String GetNameForManagedWorkgroupStatus(ManagedWorkgroupStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedWorkgroupStatus::NOT_SET:
            return {};
          case ManagedWorkgroupStatus::CREATING:
            return "CREATING";
          case ManagedWorkgroupStatus::DELETING:
            return "DELETING";
          case ManagedWorkgroupStatus::MODIFYING:
            return "MODIFYING";
          case ManagedWorkgroupStatus::AVAILABLE:
            return "AVAILABLE";
          case ManagedWorkgroupStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedWorkgroupStatusMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
