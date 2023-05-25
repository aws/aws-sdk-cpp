/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListControlSearchOptions.h>
#include <aws/quicksight/model/ListControlSelectAllOptions.h>
#include <aws/quicksight/model/LabelOptions.h>
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
    AWS_QUICKSIGHT_API ListControlDisplayOptions();
    AWS_QUICKSIGHT_API ListControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ListControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline const ListControlSearchOptions& GetSearchOptions() const{ return m_searchOptions; }

    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline bool SearchOptionsHasBeenSet() const { return m_searchOptionsHasBeenSet; }

    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline void SetSearchOptions(const ListControlSearchOptions& value) { m_searchOptionsHasBeenSet = true; m_searchOptions = value; }

    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline void SetSearchOptions(ListControlSearchOptions&& value) { m_searchOptionsHasBeenSet = true; m_searchOptions = std::move(value); }

    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline ListControlDisplayOptions& WithSearchOptions(const ListControlSearchOptions& value) { SetSearchOptions(value); return *this;}

    /**
     * <p>The configuration of the search options in a list control.</p>
     */
    inline ListControlDisplayOptions& WithSearchOptions(ListControlSearchOptions&& value) { SetSearchOptions(std::move(value)); return *this;}


    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline const ListControlSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline void SetSelectAllOptions(const ListControlSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline void SetSelectAllOptions(ListControlSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }

    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline ListControlDisplayOptions& WithSelectAllOptions(const ListControlSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>The configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline ListControlDisplayOptions& WithSelectAllOptions(ListControlSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline ListControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline ListControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}

  private:

    ListControlSearchOptions m_searchOptions;
    bool m_searchOptionsHasBeenSet = false;

    ListControlSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
