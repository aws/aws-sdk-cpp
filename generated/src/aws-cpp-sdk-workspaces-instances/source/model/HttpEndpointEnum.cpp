/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/HttpEndpointEnum.h>
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
      namespace HttpEndpointEnumMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        HttpEndpointEnum GetHttpEndpointEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return HttpEndpointEnum::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return HttpEndpointEnum::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpEndpointEnum>(hashCode);
          }

          return HttpEndpointEnum::NOT_SET;
        }

        Aws::String GetNameForHttpEndpointEnum(HttpEndpointEnum enumValue)
        {
          switch(enumValue)
          {
          case HttpEndpointEnum::NOT_SET:
            return {};
          case HttpEndpointEnum::enabled:
            return "enabled";
          case HttpEndpointEnum::disabled:
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

      } // namespace HttpEndpointEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
