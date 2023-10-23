/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TunnelProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace TunnelProtocolMapper
      {

        static const int GRE_HASH = HashingUtils::HashString("GRE");
        static const int NO_ENCAP_HASH = HashingUtils::HashString("NO_ENCAP");


        TunnelProtocol GetTunnelProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRE_HASH)
          {
            return TunnelProtocol::GRE;
          }
          else if (hashCode == NO_ENCAP_HASH)
          {
            return TunnelProtocol::NO_ENCAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TunnelProtocol>(hashCode);
          }

          return TunnelProtocol::NOT_SET;
        }

        Aws::String GetNameForTunnelProtocol(TunnelProtocol enumValue)
        {
          switch(enumValue)
          {
          case TunnelProtocol::NOT_SET:
            return {};
          case TunnelProtocol::GRE:
            return "GRE";
          case TunnelProtocol::NO_ENCAP:
            return "NO_ENCAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TunnelProtocolMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
