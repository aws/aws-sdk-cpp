﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/VocabularyState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/VocabularyInfo.h>
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
  class ListMedicalVocabulariesResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesResult();
    AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all custom medical vocabularies that have the status specified in your
     * request. Custom vocabularies are ordered by creation date, with the newest
     * vocabulary first.</p>
     */
    inline const VocabularyState& GetStatus() const{ return m_status; }

    /**
     * <p>Lists all custom medical vocabularies that have the status specified in your
     * request. Custom vocabularies are ordered by creation date, with the newest
     * vocabulary first.</p>
     */
    inline void SetStatus(const VocabularyState& value) { m_status = value; }

    /**
     * <p>Lists all custom medical vocabularies that have the status specified in your
     * request. Custom vocabularies are ordered by creation date, with the newest
     * vocabulary first.</p>
     */
    inline void SetStatus(VocabularyState&& value) { m_status = std::move(value); }

    /**
     * <p>Lists all custom medical vocabularies that have the status specified in your
     * request. Custom vocabularies are ordered by creation date, with the newest
     * vocabulary first.</p>
     */
    inline ListMedicalVocabulariesResult& WithStatus(const VocabularyState& value) { SetStatus(value); return *this;}

    /**
     * <p>Lists all custom medical vocabularies that have the status specified in your
     * request. Custom vocabularies are ordered by creation date, with the newest
     * vocabulary first.</p>
     */
    inline ListMedicalVocabulariesResult& WithStatus(VocabularyState&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListMedicalVocabulariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListMedicalVocabulariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListMedicalVocabulariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline const Aws::Vector<VocabularyInfo>& GetVocabularies() const{ return m_vocabularies; }

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline void SetVocabularies(const Aws::Vector<VocabularyInfo>& value) { m_vocabularies = value; }

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline void SetVocabularies(Aws::Vector<VocabularyInfo>&& value) { m_vocabularies = std::move(value); }

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline ListMedicalVocabulariesResult& WithVocabularies(const Aws::Vector<VocabularyInfo>& value) { SetVocabularies(value); return *this;}

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline ListMedicalVocabulariesResult& WithVocabularies(Aws::Vector<VocabularyInfo>&& value) { SetVocabularies(std::move(value)); return *this;}

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline ListMedicalVocabulariesResult& AddVocabularies(const VocabularyInfo& value) { m_vocabularies.push_back(value); return *this; }

    /**
     * <p>Provides information about the custom medical vocabularies that match the
     * criteria specified in your request.</p>
     */
    inline ListMedicalVocabulariesResult& AddVocabularies(VocabularyInfo&& value) { m_vocabularies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMedicalVocabulariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMedicalVocabulariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMedicalVocabulariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VocabularyState m_status;

    Aws::String m_nextToken;

    Aws::Vector<VocabularyInfo> m_vocabularies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
