/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/RankingData.h>
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
   * <p>Details about generative data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GenerativeDataDetails">AWS
   * API Reference</a></p>
   */
  class GenerativeDataDetails
  {
  public:
    AWS_QCONNECT_API GenerativeDataDetails();
    AWS_QCONNECT_API GenerativeDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The LLM response.</p>
     */
    inline const Aws::String& GetCompletion() const{ return m_completion; }

    /**
     * <p>The LLM response.</p>
     */
    inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }

    /**
     * <p>The LLM response.</p>
     */
    inline void SetCompletion(const Aws::String& value) { m_completionHasBeenSet = true; m_completion = value; }

    /**
     * <p>The LLM response.</p>
     */
    inline void SetCompletion(Aws::String&& value) { m_completionHasBeenSet = true; m_completion = std::move(value); }

    /**
     * <p>The LLM response.</p>
     */
    inline void SetCompletion(const char* value) { m_completionHasBeenSet = true; m_completion.assign(value); }

    /**
     * <p>The LLM response.</p>
     */
    inline GenerativeDataDetails& WithCompletion(const Aws::String& value) { SetCompletion(value); return *this;}

    /**
     * <p>The LLM response.</p>
     */
    inline GenerativeDataDetails& WithCompletion(Aws::String&& value) { SetCompletion(std::move(value)); return *this;}

    /**
     * <p>The LLM response.</p>
     */
    inline GenerativeDataDetails& WithCompletion(const char* value) { SetCompletion(value); return *this;}


    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const{ return m_rankingData; }

    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }

    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline void SetRankingData(const RankingData& value) { m_rankingDataHasBeenSet = true; m_rankingData = value; }

    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline void SetRankingData(RankingData&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::move(value); }

    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline GenerativeDataDetails& WithRankingData(const RankingData& value) { SetRankingData(value); return *this;}

    /**
     * <p>Details about the generative content ranking data.</p>
     */
    inline GenerativeDataDetails& WithRankingData(RankingData&& value) { SetRankingData(std::move(value)); return *this;}


    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline const Aws::Vector<DataSummary>& GetReferences() const{ return m_references; }

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline void SetReferences(const Aws::Vector<DataSummary>& value) { m_referencesHasBeenSet = true; m_references = value; }

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline void SetReferences(Aws::Vector<DataSummary>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline GenerativeDataDetails& WithReferences(const Aws::Vector<DataSummary>& value) { SetReferences(value); return *this;}

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline GenerativeDataDetails& WithReferences(Aws::Vector<DataSummary>&& value) { SetReferences(std::move(value)); return *this;}

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline GenerativeDataDetails& AddReferences(const DataSummary& value) { m_referencesHasBeenSet = true; m_references.push_back(value); return *this; }

    /**
     * <p>The references used to generative the LLM response.</p>
     */
    inline GenerativeDataDetails& AddReferences(DataSummary&& value) { m_referencesHasBeenSet = true; m_references.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_completion;
    bool m_completionHasBeenSet = false;

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;

    Aws::Vector<DataSummary> m_references;
    bool m_referencesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
