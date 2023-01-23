/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/ServiceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace ServiceFilterNameMapper
      {

        static const int NAMESPACE_ID_HASH = HashingUtils::HashString("NAMESPACE_ID");


        ServiceFilterName GetServiceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAMESPACE_ID_HASH)
          {
            return ServiceFilterName::NAMESPACE_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceFilterName>(hashCode);
          }

          return ServiceFilterName::NOT_SET;
        }

        Aws::String GetNameForServiceFilterName(ServiceFilterName enumValue)
        {
          switch(enumValue)
          {
          case ServiceFilterName::NAMESPACE_ID:
            return "NAMESPACE_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceFilterNameMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
