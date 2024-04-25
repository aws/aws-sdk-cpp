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
   * <p>Describes an error found during validation. Validation errors found in the
   * definition return in the response as <b>diagnostic elements</b>, rather than
   * raise an exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ValidateStateMachineDefinitionDiagnostic">AWS
   * API Reference</a></p>
   */
  class ValidateStateMachineDefinitionDiagnostic
  {
  public:
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic();
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ValidateStateMachineDefinitionDiagnostic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline const ValidateStateMachineDefinitionSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline void SetSeverity(const ValidateStateMachineDefinitionSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline void SetSeverity(ValidateStateMachineDefinitionSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithSeverity(const ValidateStateMachineDefinitionSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithSeverity(ValidateStateMachineDefinitionSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    ValidateStateMachineDefinitionSeverity m_severity;
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
