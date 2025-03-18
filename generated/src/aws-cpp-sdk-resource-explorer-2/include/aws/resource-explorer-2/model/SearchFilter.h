/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A search filter defines which resources can be part of a search query result
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/SearchFilter">AWS
   * API Reference</a></p>
   */
  class SearchFilter
  {
  public:
    AWS_RESOURCEEXPLORER2_API SearchFilter() = default;
    AWS_RESOURCEEXPLORER2_API SearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API SearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string that contains the search keywords, prefixes, and operators to
     * control the results that can be returned by a <a>Search</a> operation. For more
     * details, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/APIReference/about-query-syntax.html">Search
     * query syntax</a>.</p>
     */
    inline const Aws::String& GetFilterString() const { return m_filterString; }
    inline bool FilterStringHasBeenSet() const { return m_filterStringHasBeenSet; }
    template<typename FilterStringT = Aws::String>
    void SetFilterString(FilterStringT&& value) { m_filterStringHasBeenSet = true; m_filterString = std::forward<FilterStringT>(value); }
    template<typename FilterStringT = Aws::String>
    SearchFilter& WithFilterString(FilterStringT&& value) { SetFilterString(std::forward<FilterStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterString;
    bool m_filterStringHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
