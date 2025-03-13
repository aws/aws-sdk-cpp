/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/ExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/Submission.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The current status and value of a card in an active Amazon Q App
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CardStatus">AWS
   * API Reference</a></p>
   */
  class CardStatus
  {
  public:
    AWS_QAPPS_API CardStatus() = default;
    AWS_QAPPS_API CardStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the card.</p>
     */
    inline ExecutionStatus GetCurrentState() const { return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(ExecutionStatus value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline CardStatus& WithCurrentState(ExecutionStatus value) { SetCurrentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value or result associated with the card.</p>
     */
    inline const Aws::String& GetCurrentValue() const { return m_currentValue; }
    inline bool CurrentValueHasBeenSet() const { return m_currentValueHasBeenSet; }
    template<typename CurrentValueT = Aws::String>
    void SetCurrentValue(CurrentValueT&& value) { m_currentValueHasBeenSet = true; m_currentValue = std::forward<CurrentValueT>(value); }
    template<typename CurrentValueT = Aws::String>
    CardStatus& WithCurrentValue(CurrentValueT&& value) { SetCurrentValue(std::forward<CurrentValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of previous submissions, if the card is a form card.</p>
     */
    inline const Aws::Vector<Submission>& GetSubmissions() const { return m_submissions; }
    inline bool SubmissionsHasBeenSet() const { return m_submissionsHasBeenSet; }
    template<typename SubmissionsT = Aws::Vector<Submission>>
    void SetSubmissions(SubmissionsT&& value) { m_submissionsHasBeenSet = true; m_submissions = std::forward<SubmissionsT>(value); }
    template<typename SubmissionsT = Aws::Vector<Submission>>
    CardStatus& WithSubmissions(SubmissionsT&& value) { SetSubmissions(std::forward<SubmissionsT>(value)); return *this;}
    template<typename SubmissionsT = Submission>
    CardStatus& AddSubmissions(SubmissionsT&& value) { m_submissionsHasBeenSet = true; m_submissions.emplace_back(std::forward<SubmissionsT>(value)); return *this; }
    ///@}
  private:

    ExecutionStatus m_currentState{ExecutionStatus::NOT_SET};
    bool m_currentStateHasBeenSet = false;

    Aws::String m_currentValue;
    bool m_currentValueHasBeenSet = false;

    Aws::Vector<Submission> m_submissions;
    bool m_submissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
