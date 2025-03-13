/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>A set of rules associated with a tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionTagRule">AWS
   * API Reference</a></p>
   */
  class RowLevelPermissionTagRule
  {
  public:
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule() = default;
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowLevelPermissionTagRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique key for a tag.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    RowLevelPermissionTagRule& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column name that a tag key is assigned to.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    RowLevelPermissionTagRule& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that you want to use to delimit the values when you pass the values
     * at run time. For example, you can delimit the values with a comma.</p>
     */
    inline const Aws::String& GetTagMultiValueDelimiter() const { return m_tagMultiValueDelimiter; }
    inline bool TagMultiValueDelimiterHasBeenSet() const { return m_tagMultiValueDelimiterHasBeenSet; }
    template<typename TagMultiValueDelimiterT = Aws::String>
    void SetTagMultiValueDelimiter(TagMultiValueDelimiterT&& value) { m_tagMultiValueDelimiterHasBeenSet = true; m_tagMultiValueDelimiter = std::forward<TagMultiValueDelimiterT>(value); }
    template<typename TagMultiValueDelimiterT = Aws::String>
    RowLevelPermissionTagRule& WithTagMultiValueDelimiter(TagMultiValueDelimiterT&& value) { SetTagMultiValueDelimiter(std::forward<TagMultiValueDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that you want to use to filter by all the values in a column in the
     * dataset and don’t want to list the values one by one. For example, you can use
     * an asterisk as your match all value.</p>
     */
    inline const Aws::String& GetMatchAllValue() const { return m_matchAllValue; }
    inline bool MatchAllValueHasBeenSet() const { return m_matchAllValueHasBeenSet; }
    template<typename MatchAllValueT = Aws::String>
    void SetMatchAllValue(MatchAllValueT&& value) { m_matchAllValueHasBeenSet = true; m_matchAllValue = std::forward<MatchAllValueT>(value); }
    template<typename MatchAllValueT = Aws::String>
    RowLevelPermissionTagRule& WithMatchAllValue(MatchAllValueT&& value) { SetMatchAllValue(std::forward<MatchAllValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_tagMultiValueDelimiter;
    bool m_tagMultiValueDelimiterHasBeenSet = false;

    Aws::String m_matchAllValue;
    bool m_matchAllValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
