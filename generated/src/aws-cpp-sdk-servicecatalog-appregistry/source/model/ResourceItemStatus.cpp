/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace ResourceItemStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        ResourceItemStatus GetResourceItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ResourceItemStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceItemStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceItemStatus::IN_PROGRESS;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return ResourceItemStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceItemStatus>(hashCode);
          }

          return ResourceItemStatus::NOT_SET;
        }

        Aws::String GetNameForResourceItemStatus(ResourceItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceItemStatus::NOT_SET:
            return {};
          case ResourceItemStatus::SUCCESS:
            return "SUCCESS";
          case ResourceItemStatus::FAILED:
            return "FAILED";
          case ResourceItemStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceItemStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceItemStatusMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws
