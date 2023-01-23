/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RecordState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace RecordStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        RecordState GetRecordStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RecordState::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return RecordState::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordState>(hashCode);
          }

          return RecordState::NOT_SET;
        }

        Aws::String GetNameForRecordState(RecordState enumValue)
        {
          switch(enumValue)
          {
          case RecordState::ACTIVE:
            return "ACTIVE";
          case RecordState::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordStateMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
