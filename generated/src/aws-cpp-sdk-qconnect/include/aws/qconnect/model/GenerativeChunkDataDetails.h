/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/DataSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{
  class DataSummary;

  /**
   * <p>Details about the generative chunk data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GenerativeChunkDataDetails">AWS
   * API Reference</a></p>
   */
  class GenerativeChunkDataDetails
  {
  public:
    AWS_QCONNECT_API GenerativeChunkDataDetails() = default;
    AWS_QCONNECT_API GenerativeChunkDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeChunkDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A chunk of the LLM response.</p>
     */
    inline const Aws::String& GetCompletion() const { return m_completion; }
    inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
    template<typename CompletionT = Aws::String>
    void SetCompletion(CompletionT&& value) { m_completionHasBeenSet = true; m_completion = std::forward<CompletionT>(value); }
    template<typename CompletionT = Aws::String>
    GenerativeChunkDataDetails& WithCompletion(CompletionT&& value) { SetCompletion(std::forward<CompletionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The references used to generate the LLM response.</p>
     */
    inline const Aws::Vector<DataSummary>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Vector<DataSummary>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Vector<DataSummary>>
    GenerativeChunkDataDetails& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesT = DataSummary>
    GenerativeChunkDataDetails& AddReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references.emplace_back(std::forward<ReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of chunks. Use the value returned in the previous
     * response in the next request to retrieve the next set of chunks.</p>
     */
    inline const Aws::String& GetNextChunkToken() const { return m_nextChunkToken; }
    inline bool NextChunkTokenHasBeenSet() const { return m_nextChunkTokenHasBeenSet; }
    template<typename NextChunkTokenT = Aws::String>
    void SetNextChunkToken(NextChunkTokenT&& value) { m_nextChunkTokenHasBeenSet = true; m_nextChunkToken = std::forward<NextChunkTokenT>(value); }
    template<typename NextChunkTokenT = Aws::String>
    GenerativeChunkDataDetails& WithNextChunkToken(NextChunkTokenT&& value) { SetNextChunkToken(std::forward<NextChunkTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_completion;
    bool m_completionHasBeenSet = false;

    Aws::Vector<DataSummary> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_nextChunkToken;
    bool m_nextChunkTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
