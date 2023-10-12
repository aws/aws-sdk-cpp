/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LivenessSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace LivenessSessionStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        LivenessSessionStatus GetLivenessSessionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return LivenessSessionStatus::CREATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return LivenessSessionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return LivenessSessionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LivenessSessionStatus::FAILED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return LivenessSessionStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LivenessSessionStatus>(hashCode);
          }

          return LivenessSessionStatus::NOT_SET;
        }

        Aws::String GetNameForLivenessSessionStatus(LivenessSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case LivenessSessionStatus::NOT_SET:
            return {};
          case LivenessSessionStatus::CREATED:
            return "CREATED";
          case LivenessSessionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LivenessSessionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LivenessSessionStatus::FAILED:
            return "FAILED";
          case LivenessSessionStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LivenessSessionStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
