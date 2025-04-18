/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/DataSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/RankingData.h>
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
   * <p>Details about generative data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GenerativeDataDetails">AWS
   * API Reference</a></p>
   */
  class GenerativeDataDetails
  {
  public:
    AWS_QCONNECT_API GenerativeDataDetails() = default;
    AWS_QCONNECT_API GenerativeDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The LLM response.</p>
     */
    inline const Aws::String& GetCompletion() const { return m_completion; }
    inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
    template<typename CompletionT = Aws::String>
    void SetCompletion(CompletionT&& value) { m_completionHasBeenSet = true; m_completion = std::forward<CompletionT>(value); }
    template<typename CompletionT = Aws::String>
    GenerativeDataDetails& WithCompletion(CompletionT&& value) { SetCompletion(std::forward<CompletionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline const Aws::Vector<DataSummary>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Vector<DataSummary>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Vector<DataSummary>>
    GenerativeDataDetails& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesT = DataSummary>
    GenerativeDataDetails& AddReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references.emplace_back(std::forward<ReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const { return m_rankingData; }
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }
    template<typename RankingDataT = RankingData>
    void SetRankingData(RankingDataT&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::forward<RankingDataT>(value); }
    template<typename RankingDataT = RankingData>
    GenerativeDataDetails& WithRankingData(RankingDataT&& value) { SetRankingData(std::forward<RankingDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_completion;
    bool m_completionHasBeenSet = false;

    Aws::Vector<DataSummary> m_references;
    bool m_referencesHasBeenSet = false;

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
