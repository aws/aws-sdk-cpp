/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines the per unit rates for each individual product
   * dimension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RateCardItem">AWS
   * API Reference</a></p>
   */
  class RateCardItem
  {
  public:
    AWS_AGREEMENTSERVICE_API RateCardItem();
    AWS_AGREEMENTSERVICE_API RateCardItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API RateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline const Aws::String& GetDimensionKey() const{ return m_dimensionKey; }

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimensionKey(const Aws::String& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = value; }

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimensionKey(Aws::String&& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = std::move(value); }

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimensionKey(const char* value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey.assign(value); }

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline RateCardItem& WithDimensionKey(const Aws::String& value) { SetDimensionKey(value); return *this;}

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline RateCardItem& WithDimensionKey(Aws::String&& value) { SetDimensionKey(std::move(value)); return *this;}

    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline RateCardItem& WithDimensionKey(const char* value) { SetDimensionKey(value); return *this;}


    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline const Aws::String& GetPrice() const{ return m_price; }

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline void SetPrice(const Aws::String& value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline void SetPrice(Aws::String&& value) { m_priceHasBeenSet = true; m_price = std::move(value); }

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline void SetPrice(const char* value) { m_priceHasBeenSet = true; m_price.assign(value); }

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline RateCardItem& WithPrice(const Aws::String& value) { SetPrice(value); return *this;}

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline RateCardItem& WithPrice(Aws::String&& value) { SetPrice(std::move(value)); return *this;}

    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline RateCardItem& WithPrice(const char* value) { SetPrice(value); return *this;}

  private:

    Aws::String m_dimensionKey;
    bool m_dimensionKeyHasBeenSet = false;

    Aws::String m_price;
    bool m_priceHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
