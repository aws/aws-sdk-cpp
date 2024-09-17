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
    AWS_QUICKSIGHT_API CategoryInnerFilter();
    AWS_QUICKSIGHT_API CategoryInnerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryInnerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline CategoryInnerFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline CategoryInnerFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CategoryFilterConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const CategoryFilterConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(CategoryFilterConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CategoryInnerFilter& WithConfiguration(const CategoryFilterConfiguration& value) { SetConfiguration(value); return *this;}
    inline CategoryInnerFilter& WithConfiguration(CategoryFilterConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const{ return m_defaultFilterControlConfiguration; }
    inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
    inline void SetDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = value; }
    inline void SetDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = std::move(value); }
    inline CategoryInnerFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline CategoryInnerFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
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
