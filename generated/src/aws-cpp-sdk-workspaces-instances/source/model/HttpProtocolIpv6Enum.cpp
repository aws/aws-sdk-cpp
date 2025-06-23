/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/HttpProtocolIpv6Enum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace HttpProtocolIpv6EnumMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        HttpProtocolIpv6Enum GetHttpProtocolIpv6EnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return HttpProtocolIpv6Enum::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return HttpProtocolIpv6Enum::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpProtocolIpv6Enum>(hashCode);
          }

          return HttpProtocolIpv6Enum::NOT_SET;
        }

        Aws::String GetNameForHttpProtocolIpv6Enum(HttpProtocolIpv6Enum enumValue)
        {
          switch(enumValue)
          {
          case HttpProtocolIpv6Enum::NOT_SET:
            return {};
          case HttpProtocolIpv6Enum::enabled:
            return "enabled";
          case HttpProtocolIpv6Enum::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpProtocolIpv6EnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
