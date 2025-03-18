/**
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
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult() = default;
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListVocabularyFiltersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the custom vocabulary filters that match the
     * criteria specified in your request.</p>
     */
    inline const Aws::Vector<VocabularyFilterInfo>& GetVocabularyFilters() const { return m_vocabularyFilters; }
    template<typename VocabularyFiltersT = Aws::Vector<VocabularyFilterInfo>>
    void SetVocabularyFilters(VocabularyFiltersT&& value) { m_vocabularyFiltersHasBeenSet = true; m_vocabularyFilters = std::forward<VocabularyFiltersT>(value); }
    template<typename VocabularyFiltersT = Aws::Vector<VocabularyFilterInfo>>
    ListVocabularyFiltersResult& WithVocabularyFilters(VocabularyFiltersT&& value) { SetVocabularyFilters(std::forward<VocabularyFiltersT>(value)); return *this;}
    template<typename VocabularyFiltersT = VocabularyFilterInfo>
    ListVocabularyFiltersResult& AddVocabularyFilters(VocabularyFiltersT&& value) { m_vocabularyFiltersHasBeenSet = true; m_vocabularyFilters.emplace_back(std::forward<VocabularyFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVocabularyFiltersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VocabularyFilterInfo> m_vocabularyFilters;
    bool m_vocabularyFiltersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
