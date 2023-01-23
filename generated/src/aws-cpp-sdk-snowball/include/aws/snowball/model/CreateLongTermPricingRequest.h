/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/LongTermPricingType.h>
#include <aws/snowball/model/SnowballType.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateLongTermPricingRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateLongTermPricingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLongTermPricing"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline const LongTermPricingType& GetLongTermPricingType() const{ return m_longTermPricingType; }

    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline bool LongTermPricingTypeHasBeenSet() const { return m_longTermPricingTypeHasBeenSet; }

    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline void SetLongTermPricingType(const LongTermPricingType& value) { m_longTermPricingTypeHasBeenSet = true; m_longTermPricingType = value; }

    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline void SetLongTermPricingType(LongTermPricingType&& value) { m_longTermPricingTypeHasBeenSet = true; m_longTermPricingType = std::move(value); }

    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline CreateLongTermPricingRequest& WithLongTermPricingType(const LongTermPricingType& value) { SetLongTermPricingType(value); return *this;}

    /**
     * <p>The type of long-term pricing option you want for the device, either 1-year
     * or 3-year long-term pricing.</p>
     */
    inline CreateLongTermPricingRequest& WithLongTermPricingType(LongTermPricingType&& value) { SetLongTermPricingType(std::move(value)); return *this;}


    /**
     * <p>snowballty</p> <p>Specifies whether the current long-term pricing type for
     * the device should be renewed.</p>
     */
    inline bool GetIsLongTermPricingAutoRenew() const{ return m_isLongTermPricingAutoRenew; }

    /**
     * <p>snowballty</p> <p>Specifies whether the current long-term pricing type for
     * the device should be renewed.</p>
     */
    inline bool IsLongTermPricingAutoRenewHasBeenSet() const { return m_isLongTermPricingAutoRenewHasBeenSet; }

    /**
     * <p>snowballty</p> <p>Specifies whether the current long-term pricing type for
     * the device should be renewed.</p>
     */
    inline void SetIsLongTermPricingAutoRenew(bool value) { m_isLongTermPricingAutoRenewHasBeenSet = true; m_isLongTermPricingAutoRenew = value; }

    /**
     * <p>snowballty</p> <p>Specifies whether the current long-term pricing type for
     * the device should be renewed.</p>
     */
    inline CreateLongTermPricingRequest& WithIsLongTermPricingAutoRenew(bool value) { SetIsLongTermPricingAutoRenew(value); return *this;}


    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }

    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }

    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }

    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline CreateLongTermPricingRequest& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The type of Snow Family devices to use for the long-term pricing job.</p>
     */
    inline CreateLongTermPricingRequest& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}

  private:

    LongTermPricingType m_longTermPricingType;
    bool m_longTermPricingTypeHasBeenSet = false;

    bool m_isLongTermPricingAutoRenew;
    bool m_isLongTermPricingAutoRenewHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
