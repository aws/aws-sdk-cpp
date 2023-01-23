/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ApplicationProgressStatus.h>
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
      namespace ApplicationProgressStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ApplicationProgressStatus GetApplicationProgressStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ApplicationProgressStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ApplicationProgressStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ApplicationProgressStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationProgressStatus>(hashCode);
          }

          return ApplicationProgressStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationProgressStatus(ApplicationProgressStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationProgressStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ApplicationProgressStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ApplicationProgressStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationProgressStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
