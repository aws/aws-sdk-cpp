/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/DisruptionType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>The overall resiliency score, returned as an object that includes the
   * disruption score and outage score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResiliencyScore">AWS
   * API Reference</a></p>
   */
  class ResiliencyScore
  {
  public:
    AWS_RESILIENCEHUB_API ResiliencyScore();
    AWS_RESILIENCEHUB_API ResiliencyScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResiliencyScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline const Aws::Map<DisruptionType, double>& GetDisruptionScore() const{ return m_disruptionScore; }

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline bool DisruptionScoreHasBeenSet() const { return m_disruptionScoreHasBeenSet; }

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline void SetDisruptionScore(const Aws::Map<DisruptionType, double>& value) { m_disruptionScoreHasBeenSet = true; m_disruptionScore = value; }

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline void SetDisruptionScore(Aws::Map<DisruptionType, double>&& value) { m_disruptionScoreHasBeenSet = true; m_disruptionScore = std::move(value); }

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline ResiliencyScore& WithDisruptionScore(const Aws::Map<DisruptionType, double>& value) { SetDisruptionScore(value); return *this;}

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline ResiliencyScore& WithDisruptionScore(Aws::Map<DisruptionType, double>&& value) { SetDisruptionScore(std::move(value)); return *this;}

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline ResiliencyScore& AddDisruptionScore(const DisruptionType& key, double value) { m_disruptionScoreHasBeenSet = true; m_disruptionScore.emplace(key, value); return *this; }

    /**
     * <p>The disruption score for a valid key.</p>
     */
    inline ResiliencyScore& AddDisruptionScore(DisruptionType&& key, double value) { m_disruptionScoreHasBeenSet = true; m_disruptionScore.emplace(std::move(key), value); return *this; }


    /**
     * <p>The outage score for a valid key.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The outage score for a valid key.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The outage score for a valid key.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The outage score for a valid key.</p>
     */
    inline ResiliencyScore& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::Map<DisruptionType, double> m_disruptionScore;
    bool m_disruptionScoreHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
