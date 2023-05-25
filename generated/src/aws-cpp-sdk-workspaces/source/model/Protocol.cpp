/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Protocol.h>
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
      namespace ProtocolMapper
      {

        static const int PCOIP_HASH = HashingUtils::HashString("PCOIP");
        static const int WSP_HASH = HashingUtils::HashString("WSP");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PCOIP_HASH)
          {
            return Protocol::PCOIP;
          }
          else if (hashCode == WSP_HASH)
          {
            return Protocol::WSP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::PCOIP:
            return "PCOIP";
          case Protocol::WSP:
            return "WSP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
