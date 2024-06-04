/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationStatus.h>
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
      namespace TaxRegistrationStatusMapper
      {

        static const int Verified_HASH = HashingUtils::HashString("Verified");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");


        TaxRegistrationStatus GetTaxRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Verified_HASH)
          {
            return TaxRegistrationStatus::Verified;
          }
          else if (hashCode == Pending_HASH)
          {
            return TaxRegistrationStatus::Pending;
          }
          else if (hashCode == Deleted_HASH)
          {
            return TaxRegistrationStatus::Deleted;
          }
          else if (hashCode == Rejected_HASH)
          {
            return TaxRegistrationStatus::Rejected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaxRegistrationStatus>(hashCode);
          }

          return TaxRegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForTaxRegistrationStatus(TaxRegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case TaxRegistrationStatus::NOT_SET:
            return {};
          case TaxRegistrationStatus::Verified:
            return "Verified";
          case TaxRegistrationStatus::Pending:
            return "Pending";
          case TaxRegistrationStatus::Deleted:
            return "Deleted";
          case TaxRegistrationStatus::Rejected:
            return "Rejected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaxRegistrationStatusMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
