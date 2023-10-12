/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StoreStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace StoreStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        StoreStatus GetStoreStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return StoreStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return StoreStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StoreStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return StoreStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StoreStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StoreStatus>(hashCode);
          }

          return StoreStatus::NOT_SET;
        }

        Aws::String GetNameForStoreStatus(StoreStatus enumValue)
        {
          switch(enumValue)
          {
          case StoreStatus::NOT_SET:
            return {};
          case StoreStatus::CREATING:
            return "CREATING";
          case StoreStatus::UPDATING:
            return "UPDATING";
          case StoreStatus::DELETING:
            return "DELETING";
          case StoreStatus::ACTIVE:
            return "ACTIVE";
          case StoreStatus::FAILED:
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

      } // namespace StoreStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
