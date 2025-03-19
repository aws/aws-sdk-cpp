/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListControlSearchOptions.h>
#include <aws/quicksight/model/ListControlSelectAllOptions.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/quicksight/model/SheetControlInfoIconLabelOptions.h>
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
   * <p>The display options of a control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class ListControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API ListControlDisplayOptions() = default;
    AWS_QUICKSIGHT_API ListControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ListControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline const ListControlSearchOptions& GetSearchOptions() const { return m_searchOptions; }
    inline bool SearchOptionsHasBeenSet() const { return m_searchOptionsHasBeenSet; }
    template<typename SearchOptionsT = ListControlSearchOptions>
    void SetSearchOptions(SearchOptionsT&& value) { m_searchOptionsHasBeenSet = true; m_searchOptions = std::forward<SearchOptionsT>(value); }
    template<typename SearchOptionsT = ListControlSearchOptions>
    ListControlDisplayOptions& WithSearchOptions(SearchOptionsT&& value) { SetSearchOptions(std::forward<SearchOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline const ListControlSelectAllOptions& GetSelectAllOptions() const { return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    template<typename SelectAllOptionsT = ListControlSelectAllOptions>
    void SetSelectAllOptions(SelectAllOptionsT&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::forward<SelectAllOptionsT>(value); }
    template<typename SelectAllOptionsT = ListControlSelectAllOptions>
    ListControlDisplayOptions& WithSelectAllOptions(SelectAllOptionsT&& value) { SetSelectAllOptions(std::forward<SelectAllOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const { return m_titleOptions; }
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }
    template<typename TitleOptionsT = LabelOptions>
    void SetTitleOptions(TitleOptionsT&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::forward<TitleOptionsT>(value); }
    template<typename TitleOptionsT = LabelOptions>
    ListControlDisplayOptions& WithTitleOptions(TitleOptionsT&& value) { SetTitleOptions(std::forward<TitleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of info icon label options.</p>
     */
    inline const SheetControlInfoIconLabelOptions& GetInfoIconLabelOptions() const { return m_infoIconLabelOptions; }
    inline bool InfoIconLabelOptionsHasBeenSet() const { return m_infoIconLabelOptionsHasBeenSet; }
    template<typename InfoIconLabelOptionsT = SheetControlInfoIconLabelOptions>
    void SetInfoIconLabelOptions(InfoIconLabelOptionsT&& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = std::forward<InfoIconLabelOptionsT>(value); }
    template<typename InfoIconLabelOptionsT = SheetControlInfoIconLabelOptions>
    ListControlDisplayOptions& WithInfoIconLabelOptions(InfoIconLabelOptionsT&& value) { SetInfoIconLabelOptions(std::forward<InfoIconLabelOptionsT>(value)); return *this;}
    ///@}
  private:

    ListControlSearchOptions m_searchOptions;
    bool m_searchOptionsHasBeenSet = false;

    ListControlSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    SheetControlInfoIconLabelOptions m_infoIconLabelOptions;
    bool m_infoIconLabelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
