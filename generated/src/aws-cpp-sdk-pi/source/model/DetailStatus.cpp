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

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");


        DetailStatus GetDetailStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
