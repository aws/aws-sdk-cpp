/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ServiceAuthorization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ServiceAuthorizationMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ServiceAuthorization GetServiceAuthorizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ServiceAuthorization::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ServiceAuthorization::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceAuthorization>(hashCode);
          }

          return ServiceAuthorization::NOT_SET;
        }

        Aws::String GetNameForServiceAuthorization(ServiceAuthorization enumValue)
        {
          switch(enumValue)
          {
          case ServiceAuthorization::NOT_SET:
            return {};
          case ServiceAuthorization::Enabled:
            return "Enabled";
          case ServiceAuthorization::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceAuthorizationMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
