/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CidrCollectionChangeAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace CidrCollectionChangeActionMapper
      {

        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int DELETE_IF_EXISTS_HASH = HashingUtils::HashString("DELETE_IF_EXISTS");


        CidrCollectionChangeAction GetCidrCollectionChangeActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUT_HASH)
          {
            return CidrCollectionChangeAction::PUT;
          }
          else if (hashCode == DELETE_IF_EXISTS_HASH)
          {
            return CidrCollectionChangeAction::DELETE_IF_EXISTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CidrCollectionChangeAction>(hashCode);
          }

          return CidrCollectionChangeAction::NOT_SET;
        }

        Aws::String GetNameForCidrCollectionChangeAction(CidrCollectionChangeAction enumValue)
        {
          switch(enumValue)
          {
          case CidrCollectionChangeAction::NOT_SET:
            return {};
          case CidrCollectionChangeAction::PUT:
            return "PUT";
          case CidrCollectionChangeAction::DELETE_IF_EXISTS:
            return "DELETE_IF_EXISTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CidrCollectionChangeActionMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
