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
   * <p>Defines limits on how the term can be configured by acceptors. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Constraints">AWS
   * API Reference</a></p>
   */
  class Constraints
  {
  public:
    AWS_AGREEMENTSERVICE_API Constraints() = default;
    AWS_AGREEMENTSERVICE_API Constraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Constraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline const Aws::String& GetMultipleDimensionSelection() const { return m_multipleDimensionSelection; }
    inline bool MultipleDimensionSelectionHasBeenSet() const { return m_multipleDimensionSelectionHasBeenSet; }
    template<typename MultipleDimensionSelectionT = Aws::String>
    void SetMultipleDimensionSelection(MultipleDimensionSelectionT&& value) { m_multipleDimensionSelectionHasBeenSet = true; m_multipleDimensionSelection = std::forward<MultipleDimensionSelectionT>(value); }
    template<typename MultipleDimensionSelectionT = Aws::String>
    Constraints& WithMultipleDimensionSelection(MultipleDimensionSelectionT&& value) { SetMultipleDimensionSelection(std::forward<MultipleDimensionSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline const Aws::String& GetQuantityConfiguration() const { return m_quantityConfiguration; }
    inline bool QuantityConfigurationHasBeenSet() const { return m_quantityConfigurationHasBeenSet; }
    template<typename QuantityConfigurationT = Aws::String>
    void SetQuantityConfiguration(QuantityConfigurationT&& value) { m_quantityConfigurationHasBeenSet = true; m_quantityConfiguration = std::forward<QuantityConfigurationT>(value); }
    template<typename QuantityConfigurationT = Aws::String>
    Constraints& WithQuantityConfiguration(QuantityConfigurationT&& value) { SetQuantityConfiguration(std::forward<QuantityConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multipleDimensionSelection;
    bool m_multipleDimensionSelectionHasBeenSet = false;

    Aws::String m_quantityConfiguration;
    bool m_quantityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
