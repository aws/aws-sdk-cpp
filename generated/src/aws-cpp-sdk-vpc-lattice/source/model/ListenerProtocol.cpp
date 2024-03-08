/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ListenerProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ListenerProtocolMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");


        ListenerProtocol GetListenerProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return ListenerProtocol::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ListenerProtocol::HTTPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListenerProtocol>(hashCode);
          }

          return ListenerProtocol::NOT_SET;
        }

        Aws::String GetNameForListenerProtocol(ListenerProtocol enumValue)
        {
          switch(enumValue)
          {
          case ListenerProtocol::NOT_SET:
            return {};
          case ListenerProtocol::HTTP:
            return "HTTP";
          case ListenerProtocol::HTTPS:
            return "HTTPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListenerProtocolMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
