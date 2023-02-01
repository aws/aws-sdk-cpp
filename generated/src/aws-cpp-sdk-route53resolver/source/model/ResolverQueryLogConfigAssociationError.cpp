/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverQueryLogConfigAssociationError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ResolverQueryLogConfigAssociationErrorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DESTINATION_NOT_FOUND_HASH = HashingUtils::HashString("DESTINATION_NOT_FOUND");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");


        ResolverQueryLogConfigAssociationError GetResolverQueryLogConfigAssociationErrorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ResolverQueryLogConfigAssociationError::NONE;
          }
          else if (hashCode == DESTINATION_NOT_FOUND_HASH)
          {
            return ResolverQueryLogConfigAssociationError::DESTINATION_NOT_FOUND;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return ResolverQueryLogConfigAssociationError::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return ResolverQueryLogConfigAssociationError::INTERNAL_SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverQueryLogConfigAssociationError>(hashCode);
          }

          return ResolverQueryLogConfigAssociationError::NOT_SET;
        }

        Aws::String GetNameForResolverQueryLogConfigAssociationError(ResolverQueryLogConfigAssociationError enumValue)
        {
          switch(enumValue)
          {
          case ResolverQueryLogConfigAssociationError::NONE:
            return "NONE";
          case ResolverQueryLogConfigAssociationError::DESTINATION_NOT_FOUND:
            return "DESTINATION_NOT_FOUND";
          case ResolverQueryLogConfigAssociationError::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ResolverQueryLogConfigAssociationError::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverQueryLogConfigAssociationErrorMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
