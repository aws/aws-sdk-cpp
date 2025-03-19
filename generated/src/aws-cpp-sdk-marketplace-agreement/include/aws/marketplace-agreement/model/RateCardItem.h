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
    AWS_AGREEMENTSERVICE_API RateCardItem() = default;
    AWS_AGREEMENTSERVICE_API RateCardItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API RateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
    inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
    template<typename DimensionKeyT = Aws::String>
    void SetDimensionKey(DimensionKeyT&& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = std::forward<DimensionKeyT>(value); }
    template<typename DimensionKeyT = Aws::String>
    RateCardItem& WithDimensionKey(DimensionKeyT&& value) { SetDimensionKey(std::forward<DimensionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Per unit price for the product dimension that’s used for calculating the
     * amount to be charged.</p>
     */
    inline const Aws::String& GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    template<typename PriceT = Aws::String>
    void SetPrice(PriceT&& value) { m_priceHasBeenSet = true; m_price = std::forward<PriceT>(value); }
    template<typename PriceT = Aws::String>
    RateCardItem& WithPrice(PriceT&& value) { SetPrice(std::forward<PriceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dimensionKey;
    bool m_dimensionKeyHasBeenSet = false;

    Aws::String m_price;
    bool m_priceHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
