/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/PreferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace PreferenceTypeMapper
      {

        static const int NO_PREFERENCE_HASH = HashingUtils::HashString("NO_PREFERENCE");
        static const int CUSTOM_PREFERENCE_HASH = HashingUtils::HashString("CUSTOM_PREFERENCE");


        PreferenceType GetPreferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PREFERENCE_HASH)
          {
            return PreferenceType::NO_PREFERENCE;
          }
          else if (hashCode == CUSTOM_PREFERENCE_HASH)
          {
            return PreferenceType::CUSTOM_PREFERENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreferenceType>(hashCode);
          }

          return PreferenceType::NOT_SET;
        }

        Aws::String GetNameForPreferenceType(PreferenceType enumValue)
        {
          switch(enumValue)
          {
          case PreferenceType::NOT_SET:
            return {};
          case PreferenceType::NO_PREFERENCE:
            return "NO_PREFERENCE";
          case PreferenceType::CUSTOM_PREFERENCE:
            return "CUSTOM_PREFERENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreferenceTypeMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
