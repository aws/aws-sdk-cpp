/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RecordMarkerFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace RecordMarkerFailedCauseMapper
      {

        static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OPERATION_NOT_PERMITTED");


        RecordMarkerFailedCause GetRecordMarkerFailedCauseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return RecordMarkerFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordMarkerFailedCause>(hashCode);
          }

          return RecordMarkerFailedCause::NOT_SET;
        }

        Aws::String GetNameForRecordMarkerFailedCause(RecordMarkerFailedCause enumValue)
        {
          switch(enumValue)
          {
          case RecordMarkerFailedCause::NOT_SET:
            return {};
          case RecordMarkerFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordMarkerFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
