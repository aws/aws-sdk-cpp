/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/PartnerIntegrationStatus.h>
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
      namespace PartnerIntegrationStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int RuntimeFailure_HASH = HashingUtils::HashString("RuntimeFailure");
        static const int ConnectionFailure_HASH = HashingUtils::HashString("ConnectionFailure");


        PartnerIntegrationStatus GetPartnerIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return PartnerIntegrationStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return PartnerIntegrationStatus::Inactive;
          }
          else if (hashCode == RuntimeFailure_HASH)
          {
            return PartnerIntegrationStatus::RuntimeFailure;
          }
          else if (hashCode == ConnectionFailure_HASH)
          {
            return PartnerIntegrationStatus::ConnectionFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartnerIntegrationStatus>(hashCode);
          }

          return PartnerIntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForPartnerIntegrationStatus(PartnerIntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case PartnerIntegrationStatus::NOT_SET:
            return {};
          case PartnerIntegrationStatus::Active:
            return "Active";
          case PartnerIntegrationStatus::Inactive:
            return "Inactive";
          case PartnerIntegrationStatus::RuntimeFailure:
            return "RuntimeFailure";
          case PartnerIntegrationStatus::ConnectionFailure:
            return "ConnectionFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartnerIntegrationStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
