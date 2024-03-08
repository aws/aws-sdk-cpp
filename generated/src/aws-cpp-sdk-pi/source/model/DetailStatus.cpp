/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DetailStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace DetailStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        DetailStatus GetDetailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return DetailStatus::AVAILABLE;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return DetailStatus::PROCESSING;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return DetailStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailStatus>(hashCode);
          }

          return DetailStatus::NOT_SET;
        }

        Aws::String GetNameForDetailStatus(DetailStatus enumValue)
        {
          switch(enumValue)
          {
          case DetailStatus::NOT_SET:
            return {};
          case DetailStatus::AVAILABLE:
            return "AVAILABLE";
          case DetailStatus::PROCESSING:
            return "PROCESSING";
          case DetailStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailStatusMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
