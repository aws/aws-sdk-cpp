/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/StreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace StreamStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t IMPAIRED_HASH = ConstExprHashingUtils::HashString("IMPAIRED");


        StreamStatus GetStreamStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return StreamStatus::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StreamStatus::COMPLETED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return StreamStatus::CANCELED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StreamStatus::FAILED;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return StreamStatus::IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamStatus>(hashCode);
          }

          return StreamStatus::NOT_SET;
        }

        Aws::String GetNameForStreamStatus(StreamStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamStatus::NOT_SET:
            return {};
          case StreamStatus::ACTIVE:
            return "ACTIVE";
          case StreamStatus::COMPLETED:
            return "COMPLETED";
          case StreamStatus::CANCELED:
            return "CANCELED";
          case StreamStatus::FAILED:
            return "FAILED";
          case StreamStatus::IMPAIRED:
            return "IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamStatusMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
