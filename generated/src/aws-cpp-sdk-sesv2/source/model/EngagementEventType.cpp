/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EngagementEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace EngagementEventTypeMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLICK_HASH = HashingUtils::HashString("CLICK");


        EngagementEventType GetEngagementEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return EngagementEventType::OPEN;
          }
          else if (hashCode == CLICK_HASH)
          {
            return EngagementEventType::CLICK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngagementEventType>(hashCode);
          }

          return EngagementEventType::NOT_SET;
        }

        Aws::String GetNameForEngagementEventType(EngagementEventType enumValue)
        {
          switch(enumValue)
          {
          case EngagementEventType::NOT_SET:
            return {};
          case EngagementEventType::OPEN:
            return "OPEN";
          case EngagementEventType::CLICK:
            return "CLICK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngagementEventTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
