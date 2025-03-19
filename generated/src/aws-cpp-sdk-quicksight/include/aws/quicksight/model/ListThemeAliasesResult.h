/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeAlias.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class ListThemeAliasesResult
  {
  public:
    AWS_QUICKSIGHT_API ListThemeAliasesResult() = default;
    AWS_QUICKSIGHT_API ListThemeAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListThemeAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline const Aws::Vector<ThemeAlias>& GetThemeAliasList() const { return m_themeAliasList; }
    template<typename ThemeAliasListT = Aws::Vector<ThemeAlias>>
    void SetThemeAliasList(ThemeAliasListT&& value) { m_themeAliasListHasBeenSet = true; m_themeAliasList = std::forward<ThemeAliasListT>(value); }
    template<typename ThemeAliasListT = Aws::Vector<ThemeAlias>>
    ListThemeAliasesResult& WithThemeAliasList(ThemeAliasListT&& value) { SetThemeAliasList(std::forward<ThemeAliasListT>(value)); return *this;}
    template<typename ThemeAliasListT = ThemeAlias>
    ListThemeAliasesResult& AddThemeAliasList(ThemeAliasListT&& value) { m_themeAliasListHasBeenSet = true; m_themeAliasList.emplace_back(std::forward<ThemeAliasListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListThemeAliasesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThemeAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThemeAliasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThemeAlias> m_themeAliasList;
    bool m_themeAliasListHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
