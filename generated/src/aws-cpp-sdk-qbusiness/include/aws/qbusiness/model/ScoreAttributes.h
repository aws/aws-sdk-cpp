/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ScoreConfidence.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about the relevance score of content.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ScoreAttributes">AWS
   * API Reference</a></p>
   */
  class ScoreAttributes
  {
  public:
    AWS_QBUSINESS_API ScoreAttributes() = default;
    AWS_QBUSINESS_API ScoreAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ScoreAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The confidence level of the relevance score.</p>
     */
    inline ScoreConfidence GetScoreConfidence() const { return m_scoreConfidence; }
    inline bool ScoreConfidenceHasBeenSet() const { return m_scoreConfidenceHasBeenSet; }
    inline void SetScoreConfidence(ScoreConfidence value) { m_scoreConfidenceHasBeenSet = true; m_scoreConfidence = value; }
    inline ScoreAttributes& WithScoreConfidence(ScoreConfidence value) { SetScoreConfidence(value); return *this;}
    ///@}
  private:

    ScoreConfidence m_scoreConfidence{ScoreConfidence::NOT_SET};
    bool m_scoreConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
