/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/WaveProgressStatus.h>
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
      namespace WaveProgressStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        WaveProgressStatus GetWaveProgressStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return WaveProgressStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return WaveProgressStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WaveProgressStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaveProgressStatus>(hashCode);
          }

          return WaveProgressStatus::NOT_SET;
        }

        Aws::String GetNameForWaveProgressStatus(WaveProgressStatus enumValue)
        {
          switch(enumValue)
          {
          case WaveProgressStatus::NOT_STARTED:
            return "NOT_STARTED";
          case WaveProgressStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case WaveProgressStatus::COMPLETED:
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

      } // namespace WaveProgressStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
