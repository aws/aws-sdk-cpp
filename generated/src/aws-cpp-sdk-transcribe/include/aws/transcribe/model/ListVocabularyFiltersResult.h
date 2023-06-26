﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/VocabularyFilterInfo.h>
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
  class ListVocabularyFiltersResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult();
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline const Aws::Vector<VocabularyFilterInfo>& GetVocabularyFilters() const{ return m_vocabularyFilters; }

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline void SetVocabularyFilters(const Aws::Vector<VocabularyFilterInfo>& value) { m_vocabularyFilters = value; }

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline void SetVocabularyFilters(Aws::Vector<VocabularyFilterInfo>&& value) { m_vocabularyFilters = std::move(value); }

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline ListVocabularyFiltersResult& WithVocabularyFilters(const Aws::Vector<VocabularyFilterInfo>& value) { SetVocabularyFilters(value); return *this;}

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline ListVocabularyFiltersResult& WithVocabularyFilters(Aws::Vector<VocabularyFilterInfo>&& value) { SetVocabularyFilters(std::move(value)); return *this;}

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline ListVocabularyFiltersResult& AddVocabularyFilters(const VocabularyFilterInfo& value) { m_vocabularyFilters.push_back(value); return *this; }

    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline ListVocabularyFiltersResult& AddVocabularyFilters(VocabularyFilterInfo&& value) { m_vocabularyFilters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVocabularyFiltersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVocabularyFiltersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVocabularyFiltersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<VocabularyFilterInfo> m_vocabularyFilters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
