/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/RevenueModel.h>
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
      namespace RevenueModelMapper
      {

        static const int Contract_HASH = HashingUtils::HashString("Contract");
        static const int Pay_as_you_go_HASH = HashingUtils::HashString("Pay-as-you-go");
        static const int Subscription_HASH = HashingUtils::HashString("Subscription");


        RevenueModel GetRevenueModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Contract_HASH)
          {
            return RevenueModel::Contract;
          }
          else if (hashCode == Pay_as_you_go_HASH)
          {
            return RevenueModel::Pay_as_you_go;
          }
          else if (hashCode == Subscription_HASH)
          {
            return RevenueModel::Subscription;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevenueModel>(hashCode);
          }

          return RevenueModel::NOT_SET;
        }

        Aws::String GetNameForRevenueModel(RevenueModel enumValue)
        {
          switch(enumValue)
          {
          case RevenueModel::NOT_SET:
            return {};
          case RevenueModel::Contract:
            return "Contract";
          case RevenueModel::Pay_as_you_go:
            return "Pay-as-you-go";
          case RevenueModel::Subscription:
            return "Subscription";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RevenueModelMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
