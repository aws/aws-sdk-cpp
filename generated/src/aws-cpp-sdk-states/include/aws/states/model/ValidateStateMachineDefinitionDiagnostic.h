/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/ValidateStateMachineDefinitionSeverity.h>
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
   * <p>Describes potential issues found during state machine validation. Rather than
   * raise an exception, validation will return a list of <b>diagnostic elements</b>
   * containing diagnostic information. </p>  <p>The <a
   * href="https://docs.aws.amazon.com/step-functions/latest/apireference/API_ValidateStateMachineDefinition.html">ValidateStateMachineDefinitionlAPI</a>
   * might add new diagnostics in the future, adjust diagnostic codes, or change the
   * message wording. Your automated processes should only rely on the value of the
   * <b>result</b> field value (OK, FAIL). Do <b>not</b> rely on the exact order,
   * count, or wording of diagnostic messages.</p>  <p> <b>List of warning
   * codes</b> </p> <dl> <dt>NO_DOLLAR</dt> <dd> <p>No <code>.$</code> on a field
   * that appears to be a JSONPath or Intrinsic Function.</p> </dd> <dt>NO_PATH</dt>
   * <dd> <p>Field value looks like a path, but field name does not end with
   * 'Path'.</p> </dd> <dt>PASS_RESULT_IS_STATIC</dt> <dd> <p>Attempt to use a path
   * in the result of a pass state.</p> </dd> </dl> <p> <b>List of error codes</b>
   * </p> <dl> <dt>INVALID_JSON_DESCRIPTION</dt> <dd> <p>JSON syntax problem
   * found.</p> </dd> <dt>MISSING_DESCRIPTION</dt> <dd> <p>Received a null or empty
   * workflow input.</p> </dd> <dt>SCHEMA_VALIDATION_FAILED</dt> <dd> <p>Schema
   * validation reported errors.</p> </dd> <dt>INVALID_RESOURCE</dt> <dd> <p>The
   * value of a Task-state resource field is invalid.</p> </dd>
   * <dt>MISSING_END_STATE</dt> <dd> <p>The workflow does not have a terminal
   * state.</p> </dd> <dt>DUPLICATE_STATE_NAME</dt> <dd> <p>The same state name
   * appears more than once.</p> </dd> <dt>INVALID_STATE_NAME</dt> <dd> <p>The state
   * name does not follow the naming convention.</p> </dd>
   * <dt>STATE_MACHINE_NAME_EMPTY</dt> <dd> <p>The state machine name has not been
   * specified.</p> </dd> <dt>STATE_MACHINE_NAME_INVALID</dt> <dd> <p>The state
   * machine name does not follow the naming convention.</p> </dd>
   * <dt>STATE_MACHINE_NAME_TOO_LONG</dt> <dd> <p>The state name exceeds the allowed
   * length.</p> </dd> <dt>STATE_MACHINE_NAME_ALREADY_EXISTS</dt> <dd> <p>The state
   * name already exists.</p> </dd> <dt>DUPLICATE_LABEL_NAME</dt> <dd> <p>A label
   * name appears more than once.</p> </dd> <dt>INVALID_LABEL_NAME</dt> <dd> <p>You
   * have provided an invalid label name.</p> </dd>
   * <dt>MISSING_TRANSITION_TARGET</dt> <dd> <p>The value of "Next" field doesn't
   * match a known state name.</p> </dd> <dt>TOO_DEEPLY_NESTED</dt> <dd> <p>The
   * states are too deeply nested.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ValidateStateMachineDefinitionDiagnostic">AWS
   * API Reference</a></p>
   */
  class ValidateStateMachineDefinitionDiagnostic
  {
  public:
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic() = default;
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p> <p> <code>WARNING</code> level diagnostics
     * alert you to potential issues, but they will not prevent you from creating or
     * updating your state machine.</p>
     */
    inline ValidateStateMachineDefinitionSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ValidateStateMachineDefinitionSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ValidateStateMachineDefinitionDiagnostic& WithSeverity(ValidateStateMachineDefinitionSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    ValidateStateMachineDefinitionDiagnostic& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidateStateMachineDefinitionDiagnostic& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ValidateStateMachineDefinitionDiagnostic& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    ValidateStateMachineDefinitionSeverity m_severity{ValidateStateMachineDefinitionSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
