/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/BodySectionRepeatPageBreakConfiguration.h>
#include <aws/quicksight/model/BodySectionRepeatDimensionConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Describes the configurations that are required to declare a section as
   * repeating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BodySectionRepeatConfiguration">AWS
   * API Reference</a></p>
   */
  class BodySectionRepeatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration() = default;
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of <code>BodySectionRepeatDimensionConfiguration</code> values that
     * describe the dataset column and constraints for the column used to repeat the
     * contents of a section.</p>
     */
    inline const Aws::Vector<BodySectionRepeatDimensionConfiguration>& GetDimensionConfigurations() const { return m_dimensionConfigurations; }
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }
    template<typename DimensionConfigurationsT = Aws::Vector<BodySectionRepeatDimensionConfiguration>>
    void SetDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::forward<DimensionConfigurationsT>(value); }
    template<typename DimensionConfigurationsT = Aws::Vector<BodySectionRepeatDimensionConfiguration>>
    BodySectionRepeatConfiguration& WithDimensionConfigurations(DimensionConfigurationsT&& value) { SetDimensionConfigurations(std::forward<DimensionConfigurationsT>(value)); return *this;}
    template<typename DimensionConfigurationsT = BodySectionRepeatDimensionConfiguration>
    BodySectionRepeatConfiguration& AddDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.emplace_back(std::forward<DimensionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page break configuration to apply for each repeating instance.</p>
     */
    inline const BodySectionRepeatPageBreakConfiguration& GetPageBreakConfiguration() const { return m_pageBreakConfiguration; }
    inline bool PageBreakConfigurationHasBeenSet() const { return m_pageBreakConfigurationHasBeenSet; }
    template<typename PageBreakConfigurationT = BodySectionRepeatPageBreakConfiguration>
    void SetPageBreakConfiguration(PageBreakConfigurationT&& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = std::forward<PageBreakConfigurationT>(value); }
    template<typename PageBreakConfigurationT = BodySectionRepeatPageBreakConfiguration>
    BodySectionRepeatConfiguration& WithPageBreakConfiguration(PageBreakConfigurationT&& value) { SetPageBreakConfiguration(std::forward<PageBreakConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of visuals to exclude from repetition in repeating sections. The visuals
     * will render identically, and ignore the repeating configurations in all
     * repeating instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonRepeatingVisuals() const { return m_nonRepeatingVisuals; }
    inline bool NonRepeatingVisualsHasBeenSet() const { return m_nonRepeatingVisualsHasBeenSet; }
    template<typename NonRepeatingVisualsT = Aws::Vector<Aws::String>>
    void SetNonRepeatingVisuals(NonRepeatingVisualsT&& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals = std::forward<NonRepeatingVisualsT>(value); }
    template<typename NonRepeatingVisualsT = Aws::Vector<Aws::String>>
    BodySectionRepeatConfiguration& WithNonRepeatingVisuals(NonRepeatingVisualsT&& value) { SetNonRepeatingVisuals(std::forward<NonRepeatingVisualsT>(value)); return *this;}
    template<typename NonRepeatingVisualsT = Aws::String>
    BodySectionRepeatConfiguration& AddNonRepeatingVisuals(NonRepeatingVisualsT&& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals.emplace_back(std::forward<NonRepeatingVisualsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BodySectionRepeatDimensionConfiguration> m_dimensionConfigurations;
    bool m_dimensionConfigurationsHasBeenSet = false;

    BodySectionRepeatPageBreakConfiguration m_pageBreakConfiguration;
    bool m_pageBreakConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_nonRepeatingVisuals;
    bool m_nonRepeatingVisualsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
