/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CopyProductStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace CopyProductStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CopyProductStatus GetCopyProductStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return CopyProductStatus::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CopyProductStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CopyProductStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyProductStatus>(hashCode);
          }

          return CopyProductStatus::NOT_SET;
        }

        Aws::String GetNameForCopyProductStatus(CopyProductStatus enumValue)
        {
          switch(enumValue)
          {
          case CopyProductStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CopyProductStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CopyProductStatus::FAILED:
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

      } // namespace CopyProductStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
