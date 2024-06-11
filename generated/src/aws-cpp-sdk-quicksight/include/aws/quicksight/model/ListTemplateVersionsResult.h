﻿/**
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
    AWS_QUICKSIGHT_API ListTemplateVersionsResult();
    AWS_QUICKSIGHT_API ListTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing a list of all the versions of the specified
     * template.</p>
     */
    inline const Aws::Vector<TemplateVersionSummary>& GetTemplateVersionSummaryList() const{ return m_templateVersionSummaryList; }
    inline void SetTemplateVersionSummaryList(const Aws::Vector<TemplateVersionSummary>& value) { m_templateVersionSummaryList = value; }
    inline void SetTemplateVersionSummaryList(Aws::Vector<TemplateVersionSummary>&& value) { m_templateVersionSummaryList = std::move(value); }
    inline ListTemplateVersionsResult& WithTemplateVersionSummaryList(const Aws::Vector<TemplateVersionSummary>& value) { SetTemplateVersionSummaryList(value); return *this;}
    inline ListTemplateVersionsResult& WithTemplateVersionSummaryList(Aws::Vector<TemplateVersionSummary>&& value) { SetTemplateVersionSummaryList(std::move(value)); return *this;}
    inline ListTemplateVersionsResult& AddTemplateVersionSummaryList(const TemplateVersionSummary& value) { m_templateVersionSummaryList.push_back(value); return *this; }
    inline ListTemplateVersionsResult& AddTemplateVersionSummaryList(TemplateVersionSummary&& value) { m_templateVersionSummaryList.push_back(std::move(value)); return *this; }
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
    inline ListTemplateVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTemplateVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTemplateVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListTemplateVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTemplateVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTemplateVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTemplateVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateVersionSummary> m_templateVersionSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
