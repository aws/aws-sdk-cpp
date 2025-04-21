/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PrefetchScheduleType.h>
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
      namespace PrefetchScheduleTypeMapper
      {

        static const int SINGLE_HASH = HashingUtils::HashString("SINGLE");
        static const int RECURRING_HASH = HashingUtils::HashString("RECURRING");


        PrefetchScheduleType GetPrefetchScheduleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_HASH)
          {
            return PrefetchScheduleType::SINGLE;
          }
          else if (hashCode == RECURRING_HASH)
          {
            return PrefetchScheduleType::RECURRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrefetchScheduleType>(hashCode);
          }

          return PrefetchScheduleType::NOT_SET;
        }

        Aws::String GetNameForPrefetchScheduleType(PrefetchScheduleType enumValue)
        {
          switch(enumValue)
          {
          case PrefetchScheduleType::NOT_SET:
            return {};
          case PrefetchScheduleType::SINGLE:
            return "SINGLE";
          case PrefetchScheduleType::RECURRING:
            return "RECURRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrefetchScheduleTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
