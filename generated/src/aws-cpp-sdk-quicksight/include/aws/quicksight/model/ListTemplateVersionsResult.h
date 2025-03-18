/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateVersionSummary.h>
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
  class ListTemplateVersionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListTemplateVersionsResult() = default;
    AWS_QUICKSIGHT_API ListTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing a list of all the versions of the specified
     * template.</p>
     */
    inline const Aws::Vector<TemplateVersionSummary>& GetTemplateVersionSummaryList() const { return m_templateVersionSummaryList; }
    template<typename TemplateVersionSummaryListT = Aws::Vector<TemplateVersionSummary>>
    void SetTemplateVersionSummaryList(TemplateVersionSummaryListT&& value) { m_templateVersionSummaryListHasBeenSet = true; m_templateVersionSummaryList = std::forward<TemplateVersionSummaryListT>(value); }
    template<typename TemplateVersionSummaryListT = Aws::Vector<TemplateVersionSummary>>
    ListTemplateVersionsResult& WithTemplateVersionSummaryList(TemplateVersionSummaryListT&& value) { SetTemplateVersionSummaryList(std::forward<TemplateVersionSummaryListT>(value)); return *this;}
    template<typename TemplateVersionSummaryListT = TemplateVersionSummary>
    ListTemplateVersionsResult& AddTemplateVersionSummaryList(TemplateVersionSummaryListT&& value) { m_templateVersionSummaryListHasBeenSet = true; m_templateVersionSummaryList.emplace_back(std::forward<TemplateVersionSummaryListT>(value)); return *this; }
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
    ListTemplateVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTemplateVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateVersionSummary> m_templateVersionSummaryList;
    bool m_templateVersionSummaryListHasBeenSet = false;

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
