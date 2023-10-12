/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ChangeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace ChangeStatusMapper
      {

        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t APPLYING_HASH = ConstExprHashingUtils::HashString("APPLYING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ChangeStatus GetChangeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREPARING_HASH)
          {
            return ChangeStatus::PREPARING;
          }
          else if (hashCode == APPLYING_HASH)
          {
            return ChangeStatus::APPLYING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ChangeStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ChangeStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeStatus>(hashCode);
          }

          return ChangeStatus::NOT_SET;
        }

        Aws::String GetNameForChangeStatus(ChangeStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeStatus::NOT_SET:
            return {};
          case ChangeStatus::PREPARING:
            return "PREPARING";
          case ChangeStatus::APPLYING:
            return "APPLYING";
          case ChangeStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ChangeStatus::CANCELLED:
            return "CANCELLED";
          case ChangeStatus::FAILED:
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

      } // namespace ChangeStatusMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
