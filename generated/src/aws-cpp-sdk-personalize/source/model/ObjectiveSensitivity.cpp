/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ObjectiveSensitivity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace ObjectiveSensitivityMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        ObjectiveSensitivity GetObjectiveSensitivityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return ObjectiveSensitivity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ObjectiveSensitivity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ObjectiveSensitivity::HIGH;
          }
          else if (hashCode == OFF_HASH)
          {
            return ObjectiveSensitivity::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectiveSensitivity>(hashCode);
          }

          return ObjectiveSensitivity::NOT_SET;
        }

        Aws::String GetNameForObjectiveSensitivity(ObjectiveSensitivity enumValue)
        {
          switch(enumValue)
          {
          case ObjectiveSensitivity::NOT_SET:
            return {};
          case ObjectiveSensitivity::LOW:
            return "LOW";
          case ObjectiveSensitivity::MEDIUM:
            return "MEDIUM";
          case ObjectiveSensitivity::HIGH:
            return "HIGH";
          case ObjectiveSensitivity::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectiveSensitivityMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
