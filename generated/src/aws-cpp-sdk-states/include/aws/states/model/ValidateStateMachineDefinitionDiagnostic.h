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


    ///@{
    /**
     * <p>A value of <code>ERROR</code> means that you cannot create or update a state
     * machine with this definition.</p>
     */
    inline const ValidateStateMachineDefinitionSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const ValidateStateMachineDefinitionSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(ValidateStateMachineDefinitionSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ValidateStateMachineDefinitionDiagnostic& WithSeverity(const ValidateStateMachineDefinitionSeverity& value) { SetSeverity(value); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithSeverity(ValidateStateMachineDefinitionSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifying code for the diagnostic.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the diagnostic condition.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the issue in the state machine, if available.</p> <p>For errors
     * specific to a field, the location could be in the format:
     * <code>/States/&lt;StateName&gt;/&lt;FieldName&gt;</code>, for example:
     * <code>/States/FailState/ErrorPath</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ValidateStateMachineDefinitionDiagnostic& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
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
