/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ListPrefetchScheduleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace ListPrefetchScheduleTypeMapper
      {

        static const int SINGLE_HASH = HashingUtils::HashString("SINGLE");
        static const int RECURRING_HASH = HashingUtils::HashString("RECURRING");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ListPrefetchScheduleType GetListPrefetchScheduleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_HASH)
          {
            return ListPrefetchScheduleType::SINGLE;
          }
          else if (hashCode == RECURRING_HASH)
          {
            return ListPrefetchScheduleType::RECURRING;
          }
          else if (hashCode == ALL_HASH)
          {
            return ListPrefetchScheduleType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListPrefetchScheduleType>(hashCode);
          }

          return ListPrefetchScheduleType::NOT_SET;
        }

        Aws::String GetNameForListPrefetchScheduleType(ListPrefetchScheduleType enumValue)
        {
          switch(enumValue)
          {
          case ListPrefetchScheduleType::NOT_SET:
            return {};
          case ListPrefetchScheduleType::SINGLE:
            return "SINGLE";
          case ListPrefetchScheduleType::RECURRING:
            return "RECURRING";
          case ListPrefetchScheduleType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListPrefetchScheduleTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
