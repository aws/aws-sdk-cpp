/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PersonalizationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace PersonalizationModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PersonalizationMode GetPersonalizationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PersonalizationMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PersonalizationMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonalizationMode>(hashCode);
          }

          return PersonalizationMode::NOT_SET;
        }

        Aws::String GetNameForPersonalizationMode(PersonalizationMode enumValue)
        {
          switch(enumValue)
          {
          case PersonalizationMode::NOT_SET:
            return {};
          case PersonalizationMode::ENABLED:
            return "ENABLED";
          case PersonalizationMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonalizationModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
