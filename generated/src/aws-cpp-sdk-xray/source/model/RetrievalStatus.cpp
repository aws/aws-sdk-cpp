/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/RetrievalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace RetrievalStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");


        RetrievalStatus GetRetrievalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return RetrievalStatus::SCHEDULED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return RetrievalStatus::RUNNING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return RetrievalStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RetrievalStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return RetrievalStatus::CANCELLED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return RetrievalStatus::TIMEOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalStatus>(hashCode);
          }

          return RetrievalStatus::NOT_SET;
        }

        Aws::String GetNameForRetrievalStatus(RetrievalStatus enumValue)
        {
          switch(enumValue)
          {
          case RetrievalStatus::NOT_SET:
            return {};
          case RetrievalStatus::SCHEDULED:
            return "SCHEDULED";
          case RetrievalStatus::RUNNING:
            return "RUNNING";
          case RetrievalStatus::COMPLETE:
            return "COMPLETE";
          case RetrievalStatus::FAILED:
            return "FAILED";
          case RetrievalStatus::CANCELLED:
            return "CANCELLED";
          case RetrievalStatus::TIMEOUT:
            return "TIMEOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalStatusMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
