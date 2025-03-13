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
    AWS_PERSONALIZERUNTIME_API PredictedAction() = default;
    AWS_PERSONALIZERUNTIME_API PredictedAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API PredictedAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the recommended action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    PredictedAction& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The score of the recommended action. For information about action scores, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline PredictedAction& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
