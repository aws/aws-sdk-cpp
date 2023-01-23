/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/QueueStatus.h>
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
      namespace QueueStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");


        QueueStatus GetQueueStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return QueueStatus::ACTIVE;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return QueueStatus::PAUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueStatus>(hashCode);
          }

          return QueueStatus::NOT_SET;
        }

        Aws::String GetNameForQueueStatus(QueueStatus enumValue)
        {
          switch(enumValue)
          {
          case QueueStatus::ACTIVE:
            return "ACTIVE";
          case QueueStatus::PAUSED:
            return "PAUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
