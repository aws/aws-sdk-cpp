/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PurchaseMode.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateSPICECapacityConfigurationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateSPICECapacityConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSPICECapacityConfiguration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateSPICECapacityConfigurationRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline PurchaseMode GetPurchaseMode() const { return m_purchaseMode; }
    inline bool PurchaseModeHasBeenSet() const { return m_purchaseModeHasBeenSet; }
    inline void SetPurchaseMode(PurchaseMode value) { m_purchaseModeHasBeenSet = true; m_purchaseMode = value; }
    inline UpdateSPICECapacityConfigurationRequest& WithPurchaseMode(PurchaseMode value) { SetPurchaseMode(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    PurchaseMode m_purchaseMode{PurchaseMode::NOT_SET};
    bool m_purchaseModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
