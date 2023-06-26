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

        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int APPLYING_HASH = HashingUtils::HashString("APPLYING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChangeStatus GetChangeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
