/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioPersona.h>
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
      namespace StudioPersonaMapper
      {

        static const int ADMINISTRATOR_HASH = HashingUtils::HashString("ADMINISTRATOR");


        StudioPersona GetStudioPersonaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMINISTRATOR_HASH)
          {
            return StudioPersona::ADMINISTRATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioPersona>(hashCode);
          }

          return StudioPersona::NOT_SET;
        }

        Aws::String GetNameForStudioPersona(StudioPersona enumValue)
        {
          switch(enumValue)
          {
          case StudioPersona::NOT_SET:
            return {};
          case StudioPersona::ADMINISTRATOR:
            return "ADMINISTRATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioPersonaMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
