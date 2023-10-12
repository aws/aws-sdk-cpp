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

        static constexpr uint32_t GRE_HASH = ConstExprHashingUtils::HashString("GRE");


        TunnelProtocol GetTunnelProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRE_HASH)
          {
            return TunnelProtocol::GRE;
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
