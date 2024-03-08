/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PostLaunchActionExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace PostLaunchActionExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PostLaunchActionExecutionStatus GetPostLaunchActionExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return PostLaunchActionExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return PostLaunchActionExecutionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PostLaunchActionExecutionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostLaunchActionExecutionStatus>(hashCode);
          }

          return PostLaunchActionExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForPostLaunchActionExecutionStatus(PostLaunchActionExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case PostLaunchActionExecutionStatus::NOT_SET:
            return {};
          case PostLaunchActionExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case PostLaunchActionExecutionStatus::SUCCESS:
            return "SUCCESS";
          case PostLaunchActionExecutionStatus::FAILED:
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

      } // namespace PostLaunchActionExecutionStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
