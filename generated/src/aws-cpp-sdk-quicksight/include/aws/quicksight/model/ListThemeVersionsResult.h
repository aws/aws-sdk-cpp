/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeVersionSummary.h>
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
  class ListThemeVersionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListThemeVersionsResult() = default;
    AWS_QUICKSIGHT_API ListThemeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListThemeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing a list of all the versions of the specified theme.</p>
     */
    inline const Aws::Vector<ThemeVersionSummary>& GetThemeVersionSummaryList() const { return m_themeVersionSummaryList; }
    template<typename ThemeVersionSummaryListT = Aws::Vector<ThemeVersionSummary>>
    void SetThemeVersionSummaryList(ThemeVersionSummaryListT&& value) { m_themeVersionSummaryListHasBeenSet = true; m_themeVersionSummaryList = std::forward<ThemeVersionSummaryListT>(value); }
    template<typename ThemeVersionSummaryListT = Aws::Vector<ThemeVersionSummary>>
    ListThemeVersionsResult& WithThemeVersionSummaryList(ThemeVersionSummaryListT&& value) { SetThemeVersionSummaryList(std::forward<ThemeVersionSummaryListT>(value)); return *this;}
    template<typename ThemeVersionSummaryListT = ThemeVersionSummary>
    ListThemeVersionsResult& AddThemeVersionSummaryList(ThemeVersionSummaryListT&& value) { m_themeVersionSummaryListHasBeenSet = true; m_themeVersionSummaryList.emplace_back(std::forward<ThemeVersionSummaryListT>(value)); return *this; }
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
    ListThemeVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListThemeVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThemeVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThemeVersionSummary> m_themeVersionSummaryList;
    bool m_themeVersionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
