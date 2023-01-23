/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ServiceQuotaTemplateAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace ServiceQuotaTemplateAssociationStatusMapper
      {

        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
        static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");


        ServiceQuotaTemplateAssociationStatus GetServiceQuotaTemplateAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATED_HASH)
          {
            return ServiceQuotaTemplateAssociationStatus::ASSOCIATED;
          }
          else if (hashCode == DISASSOCIATED_HASH)
          {
            return ServiceQuotaTemplateAssociationStatus::DISASSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceQuotaTemplateAssociationStatus>(hashCode);
          }

          return ServiceQuotaTemplateAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceQuotaTemplateAssociationStatus::ASSOCIATED:
            return "ASSOCIATED";
          case ServiceQuotaTemplateAssociationStatus::DISASSOCIATED:
            return "DISASSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceQuotaTemplateAssociationStatusMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
