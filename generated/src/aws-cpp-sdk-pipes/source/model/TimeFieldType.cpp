/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/TimeFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace TimeFieldTypeMapper
      {

        static const int EPOCH_HASH = HashingUtils::HashString("EPOCH");
        static const int TIMESTAMP_FORMAT_HASH = HashingUtils::HashString("TIMESTAMP_FORMAT");


        TimeFieldType GetTimeFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EPOCH_HASH)
          {
            return TimeFieldType::EPOCH;
          }
          else if (hashCode == TIMESTAMP_FORMAT_HASH)
          {
            return TimeFieldType::TIMESTAMP_FORMAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeFieldType>(hashCode);
          }

          return TimeFieldType::NOT_SET;
        }

        Aws::String GetNameForTimeFieldType(TimeFieldType enumValue)
        {
          switch(enumValue)
          {
          case TimeFieldType::NOT_SET:
            return {};
          case TimeFieldType::EPOCH:
            return "EPOCH";
          case TimeFieldType::TIMESTAMP_FORMAT:
            return "TIMESTAMP_FORMAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeFieldTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
