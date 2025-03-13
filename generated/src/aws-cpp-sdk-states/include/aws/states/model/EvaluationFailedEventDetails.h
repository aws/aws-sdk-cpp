/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an evaluation failure that occurred while processing a
   * state, for example, when a JSONata expression throws an error. This event will
   * only be present in state machines that have <b> QueryLanguage</b> set to
   * JSONata, or individual states set to JSONata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/EvaluationFailedEventDetails">AWS
   * API Reference</a></p>
   */
  class EvaluationFailedEventDetails
  {
  public:
    AWS_SFN_API EvaluationFailedEventDetails() = default;
    AWS_SFN_API EvaluationFailedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API EvaluationFailedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    EvaluationFailedEventDetails& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    EvaluationFailedEventDetails& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the field in the state in which the evaluation error
     * occurred.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    EvaluationFailedEventDetails& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state in which the evaluation error occurred.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    EvaluationFailedEventDetails& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
