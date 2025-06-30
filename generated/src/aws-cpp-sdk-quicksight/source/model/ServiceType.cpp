/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ServiceTypeMapper
      {

        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int QBUSINESS_HASH = HashingUtils::HashString("QBUSINESS");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_HASH)
          {
            return ServiceType::REDSHIFT;
          }
          else if (hashCode == QBUSINESS_HASH)
          {
            return ServiceType::QBUSINESS;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return ServiceType::ATHENA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceType>(hashCode);
          }

          return ServiceType::NOT_SET;
        }

        Aws::String GetNameForServiceType(ServiceType enumValue)
        {
          switch(enumValue)
          {
          case ServiceType::NOT_SET:
            return {};
          case ServiceType::REDSHIFT:
            return "REDSHIFT";
          case ServiceType::QBUSINESS:
            return "QBUSINESS";
          case ServiceType::ATHENA:
            return "ATHENA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
