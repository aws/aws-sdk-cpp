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
    AWS_QUICKSIGHT_API ListThemeVersionsResult();
    AWS_QUICKSIGHT_API ListThemeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListThemeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing a list of all the versions of the specified theme.</p>
     */
    inline const Aws::Vector<ThemeVersionSummary>& GetThemeVersionSummaryList() const{ return m_themeVersionSummaryList; }
    inline void SetThemeVersionSummaryList(const Aws::Vector<ThemeVersionSummary>& value) { m_themeVersionSummaryList = value; }
    inline void SetThemeVersionSummaryList(Aws::Vector<ThemeVersionSummary>&& value) { m_themeVersionSummaryList = std::move(value); }
    inline ListThemeVersionsResult& WithThemeVersionSummaryList(const Aws::Vector<ThemeVersionSummary>& value) { SetThemeVersionSummaryList(value); return *this;}
    inline ListThemeVersionsResult& WithThemeVersionSummaryList(Aws::Vector<ThemeVersionSummary>&& value) { SetThemeVersionSummaryList(std::move(value)); return *this;}
    inline ListThemeVersionsResult& AddThemeVersionSummaryList(const ThemeVersionSummary& value) { m_themeVersionSummaryList.push_back(value); return *this; }
    inline ListThemeVersionsResult& AddThemeVersionSummaryList(ThemeVersionSummary&& value) { m_themeVersionSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListThemeVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListThemeVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListThemeVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListThemeVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListThemeVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListThemeVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListThemeVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ThemeVersionSummary> m_themeVersionSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
