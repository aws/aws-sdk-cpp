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

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");
        static constexpr uint32_t RuntimeFailure_HASH = ConstExprHashingUtils::HashString("RuntimeFailure");
        static constexpr uint32_t ConnectionFailure_HASH = ConstExprHashingUtils::HashString("ConnectionFailure");


        PartnerIntegrationStatus GetPartnerIntegrationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
