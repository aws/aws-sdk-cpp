/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentInitializationScriptRunContext.h>
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
      namespace StudioComponentInitializationScriptRunContextMapper
      {

        static const int SYSTEM_INITIALIZATION_HASH = HashingUtils::HashString("SYSTEM_INITIALIZATION");
        static const int USER_INITIALIZATION_HASH = HashingUtils::HashString("USER_INITIALIZATION");


        StudioComponentInitializationScriptRunContext GetStudioComponentInitializationScriptRunContextForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_INITIALIZATION_HASH)
          {
            return StudioComponentInitializationScriptRunContext::SYSTEM_INITIALIZATION;
          }
          else if (hashCode == USER_INITIALIZATION_HASH)
          {
            return StudioComponentInitializationScriptRunContext::USER_INITIALIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioComponentInitializationScriptRunContext>(hashCode);
          }

          return StudioComponentInitializationScriptRunContext::NOT_SET;
        }

        Aws::String GetNameForStudioComponentInitializationScriptRunContext(StudioComponentInitializationScriptRunContext enumValue)
        {
          switch(enumValue)
          {
          case StudioComponentInitializationScriptRunContext::NOT_SET:
            return {};
          case StudioComponentInitializationScriptRunContext::SYSTEM_INITIALIZATION:
            return "SYSTEM_INITIALIZATION";
          case StudioComponentInitializationScriptRunContext::USER_INITIALIZATION:
            return "USER_INITIALIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioComponentInitializationScriptRunContextMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
