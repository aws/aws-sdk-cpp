/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AccelerationStatus.h>
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
      namespace AccelerationStatusMapper
      {

        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ACCELERATED_HASH = HashingUtils::HashString("ACCELERATED");
        static const int NOT_ACCELERATED_HASH = HashingUtils::HashString("NOT_ACCELERATED");


        AccelerationStatus GetAccelerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_APPLICABLE_HASH)
          {
            return AccelerationStatus::NOT_APPLICABLE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AccelerationStatus::IN_PROGRESS;
          }
          else if (hashCode == ACCELERATED_HASH)
          {
            return AccelerationStatus::ACCELERATED;
          }
          else if (hashCode == NOT_ACCELERATED_HASH)
          {
            return AccelerationStatus::NOT_ACCELERATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccelerationStatus>(hashCode);
          }

          return AccelerationStatus::NOT_SET;
        }

        Aws::String GetNameForAccelerationStatus(AccelerationStatus enumValue)
        {
          switch(enumValue)
          {
          case AccelerationStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case AccelerationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AccelerationStatus::ACCELERATED:
            return "ACCELERATED";
          case AccelerationStatus::NOT_ACCELERATED:
            return "NOT_ACCELERATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccelerationStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
