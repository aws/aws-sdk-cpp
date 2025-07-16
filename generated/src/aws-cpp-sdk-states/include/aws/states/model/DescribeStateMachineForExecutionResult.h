/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/LoggingConfiguration.h>
#include <aws/states/model/TracingConfiguration.h>
#include <aws/states/model/EncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{
  class DescribeStateMachineForExecutionResult
  {
  public:
    AWS_SFN_API DescribeStateMachineForExecutionResult() = default;
    AWS_SFN_API DescribeStateMachineForExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeStateMachineForExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    DescribeStateMachineForExecutionResult& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeStateMachineForExecutionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    DescribeStateMachineForExecutionResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeStateMachineForExecutionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    DescribeStateMachineForExecutionResult& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    DescribeStateMachineForExecutionResult& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const { return m_tracingConfiguration; }
    template<typename TracingConfigurationT = TracingConfiguration>
    void SetTracingConfiguration(TracingConfigurationT&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::forward<TracingConfigurationT>(value); }
    template<typename TracingConfigurationT = TracingConfiguration>
    DescribeStateMachineForExecutionResult& WithTracingConfiguration(TracingConfigurationT&& value) { SetTracingConfiguration(std::forward<TracingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    DescribeStateMachineForExecutionResult& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This field is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    DescribeStateMachineForExecutionResult& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision identifier for the state machine. The first revision ID when you
     * create the state machine is null.</p> <p>Use the state machine
     * <code>revisionId</code> parameter to compare the revision of a state machine
     * with the configuration of the state machine used for executions without
     * performing a diff of the properties, such as <code>definition</code> and
     * <code>roleArn</code>.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    DescribeStateMachineForExecutionResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure server-side encryption. </p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    DescribeStateMachineForExecutionResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of <b>state name</b> to a list of variables referenced by that state.
     * States that do not use variable references will not be shown in the
     * response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVariableReferences() const { return m_variableReferences; }
    template<typename VariableReferencesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetVariableReferences(VariableReferencesT&& value) { m_variableReferencesHasBeenSet = true; m_variableReferences = std::forward<VariableReferencesT>(value); }
    template<typename VariableReferencesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DescribeStateMachineForExecutionResult& WithVariableReferences(VariableReferencesT&& value) { SetVariableReferences(std::forward<VariableReferencesT>(value)); return *this;}
    template<typename VariableReferencesKeyT = Aws::String, typename VariableReferencesValueT = Aws::Vector<Aws::String>>
    DescribeStateMachineForExecutionResult& AddVariableReferences(VariableReferencesKeyT&& key, VariableReferencesValueT&& value) {
      m_variableReferencesHasBeenSet = true; m_variableReferences.emplace(std::forward<VariableReferencesKeyT>(key), std::forward<VariableReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStateMachineForExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    TracingConfiguration m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_variableReferences;
    bool m_variableReferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
