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
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration();
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionRepeatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of <code>BodySectionRepeatDimensionConfiguration</code> values that
     * describe the dataset column and constraints for the column used to repeat the
     * contents of a section.</p>
     */
    inline const Aws::Vector<BodySectionRepeatDimensionConfiguration>& GetDimensionConfigurations() const{ return m_dimensionConfigurations; }
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }
    inline void SetDimensionConfigurations(const Aws::Vector<BodySectionRepeatDimensionConfiguration>& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = value; }
    inline void SetDimensionConfigurations(Aws::Vector<BodySectionRepeatDimensionConfiguration>&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::move(value); }
    inline BodySectionRepeatConfiguration& WithDimensionConfigurations(const Aws::Vector<BodySectionRepeatDimensionConfiguration>& value) { SetDimensionConfigurations(value); return *this;}
    inline BodySectionRepeatConfiguration& WithDimensionConfigurations(Aws::Vector<BodySectionRepeatDimensionConfiguration>&& value) { SetDimensionConfigurations(std::move(value)); return *this;}
    inline BodySectionRepeatConfiguration& AddDimensionConfigurations(const BodySectionRepeatDimensionConfiguration& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(value); return *this; }
    inline BodySectionRepeatConfiguration& AddDimensionConfigurations(BodySectionRepeatDimensionConfiguration&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page break configuration to apply for each repeating instance.</p>
     */
    inline const BodySectionRepeatPageBreakConfiguration& GetPageBreakConfiguration() const{ return m_pageBreakConfiguration; }
    inline bool PageBreakConfigurationHasBeenSet() const { return m_pageBreakConfigurationHasBeenSet; }
    inline void SetPageBreakConfiguration(const BodySectionRepeatPageBreakConfiguration& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = value; }
    inline void SetPageBreakConfiguration(BodySectionRepeatPageBreakConfiguration&& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = std::move(value); }
    inline BodySectionRepeatConfiguration& WithPageBreakConfiguration(const BodySectionRepeatPageBreakConfiguration& value) { SetPageBreakConfiguration(value); return *this;}
    inline BodySectionRepeatConfiguration& WithPageBreakConfiguration(BodySectionRepeatPageBreakConfiguration&& value) { SetPageBreakConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of visuals to exclude from repetition in repeating sections. The visuals
     * will render identically, and ignore the repeating configurations in all
     * repeating instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonRepeatingVisuals() const{ return m_nonRepeatingVisuals; }
    inline bool NonRepeatingVisualsHasBeenSet() const { return m_nonRepeatingVisualsHasBeenSet; }
    inline void SetNonRepeatingVisuals(const Aws::Vector<Aws::String>& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals = value; }
    inline void SetNonRepeatingVisuals(Aws::Vector<Aws::String>&& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals = std::move(value); }
    inline BodySectionRepeatConfiguration& WithNonRepeatingVisuals(const Aws::Vector<Aws::String>& value) { SetNonRepeatingVisuals(value); return *this;}
    inline BodySectionRepeatConfiguration& WithNonRepeatingVisuals(Aws::Vector<Aws::String>&& value) { SetNonRepeatingVisuals(std::move(value)); return *this;}
    inline BodySectionRepeatConfiguration& AddNonRepeatingVisuals(const Aws::String& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals.push_back(value); return *this; }
    inline BodySectionRepeatConfiguration& AddNonRepeatingVisuals(Aws::String&& value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals.push_back(std::move(value)); return *this; }
    inline BodySectionRepeatConfiguration& AddNonRepeatingVisuals(const char* value) { m_nonRepeatingVisualsHasBeenSet = true; m_nonRepeatingVisuals.push_back(value); return *this; }
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
