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
    AWS_SFN_API EvaluationFailedEventDetails();
    AWS_SFN_API EvaluationFailedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API EvaluationFailedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline EvaluationFailedEventDetails& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline EvaluationFailedEventDetails& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline EvaluationFailedEventDetails& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline EvaluationFailedEventDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline EvaluationFailedEventDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline EvaluationFailedEventDetails& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the field in the state in which the evaluation error
     * occurred.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline EvaluationFailedEventDetails& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline EvaluationFailedEventDetails& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline EvaluationFailedEventDetails& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state in which the evaluation error occurred.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline EvaluationFailedEventDetails& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline EvaluationFailedEventDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline EvaluationFailedEventDetails& WithState(const char* value) { SetState(value); return *this;}
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
