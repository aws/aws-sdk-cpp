/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/VocabularyState.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class ListMedicalVocabulariesRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMedicalVocabularies"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If your <code>ListMedicalVocabularies</code> request returns more results
     * than can be displayed, <code>NextToken</code> is displayed in the response with
     * an associated string. To get the next page of results, copy this string and
     * repeat your request, including <code>NextToken</code> with the value of the
     * copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMedicalVocabulariesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of custom medical vocabularies to return in each page of
     * results. If there are fewer results than the value that you specify, only the
     * actual results are returned. If you do not specify a value, a default of 5 is
     * used.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMedicalVocabulariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only custom medical vocabularies with the specified state. Custom
     * vocabularies are ordered by creation date, with the newest vocabulary first. If
     * you do not include <code>StateEquals</code>, all custom medical vocabularies are
     * returned.</p>
     */
    inline VocabularyState GetStateEquals() const { return m_stateEquals; }
    inline bool StateEqualsHasBeenSet() const { return m_stateEqualsHasBeenSet; }
    inline void SetStateEquals(VocabularyState value) { m_stateEqualsHasBeenSet = true; m_stateEquals = value; }
    inline ListMedicalVocabulariesRequest& WithStateEquals(VocabularyState value) { SetStateEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only the custom medical vocabularies that contain the specified
     * string. The search is not case sensitive.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListMedicalVocabulariesRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    VocabularyState m_stateEquals{VocabularyState::NOT_SET};
    bool m_stateEqualsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
