/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PersonalizationControlMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace PersonalizationControlModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PersonalizationControlMode GetPersonalizationControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PersonalizationControlMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PersonalizationControlMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonalizationControlMode>(hashCode);
          }

          return PersonalizationControlMode::NOT_SET;
        }

        Aws::String GetNameForPersonalizationControlMode(PersonalizationControlMode enumValue)
        {
          switch(enumValue)
          {
          case PersonalizationControlMode::NOT_SET:
            return {};
          case PersonalizationControlMode::ENABLED:
            return "ENABLED";
          case PersonalizationControlMode::DISABLED:
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

      } // namespace PersonalizationControlModeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
