/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/Dimension.h>
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
   * <p>Defines a prepaid payment model that allows buyers to configure the
   * entitlements they want to purchase and the duration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ConfigurableUpfrontPricingTermConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfigurableUpfrontPricingTermConfiguration
  {
  public:
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTermConfiguration() = default;
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTermConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTermConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the dimensions that the acceptor has purchased from the overall set
     * of dimensions presented in the rate card.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    ConfigurableUpfrontPricingTermConfiguration& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    ConfigurableUpfrontPricingTermConfiguration& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the length of time for which the particular pricing/dimension is
     * being purchased by the acceptor.</p>
     */
    inline const Aws::String& GetSelectorValue() const { return m_selectorValue; }
    inline bool SelectorValueHasBeenSet() const { return m_selectorValueHasBeenSet; }
    template<typename SelectorValueT = Aws::String>
    void SetSelectorValue(SelectorValueT&& value) { m_selectorValueHasBeenSet = true; m_selectorValue = std::forward<SelectorValueT>(value); }
    template<typename SelectorValueT = Aws::String>
    ConfigurableUpfrontPricingTermConfiguration& WithSelectorValue(SelectorValueT&& value) { SetSelectorValue(std::forward<SelectorValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_selectorValue;
    bool m_selectorValueHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
