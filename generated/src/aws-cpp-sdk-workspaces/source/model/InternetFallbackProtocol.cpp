/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/InternetFallbackProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace InternetFallbackProtocolMapper
      {

        static const int PCOIP_HASH = HashingUtils::HashString("PCOIP");


        InternetFallbackProtocol GetInternetFallbackProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PCOIP_HASH)
          {
            return InternetFallbackProtocol::PCOIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternetFallbackProtocol>(hashCode);
          }

          return InternetFallbackProtocol::NOT_SET;
        }

        Aws::String GetNameForInternetFallbackProtocol(InternetFallbackProtocol enumValue)
        {
          switch(enumValue)
          {
          case InternetFallbackProtocol::NOT_SET:
            return {};
          case InternetFallbackProtocol::PCOIP:
            return "PCOIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternetFallbackProtocolMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
