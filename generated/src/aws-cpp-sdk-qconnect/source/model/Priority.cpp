/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Priority.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace PriorityMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        Priority GetPriorityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return Priority::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Priority::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return Priority::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Priority>(hashCode);
          }

          return Priority::NOT_SET;
        }

        Aws::String GetNameForPriority(Priority enumValue)
        {
          switch(enumValue)
          {
          case Priority::NOT_SET:
            return {};
          case Priority::HIGH:
            return "HIGH";
          case Priority::MEDIUM:
            return "MEDIUM";
          case Priority::LOW:
            return "LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PriorityMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
