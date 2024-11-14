/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace BrandStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_SUCCEEDED_HASH = HashingUtils::HashString("CREATE_SUCCEEDED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        BrandStatus GetBrandStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return BrandStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_SUCCEEDED_HASH)
          {
            return BrandStatus::CREATE_SUCCEEDED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return BrandStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return BrandStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return BrandStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrandStatus>(hashCode);
          }

          return BrandStatus::NOT_SET;
        }

        Aws::String GetNameForBrandStatus(BrandStatus enumValue)
        {
          switch(enumValue)
          {
          case BrandStatus::NOT_SET:
            return {};
          case BrandStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case BrandStatus::CREATE_SUCCEEDED:
            return "CREATE_SUCCEEDED";
          case BrandStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case BrandStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case BrandStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrandStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
