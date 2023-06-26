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
    AWS_QUICKSIGHT_API CustomActionFilterOperation();
    AWS_QUICKSIGHT_API CustomActionFilterOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomActionFilterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline const FilterOperationSelectedFieldsConfiguration& GetSelectedFieldsConfiguration() const{ return m_selectedFieldsConfiguration; }

    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline bool SelectedFieldsConfigurationHasBeenSet() const { return m_selectedFieldsConfigurationHasBeenSet; }

    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline void SetSelectedFieldsConfiguration(const FilterOperationSelectedFieldsConfiguration& value) { m_selectedFieldsConfigurationHasBeenSet = true; m_selectedFieldsConfiguration = value; }

    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline void SetSelectedFieldsConfiguration(FilterOperationSelectedFieldsConfiguration&& value) { m_selectedFieldsConfigurationHasBeenSet = true; m_selectedFieldsConfiguration = std::move(value); }

    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline CustomActionFilterOperation& WithSelectedFieldsConfiguration(const FilterOperationSelectedFieldsConfiguration& value) { SetSelectedFieldsConfiguration(value); return *this;}

    /**
     * <p>The configuration that chooses the fields to be filtered.</p>
     */
    inline CustomActionFilterOperation& WithSelectedFieldsConfiguration(FilterOperationSelectedFieldsConfiguration&& value) { SetSelectedFieldsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline const FilterOperationTargetVisualsConfiguration& GetTargetVisualsConfiguration() const{ return m_targetVisualsConfiguration; }

    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline bool TargetVisualsConfigurationHasBeenSet() const { return m_targetVisualsConfigurationHasBeenSet; }

    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline void SetTargetVisualsConfiguration(const FilterOperationTargetVisualsConfiguration& value) { m_targetVisualsConfigurationHasBeenSet = true; m_targetVisualsConfiguration = value; }

    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline void SetTargetVisualsConfiguration(FilterOperationTargetVisualsConfiguration&& value) { m_targetVisualsConfigurationHasBeenSet = true; m_targetVisualsConfiguration = std::move(value); }

    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline CustomActionFilterOperation& WithTargetVisualsConfiguration(const FilterOperationTargetVisualsConfiguration& value) { SetTargetVisualsConfiguration(value); return *this;}

    /**
     * <p>The configuration that chooses the target visuals to be filtered.</p>
     */
    inline CustomActionFilterOperation& WithTargetVisualsConfiguration(FilterOperationTargetVisualsConfiguration&& value) { SetTargetVisualsConfiguration(std::move(value)); return *this;}

  private:

    FilterOperationSelectedFieldsConfiguration m_selectedFieldsConfiguration;
    bool m_selectedFieldsConfigurationHasBeenSet = false;

    FilterOperationTargetVisualsConfiguration m_targetVisualsConfiguration;
    bool m_targetVisualsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
