/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Fault.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace FaultMapper
      {

        static constexpr uint32_t Client_HASH = ConstExprHashingUtils::HashString("Client");
        static constexpr uint32_t Server_HASH = ConstExprHashingUtils::HashString("Server");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");


        Fault GetFaultForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Client_HASH)
          {
            return Fault::Client;
          }
          else if (hashCode == Server_HASH)
          {
            return Fault::Server;
          }
          else if (hashCode == Unknown_HASH)
          {
            return Fault::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Fault>(hashCode);
          }

          return Fault::NOT_SET;
        }

        Aws::String GetNameForFault(Fault enumValue)
        {
          switch(enumValue)
          {
          case Fault::NOT_SET:
            return {};
          case Fault::Client:
            return "Client";
          case Fault::Server:
            return "Server";
          case Fault::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaultMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
