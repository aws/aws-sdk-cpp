/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BodySectionDynamicCategoryDimensionConfiguration.h>
#include <aws/quicksight/model/BodySectionDynamicNumericDimensionConfiguration.h>
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
   * <p>Describes the dataset column and constraints for the dynamic values used to
   * repeat the contents of a section. The dataset column is either <b>Category</b>
   * or <b>Numeric</b> column configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BodySectionRepeatDimensionConfiguration">AWS
   * API Reference</a></p>
   */
  class BodySectionRepeatDimensionConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BodySectionRepeatDimensionConfiguration() = default;
    AWS_QUICKSIGHT_API BodySectionRepeatDimensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionRepeatDimensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the <b>Category</b> dataset column and constraints around the
     * dynamic values that will be used in repeating the section contents.</p>
     */
    inline const BodySectionDynamicCategoryDimensionConfiguration& GetDynamicCategoryDimensionConfiguration() const { return m_dynamicCategoryDimensionConfiguration; }
    inline bool DynamicCategoryDimensionConfigurationHasBeenSet() const { return m_dynamicCategoryDimensionConfigurationHasBeenSet; }
    template<typename DynamicCategoryDimensionConfigurationT = BodySectionDynamicCategoryDimensionConfiguration>
    void SetDynamicCategoryDimensionConfiguration(DynamicCategoryDimensionConfigurationT&& value) { m_dynamicCategoryDimensionConfigurationHasBeenSet = true; m_dynamicCategoryDimensionConfiguration = std::forward<DynamicCategoryDimensionConfigurationT>(value); }
    template<typename DynamicCategoryDimensionConfigurationT = BodySectionDynamicCategoryDimensionConfiguration>
    BodySectionRepeatDimensionConfiguration& WithDynamicCategoryDimensionConfiguration(DynamicCategoryDimensionConfigurationT&& value) { SetDynamicCategoryDimensionConfiguration(std::forward<DynamicCategoryDimensionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the <b>Numeric</b> dataset column and constraints around the
     * dynamic values used to repeat the contents of a section.</p>
     */
    inline const BodySectionDynamicNumericDimensionConfiguration& GetDynamicNumericDimensionConfiguration() const { return m_dynamicNumericDimensionConfiguration; }
    inline bool DynamicNumericDimensionConfigurationHasBeenSet() const { return m_dynamicNumericDimensionConfigurationHasBeenSet; }
    template<typename DynamicNumericDimensionConfigurationT = BodySectionDynamicNumericDimensionConfiguration>
    void SetDynamicNumericDimensionConfiguration(DynamicNumericDimensionConfigurationT&& value) { m_dynamicNumericDimensionConfigurationHasBeenSet = true; m_dynamicNumericDimensionConfiguration = std::forward<DynamicNumericDimensionConfigurationT>(value); }
    template<typename DynamicNumericDimensionConfigurationT = BodySectionDynamicNumericDimensionConfiguration>
    BodySectionRepeatDimensionConfiguration& WithDynamicNumericDimensionConfiguration(DynamicNumericDimensionConfigurationT&& value) { SetDynamicNumericDimensionConfiguration(std::forward<DynamicNumericDimensionConfigurationT>(value)); return *this;}
    ///@}
  private:

    BodySectionDynamicCategoryDimensionConfiguration m_dynamicCategoryDimensionConfiguration;
    bool m_dynamicCategoryDimensionConfigurationHasBeenSet = false;

    BodySectionDynamicNumericDimensionConfiguration m_dynamicNumericDimensionConfiguration;
    bool m_dynamicNumericDimensionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
