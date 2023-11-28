/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RelevanceLevel.h>
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

  /**
   * <p>Details about the source content ranking data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RankingData">AWS
   * API Reference</a></p>
   */
  class RankingData
  {
  public:
    AWS_QCONNECT_API RankingData();
    AWS_QCONNECT_API RankingData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RankingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The relevance score of the content.</p>
     */
    inline const RelevanceLevel& GetRelevanceLevel() const{ return m_relevanceLevel; }

    /**
     * <p>The relevance score of the content.</p>
     */
    inline bool RelevanceLevelHasBeenSet() const { return m_relevanceLevelHasBeenSet; }

    /**
     * <p>The relevance score of the content.</p>
     */
    inline void SetRelevanceLevel(const RelevanceLevel& value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = value; }

    /**
     * <p>The relevance score of the content.</p>
     */
    inline void SetRelevanceLevel(RelevanceLevel&& value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = std::move(value); }

    /**
     * <p>The relevance score of the content.</p>
     */
    inline RankingData& WithRelevanceLevel(const RelevanceLevel& value) { SetRelevanceLevel(value); return *this;}

    /**
     * <p>The relevance score of the content.</p>
     */
    inline RankingData& WithRelevanceLevel(RelevanceLevel&& value) { SetRelevanceLevel(std::move(value)); return *this;}


    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline double GetRelevanceScore() const{ return m_relevanceScore; }

    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }

    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }

    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline RankingData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}

  private:

    RelevanceLevel m_relevanceLevel;
    bool m_relevanceLevelHasBeenSet = false;

    double m_relevanceScore;
    bool m_relevanceScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
