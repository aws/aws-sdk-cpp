/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfilePersona.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace LaunchProfilePersonaMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");


        LaunchProfilePersona GetLaunchProfilePersonaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return LaunchProfilePersona::USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfilePersona>(hashCode);
          }

          return LaunchProfilePersona::NOT_SET;
        }

        Aws::String GetNameForLaunchProfilePersona(LaunchProfilePersona enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfilePersona::NOT_SET:
            return {};
          case LaunchProfilePersona::USER:
            return "USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfilePersonaMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
