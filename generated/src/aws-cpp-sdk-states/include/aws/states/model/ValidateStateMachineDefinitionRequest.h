/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineType.h>
#include <aws/states/model/ValidateStateMachineDefinitionSeverity.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class ValidateStateMachineDefinitionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API ValidateStateMachineDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateStateMachineDefinition"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    ValidateStateMachineDefinitionRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline StateMachineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(StateMachineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ValidateStateMachineDefinitionRequest& WithType(StateMachineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum level of diagnostics to return. <code>ERROR</code> returns only
     * <code>ERROR</code> diagnostics, whereas <code>WARNING</code> returns both
     * <code>WARNING</code> and <code>ERROR</code> diagnostics. The default is
     * <code>ERROR</code>. </p>
     */
    inline ValidateStateMachineDefinitionSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ValidateStateMachineDefinitionSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ValidateStateMachineDefinitionRequest& WithSeverity(ValidateStateMachineDefinitionSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of diagnostics that are returned per call. The default and
     * maximum value is 100. Setting the value to 0 will also use the default of
     * 100.</p> <p>If the number of diagnostics returned in the response exceeds
     * <code>maxResults</code>, the value of the <code>truncated</code> field in the
     * response will be set to <code>true</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ValidateStateMachineDefinitionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    StateMachineType m_type{StateMachineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ValidateStateMachineDefinitionSeverity m_severity{ValidateStateMachineDefinitionSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
