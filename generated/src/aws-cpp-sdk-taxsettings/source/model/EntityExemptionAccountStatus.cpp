/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/EntityExemptionAccountStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace EntityExemptionAccountStatusMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Valid_HASH = HashingUtils::HashString("Valid");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        EntityExemptionAccountStatus GetEntityExemptionAccountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return EntityExemptionAccountStatus::None;
          }
          else if (hashCode == Valid_HASH)
          {
            return EntityExemptionAccountStatus::Valid;
          }
          else if (hashCode == Expired_HASH)
          {
            return EntityExemptionAccountStatus::Expired;
          }
          else if (hashCode == Pending_HASH)
          {
            return EntityExemptionAccountStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityExemptionAccountStatus>(hashCode);
          }

          return EntityExemptionAccountStatus::NOT_SET;
        }

        Aws::String GetNameForEntityExemptionAccountStatus(EntityExemptionAccountStatus enumValue)
        {
          switch(enumValue)
          {
          case EntityExemptionAccountStatus::NOT_SET:
            return {};
          case EntityExemptionAccountStatus::None:
            return "None";
          case EntityExemptionAccountStatus::Valid:
            return "Valid";
          case EntityExemptionAccountStatus::Expired:
            return "Expired";
          case EntityExemptionAccountStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityExemptionAccountStatusMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
