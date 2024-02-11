/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   * <p>An object that identifies an action.</p> <p>The API returns a list of
   * <code>PredictedAction</code>s.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/PredictedAction">AWS
   * API Reference</a></p>
   */
  class PredictedAction
  {
  public:
    AWS_PERSONALIZERUNTIME_API PredictedAction();
    AWS_PERSONALIZERUNTIME_API PredictedAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API PredictedAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the recommended action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline PredictedAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline PredictedAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the recommended action.</p>
     */
    inline PredictedAction& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The score of the recommended action. For information about action scores, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The score of the recommended action. For information about action scores, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The score of the recommended action. For information about action scores, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The score of the recommended action. For information about action scores, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline PredictedAction& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
