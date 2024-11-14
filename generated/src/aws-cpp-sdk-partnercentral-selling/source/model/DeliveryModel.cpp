/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/DeliveryModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace DeliveryModelMapper
      {

        static const int SaaS_or_PaaS_HASH = HashingUtils::HashString("SaaS or PaaS");
        static const int BYOL_or_AMI_HASH = HashingUtils::HashString("BYOL or AMI");
        static const int Managed_Services_HASH = HashingUtils::HashString("Managed Services");
        static const int Professional_Services_HASH = HashingUtils::HashString("Professional Services");
        static const int Resell_HASH = HashingUtils::HashString("Resell");
        static const int Other_HASH = HashingUtils::HashString("Other");


        DeliveryModel GetDeliveryModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SaaS_or_PaaS_HASH)
          {
            return DeliveryModel::SaaS_or_PaaS;
          }
          else if (hashCode == BYOL_or_AMI_HASH)
          {
            return DeliveryModel::BYOL_or_AMI;
          }
          else if (hashCode == Managed_Services_HASH)
          {
            return DeliveryModel::Managed_Services;
          }
          else if (hashCode == Professional_Services_HASH)
          {
            return DeliveryModel::Professional_Services;
          }
          else if (hashCode == Resell_HASH)
          {
            return DeliveryModel::Resell;
          }
          else if (hashCode == Other_HASH)
          {
            return DeliveryModel::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryModel>(hashCode);
          }

          return DeliveryModel::NOT_SET;
        }

        Aws::String GetNameForDeliveryModel(DeliveryModel enumValue)
        {
          switch(enumValue)
          {
          case DeliveryModel::NOT_SET:
            return {};
          case DeliveryModel::SaaS_or_PaaS:
            return "SaaS or PaaS";
          case DeliveryModel::BYOL_or_AMI:
            return "BYOL or AMI";
          case DeliveryModel::Managed_Services:
            return "Managed Services";
          case DeliveryModel::Professional_Services:
            return "Professional Services";
          case DeliveryModel::Resell:
            return "Resell";
          case DeliveryModel::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryModelMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
