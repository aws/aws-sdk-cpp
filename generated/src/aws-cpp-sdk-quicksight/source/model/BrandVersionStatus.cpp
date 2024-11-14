/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandVersionStatus.h>
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
      namespace BrandVersionStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_SUCCEEDED_HASH = HashingUtils::HashString("CREATE_SUCCEEDED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");


        BrandVersionStatus GetBrandVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return BrandVersionStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_SUCCEEDED_HASH)
          {
            return BrandVersionStatus::CREATE_SUCCEEDED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return BrandVersionStatus::CREATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrandVersionStatus>(hashCode);
          }

          return BrandVersionStatus::NOT_SET;
        }

        Aws::String GetNameForBrandVersionStatus(BrandVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case BrandVersionStatus::NOT_SET:
            return {};
          case BrandVersionStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case BrandVersionStatus::CREATE_SUCCEEDED:
            return "CREATE_SUCCEEDED";
          case BrandVersionStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrandVersionStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
