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
    AWS_QAPPS_API CardStatus();
    AWS_QAPPS_API CardStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the card.</p>
     */
    inline const ExecutionStatus& GetCurrentState() const{ return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(const ExecutionStatus& value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline void SetCurrentState(ExecutionStatus&& value) { m_currentStateHasBeenSet = true; m_currentState = std::move(value); }
    inline CardStatus& WithCurrentState(const ExecutionStatus& value) { SetCurrentState(value); return *this;}
    inline CardStatus& WithCurrentState(ExecutionStatus&& value) { SetCurrentState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value or result associated with the card.</p>
     */
    inline const Aws::String& GetCurrentValue() const{ return m_currentValue; }
    inline bool CurrentValueHasBeenSet() const { return m_currentValueHasBeenSet; }
    inline void SetCurrentValue(const Aws::String& value) { m_currentValueHasBeenSet = true; m_currentValue = value; }
    inline void SetCurrentValue(Aws::String&& value) { m_currentValueHasBeenSet = true; m_currentValue = std::move(value); }
    inline void SetCurrentValue(const char* value) { m_currentValueHasBeenSet = true; m_currentValue.assign(value); }
    inline CardStatus& WithCurrentValue(const Aws::String& value) { SetCurrentValue(value); return *this;}
    inline CardStatus& WithCurrentValue(Aws::String&& value) { SetCurrentValue(std::move(value)); return *this;}
    inline CardStatus& WithCurrentValue(const char* value) { SetCurrentValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of previous submissions, if the card is a form card.</p>
     */
    inline const Aws::Vector<Submission>& GetSubmissions() const{ return m_submissions; }
    inline bool SubmissionsHasBeenSet() const { return m_submissionsHasBeenSet; }
    inline void SetSubmissions(const Aws::Vector<Submission>& value) { m_submissionsHasBeenSet = true; m_submissions = value; }
    inline void SetSubmissions(Aws::Vector<Submission>&& value) { m_submissionsHasBeenSet = true; m_submissions = std::move(value); }
    inline CardStatus& WithSubmissions(const Aws::Vector<Submission>& value) { SetSubmissions(value); return *this;}
    inline CardStatus& WithSubmissions(Aws::Vector<Submission>&& value) { SetSubmissions(std::move(value)); return *this;}
    inline CardStatus& AddSubmissions(const Submission& value) { m_submissionsHasBeenSet = true; m_submissions.push_back(value); return *this; }
    inline CardStatus& AddSubmissions(Submission&& value) { m_submissionsHasBeenSet = true; m_submissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ExecutionStatus m_currentState;
    bool m_currentStateHasBeenSet = false;

    Aws::String m_currentValue;
    bool m_currentValueHasBeenSet = false;

    Aws::Vector<Submission> m_submissions;
    bool m_submissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
