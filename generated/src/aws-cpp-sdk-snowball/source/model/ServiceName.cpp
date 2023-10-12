/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ServiceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ServiceNameMapper
      {

        static constexpr uint32_t KUBERNETES_HASH = ConstExprHashingUtils::HashString("KUBERNETES");
        static constexpr uint32_t EKS_ANYWHERE_HASH = ConstExprHashingUtils::HashString("EKS_ANYWHERE");


        ServiceName GetServiceNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KUBERNETES_HASH)
          {
            return ServiceName::KUBERNETES;
          }
          else if (hashCode == EKS_ANYWHERE_HASH)
          {
            return ServiceName::EKS_ANYWHERE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceName>(hashCode);
          }

          return ServiceName::NOT_SET;
        }

        Aws::String GetNameForServiceName(ServiceName enumValue)
        {
          switch(enumValue)
          {
          case ServiceName::NOT_SET:
            return {};
          case ServiceName::KUBERNETES:
            return "KUBERNETES";
          case ServiceName::EKS_ANYWHERE:
            return "EKS_ANYWHERE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNameMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
