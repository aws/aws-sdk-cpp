/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/CategoryFilterConfiguration.h>
#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
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
   * <p>A <code>CategoryInnerFilter</code> filters text values for the
   * <code>NestedFilter</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoryInnerFilter">AWS
   * API Reference</a></p>
   */
  class CategoryInnerFilter
  {
  public:
    AWS_QUICKSIGHT_API CategoryInnerFilter() = default;
    AWS_QUICKSIGHT_API CategoryInnerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryInnerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    CategoryInnerFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CategoryFilterConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CategoryFilterConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CategoryFilterConfiguration>
    CategoryInnerFilter& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const { return m_defaultFilterControlConfiguration; }
    inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
    template<typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
    void SetDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = std::forward<DefaultFilterControlConfigurationT>(value); }
    template<typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
    CategoryInnerFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    CategoryFilterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
