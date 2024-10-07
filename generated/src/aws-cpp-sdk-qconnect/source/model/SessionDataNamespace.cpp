/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SessionDataNamespace.h>
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
      namespace SessionDataNamespaceMapper
      {

        static const int Custom_HASH = HashingUtils::HashString("Custom");


        SessionDataNamespace GetSessionDataNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Custom_HASH)
          {
            return SessionDataNamespace::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionDataNamespace>(hashCode);
          }

          return SessionDataNamespace::NOT_SET;
        }

        Aws::String GetNameForSessionDataNamespace(SessionDataNamespace enumValue)
        {
          switch(enumValue)
          {
          case SessionDataNamespace::NOT_SET:
            return {};
          case SessionDataNamespace::Custom:
            return "Custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionDataNamespaceMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
