﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/CategoryProperties.h>
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
namespace TranscribeService
{
namespace Model
{
  class ListCallAnalyticsCategoriesResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsCategoriesResult();
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCallAnalyticsCategoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCallAnalyticsCategoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCallAnalyticsCategoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about your Call Analytics categories, including
     * all the rules associated with each category.</p>
     */
    inline const Aws::Vector<CategoryProperties>& GetCategories() const{ return m_categories; }
    inline void SetCategories(const Aws::Vector<CategoryProperties>& value) { m_categories = value; }
    inline void SetCategories(Aws::Vector<CategoryProperties>&& value) { m_categories = std::move(value); }
    inline ListCallAnalyticsCategoriesResult& WithCategories(const Aws::Vector<CategoryProperties>& value) { SetCategories(value); return *this;}
    inline ListCallAnalyticsCategoriesResult& WithCategories(Aws::Vector<CategoryProperties>&& value) { SetCategories(std::move(value)); return *this;}
    inline ListCallAnalyticsCategoriesResult& AddCategories(const CategoryProperties& value) { m_categories.push_back(value); return *this; }
    inline ListCallAnalyticsCategoriesResult& AddCategories(CategoryProperties&& value) { m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCallAnalyticsCategoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCallAnalyticsCategoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCallAnalyticsCategoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CategoryProperties> m_categories;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
