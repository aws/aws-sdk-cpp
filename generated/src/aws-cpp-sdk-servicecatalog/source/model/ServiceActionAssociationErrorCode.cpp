/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ServiceActionAssociationErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ServiceActionAssociationErrorCodeMapper
      {

        static const int DUPLICATE_RESOURCE_HASH = HashingUtils::HashString("DUPLICATE_RESOURCE");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int THROTTLING_HASH = HashingUtils::HashString("THROTTLING");


        ServiceActionAssociationErrorCode GetServiceActionAssociationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_RESOURCE_HASH)
          {
            return ServiceActionAssociationErrorCode::DUPLICATE_RESOURCE;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ServiceActionAssociationErrorCode::INTERNAL_FAILURE;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return ServiceActionAssociationErrorCode::LIMIT_EXCEEDED;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return ServiceActionAssociationErrorCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == THROTTLING_HASH)
          {
            return ServiceActionAssociationErrorCode::THROTTLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceActionAssociationErrorCode>(hashCode);
          }

          return ServiceActionAssociationErrorCode::NOT_SET;
        }

        Aws::String GetNameForServiceActionAssociationErrorCode(ServiceActionAssociationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ServiceActionAssociationErrorCode::DUPLICATE_RESOURCE:
            return "DUPLICATE_RESOURCE";
          case ServiceActionAssociationErrorCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case ServiceActionAssociationErrorCode::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          case ServiceActionAssociationErrorCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case ServiceActionAssociationErrorCode::THROTTLING:
            return "THROTTLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceActionAssociationErrorCodeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
