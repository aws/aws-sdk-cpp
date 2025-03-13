/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultInteractiveLayoutConfiguration.h>
#include <aws/quicksight/model/DefaultPaginatedLayoutConfiguration.h>
#include <aws/quicksight/model/SheetContentType.h>
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
   * <p>The configuration for default new sheet settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultNewSheetConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultNewSheetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration() = default;
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline const DefaultInteractiveLayoutConfiguration& GetInteractiveLayoutConfiguration() const { return m_interactiveLayoutConfiguration; }
    inline bool InteractiveLayoutConfigurationHasBeenSet() const { return m_interactiveLayoutConfigurationHasBeenSet; }
    template<typename InteractiveLayoutConfigurationT = DefaultInteractiveLayoutConfiguration>
    void SetInteractiveLayoutConfiguration(InteractiveLayoutConfigurationT&& value) { m_interactiveLayoutConfigurationHasBeenSet = true; m_interactiveLayoutConfiguration = std::forward<InteractiveLayoutConfigurationT>(value); }
    template<typename InteractiveLayoutConfigurationT = DefaultInteractiveLayoutConfiguration>
    DefaultNewSheetConfiguration& WithInteractiveLayoutConfiguration(InteractiveLayoutConfigurationT&& value) { SetInteractiveLayoutConfiguration(std::forward<InteractiveLayoutConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline const DefaultPaginatedLayoutConfiguration& GetPaginatedLayoutConfiguration() const { return m_paginatedLayoutConfiguration; }
    inline bool PaginatedLayoutConfigurationHasBeenSet() const { return m_paginatedLayoutConfigurationHasBeenSet; }
    template<typename PaginatedLayoutConfigurationT = DefaultPaginatedLayoutConfiguration>
    void SetPaginatedLayoutConfiguration(PaginatedLayoutConfigurationT&& value) { m_paginatedLayoutConfigurationHasBeenSet = true; m_paginatedLayoutConfiguration = std::forward<PaginatedLayoutConfigurationT>(value); }
    template<typename PaginatedLayoutConfigurationT = DefaultPaginatedLayoutConfiguration>
    DefaultNewSheetConfiguration& WithPaginatedLayoutConfiguration(PaginatedLayoutConfigurationT&& value) { SetPaginatedLayoutConfiguration(std::forward<PaginatedLayoutConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline SheetContentType GetSheetContentType() const { return m_sheetContentType; }
    inline bool SheetContentTypeHasBeenSet() const { return m_sheetContentTypeHasBeenSet; }
    inline void SetSheetContentType(SheetContentType value) { m_sheetContentTypeHasBeenSet = true; m_sheetContentType = value; }
    inline DefaultNewSheetConfiguration& WithSheetContentType(SheetContentType value) { SetSheetContentType(value); return *this;}
    ///@}
  private:

    DefaultInteractiveLayoutConfiguration m_interactiveLayoutConfiguration;
    bool m_interactiveLayoutConfigurationHasBeenSet = false;

    DefaultPaginatedLayoutConfiguration m_paginatedLayoutConfiguration;
    bool m_paginatedLayoutConfigurationHasBeenSet = false;

    SheetContentType m_sheetContentType{SheetContentType::NOT_SET};
    bool m_sheetContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
