/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static const int NOT_SHARED_HASH = HashingUtils::HashString("NOT_SHARED");
        static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_SHARED_HASH)
          {
            return ShareStatus::NOT_SHARED;
          }
          else if (hashCode == INITIATED_HASH)
          {
            return ShareStatus::INITIATED;
          }
          else if (hashCode == SHARED_HASH)
          {
            return ShareStatus::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::NOT_SET:
            return {};
          case ShareStatus::NOT_SHARED:
            return "NOT_SHARED";
          case ShareStatus::INITIATED:
            return "INITIATED";
          case ShareStatus::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
