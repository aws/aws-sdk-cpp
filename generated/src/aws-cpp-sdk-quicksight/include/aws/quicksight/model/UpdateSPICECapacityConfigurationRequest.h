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
    AWS_QUICKSIGHT_API UpdateSPICECapacityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSPICECapacityConfiguration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline UpdateSPICECapacityConfigurationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline UpdateSPICECapacityConfigurationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the SPICE
     * configuration that you want to update.</p>
     */
    inline UpdateSPICECapacityConfigurationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline const PurchaseMode& GetPurchaseMode() const{ return m_purchaseMode; }

    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline bool PurchaseModeHasBeenSet() const { return m_purchaseModeHasBeenSet; }

    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline void SetPurchaseMode(const PurchaseMode& value) { m_purchaseModeHasBeenSet = true; m_purchaseMode = value; }

    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline void SetPurchaseMode(PurchaseMode&& value) { m_purchaseModeHasBeenSet = true; m_purchaseMode = std::move(value); }

    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline UpdateSPICECapacityConfigurationRequest& WithPurchaseMode(const PurchaseMode& value) { SetPurchaseMode(value); return *this;}

    /**
     * <p>Determines how SPICE capacity can be purchased. The following options are
     * available. </p> <ul> <li> <p> <code>MANUAL</code>: SPICE capacity can only be
     * purchased manually.</p> </li> <li> <p> <code>AUTO_PURCHASE</code>: Extra SPICE
     * capacity is automatically purchased on your behalf as needed. SPICE capacity can
     * also be purchased manually with this option.</p> </li> </ul>
     */
    inline UpdateSPICECapacityConfigurationRequest& WithPurchaseMode(PurchaseMode&& value) { SetPurchaseMode(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    PurchaseMode m_purchaseMode;
    bool m_purchaseModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
