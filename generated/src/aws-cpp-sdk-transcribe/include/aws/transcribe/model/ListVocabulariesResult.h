/**
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
  class ListVocabulariesResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListVocabulariesResult() = default;
    AWS_TRANSCRIBESERVICE_API ListVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all custom vocabularies that have the status specified in your request.
     * Vocabularies are ordered by creation date, with the newest vocabulary first.</p>
     */
    inline VocabularyState GetStatus() const { return m_status; }
    inline void SetStatus(VocabularyState value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListVocabulariesResult& WithStatus(VocabularyState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVocabulariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the custom vocabularies that match the criteria
     * specified in your request.</p>
     */
    inline const Aws::Vector<VocabularyInfo>& GetVocabularies() const { return m_vocabularies; }
    template<typename VocabulariesT = Aws::Vector<VocabularyInfo>>
    void SetVocabularies(VocabulariesT&& value) { m_vocabulariesHasBeenSet = true; m_vocabularies = std::forward<VocabulariesT>(value); }
    template<typename VocabulariesT = Aws::Vector<VocabularyInfo>>
    ListVocabulariesResult& WithVocabularies(VocabulariesT&& value) { SetVocabularies(std::forward<VocabulariesT>(value)); return *this;}
    template<typename VocabulariesT = VocabularyInfo>
    ListVocabulariesResult& AddVocabularies(VocabulariesT&& value) { m_vocabulariesHasBeenSet = true; m_vocabularies.emplace_back(std::forward<VocabulariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVocabulariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VocabularyState m_status{VocabularyState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VocabularyInfo> m_vocabularies;
    bool m_vocabulariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
