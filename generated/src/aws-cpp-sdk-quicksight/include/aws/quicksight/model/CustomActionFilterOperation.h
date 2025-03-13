/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperationSelectedFieldsConfiguration.h>
#include <aws/quicksight/model/FilterOperationTargetVisualsConfiguration.h>
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
   * <p>The filter operation that filters data included in a visual or in an entire
   * sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomActionFilterOperation">AWS
   * API Reference</a></p>
   */
  class CustomActionFilterOperation
  {
  public:
    AWS_QUICKSIGHT_API CustomActionFilterOperation() = default;
    AWS_QUICKSIGHT_API CustomActionFilterOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomActionFilterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline const FilterOperationSelectedFieldsConfiguration& GetSelectedFieldsConfiguration() const { return m_selectedFieldsConfiguration; }
    inline bool SelectedFieldsConfigurationHasBeenSet() const { return m_selectedFieldsConfigurationHasBeenSet; }
    template<typename SelectedFieldsConfigurationT = FilterOperationSelectedFieldsConfiguration>
    void SetSelectedFieldsConfiguration(SelectedFieldsConfigurationT&& value) { m_selectedFieldsConfigurationHasBeenSet = true; m_selectedFieldsConfiguration = std::forward<SelectedFieldsConfigurationT>(value); }
    template<typename SelectedFieldsConfigurationT = FilterOperationSelectedFieldsConfiguration>
    CustomActionFilterOperation& WithSelectedFieldsConfiguration(SelectedFieldsConfigurationT&& value) { SetSelectedFieldsConfiguration(std::forward<SelectedFieldsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline const FilterOperationTargetVisualsConfiguration& GetTargetVisualsConfiguration() const { return m_targetVisualsConfiguration; }
    inline bool TargetVisualsConfigurationHasBeenSet() const { return m_targetVisualsConfigurationHasBeenSet; }
    template<typename TargetVisualsConfigurationT = FilterOperationTargetVisualsConfiguration>
    void SetTargetVisualsConfiguration(TargetVisualsConfigurationT&& value) { m_targetVisualsConfigurationHasBeenSet = true; m_targetVisualsConfiguration = std::forward<TargetVisualsConfigurationT>(value); }
    template<typename TargetVisualsConfigurationT = FilterOperationTargetVisualsConfiguration>
    CustomActionFilterOperation& WithTargetVisualsConfiguration(TargetVisualsConfigurationT&& value) { SetTargetVisualsConfiguration(std::forward<TargetVisualsConfigurationT>(value)); return *this;}
    ///@}
  private:

    FilterOperationSelectedFieldsConfiguration m_selectedFieldsConfiguration;
    bool m_selectedFieldsConfigurationHasBeenSet = false;

    FilterOperationTargetVisualsConfiguration m_targetVisualsConfiguration;
    bool m_targetVisualsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
