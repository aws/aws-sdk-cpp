/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/EndpointProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace EndpointProtocolMapper
      {

        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");


        EndpointProtocol GetEndpointProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTPS_HASH)
          {
            return EndpointProtocol::HTTPS;
          }
          else if (hashCode == SQS_HASH)
          {
            return EndpointProtocol::SQS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointProtocol>(hashCode);
          }

          return EndpointProtocol::NOT_SET;
        }

        Aws::String GetNameForEndpointProtocol(EndpointProtocol enumValue)
        {
          switch(enumValue)
          {
          case EndpointProtocol::HTTPS:
            return "HTTPS";
          case EndpointProtocol::SQS:
            return "SQS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointProtocolMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
