/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ServiceCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace ServiceCodeMapper
      {

        static const int ssm_incidents_HASH = HashingUtils::HashString("ssm-incidents");


        ServiceCode GetServiceCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ssm_incidents_HASH)
          {
            return ServiceCode::ssm_incidents;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceCode>(hashCode);
          }

          return ServiceCode::NOT_SET;
        }

        Aws::String GetNameForServiceCode(ServiceCode enumValue)
        {
          switch(enumValue)
          {
          case ServiceCode::NOT_SET:
            return {};
          case ServiceCode::ssm_incidents:
            return "ssm-incidents";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceCodeMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
