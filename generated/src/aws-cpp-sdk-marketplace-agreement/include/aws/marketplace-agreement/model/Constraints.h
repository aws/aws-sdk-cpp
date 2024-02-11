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
    AWS_AGREEMENTSERVICE_API Constraints();
    AWS_AGREEMENTSERVICE_API Constraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Constraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline const Aws::String& GetMultipleDimensionSelection() const{ return m_multipleDimensionSelection; }

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline bool MultipleDimensionSelectionHasBeenSet() const { return m_multipleDimensionSelectionHasBeenSet; }

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline void SetMultipleDimensionSelection(const Aws::String& value) { m_multipleDimensionSelectionHasBeenSet = true; m_multipleDimensionSelection = value; }

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline void SetMultipleDimensionSelection(Aws::String&& value) { m_multipleDimensionSelectionHasBeenSet = true; m_multipleDimensionSelection = std::move(value); }

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline void SetMultipleDimensionSelection(const char* value) { m_multipleDimensionSelectionHasBeenSet = true; m_multipleDimensionSelection.assign(value); }

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithMultipleDimensionSelection(const Aws::String& value) { SetMultipleDimensionSelection(value); return *this;}

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithMultipleDimensionSelection(Aws::String&& value) { SetMultipleDimensionSelection(std::move(value)); return *this;}

    /**
     * <p>Determines if buyers are allowed to select multiple dimensions in the rate
     * card. The possible values are <code>Allowed</code> and <code>Disallowed</code>.
     * The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithMultipleDimensionSelection(const char* value) { SetMultipleDimensionSelection(value); return *this;}


    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline const Aws::String& GetQuantityConfiguration() const{ return m_quantityConfiguration; }

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline bool QuantityConfigurationHasBeenSet() const { return m_quantityConfigurationHasBeenSet; }

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline void SetQuantityConfiguration(const Aws::String& value) { m_quantityConfigurationHasBeenSet = true; m_quantityConfiguration = value; }

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline void SetQuantityConfiguration(Aws::String&& value) { m_quantityConfigurationHasBeenSet = true; m_quantityConfiguration = std::move(value); }

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline void SetQuantityConfiguration(const char* value) { m_quantityConfigurationHasBeenSet = true; m_quantityConfiguration.assign(value); }

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithQuantityConfiguration(const Aws::String& value) { SetQuantityConfiguration(value); return *this;}

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithQuantityConfiguration(Aws::String&& value) { SetQuantityConfiguration(std::move(value)); return *this;}

    /**
     * <p>Determines if acceptors are allowed to configure quantity for each dimension
     * in rate card. The possible values are <code>Allowed</code> and
     * <code>Disallowed</code>. The default value is <code>Allowed</code>.</p>
     */
    inline Constraints& WithQuantityConfiguration(const char* value) { SetQuantityConfiguration(value); return *this;}

  private:

    Aws::String m_multipleDimensionSelection;
    bool m_multipleDimensionSelectionHasBeenSet = false;

    Aws::String m_quantityConfiguration;
    bool m_quantityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
