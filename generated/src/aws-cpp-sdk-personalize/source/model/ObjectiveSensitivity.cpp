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

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");


        ObjectiveSensitivity GetObjectiveSensitivityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
