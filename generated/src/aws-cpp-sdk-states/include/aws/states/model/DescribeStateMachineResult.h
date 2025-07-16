/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineStatus.h>
#include <aws/states/model/StateMachineType.h>
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
  class DescribeStateMachineResult
  {
  public:
    AWS_SFN_API DescribeStateMachineResult() = default;
    AWS_SFN_API DescribeStateMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeStateMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    DescribeStateMachineResult& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeStateMachineResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the state machine.</p>
     */
    inline StateMachineStatus GetStatus() const { return m_status; }
    inline void SetStatus(StateMachineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeStateMachineResult& WithStatus(StateMachineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p> <p>If called with <code>includedData =
     * METADATA_ONLY</code>, the returned definition will be <code>{}</code>.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    DescribeStateMachineResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeStateMachineResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline StateMachineType GetType() const { return m_type; }
    inline void SetType(StateMachineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeStateMachineResult& WithType(StateMachineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeStateMachineResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    DescribeStateMachineResult& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const { return m_tracingConfiguration; }
    template<typename TracingConfigurationT = TracingConfiguration>
    void SetTracingConfiguration(TracingConfigurationT&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::forward<TracingConfigurationT>(value); }
    template<typename TracingConfigurationT = TracingConfiguration>
    DescribeStateMachineResult& WithTracingConfiguration(TracingConfigurationT&& value) { SetTracingConfiguration(std::forward<TracingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    DescribeStateMachineResult& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    DescribeStateMachineResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the state machine version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeStateMachineResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure server-side encryption. </p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    DescribeStateMachineResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
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
    DescribeStateMachineResult& WithVariableReferences(VariableReferencesT&& value) { SetVariableReferences(std::forward<VariableReferencesT>(value)); return *this;}
    template<typename VariableReferencesKeyT = Aws::String, typename VariableReferencesValueT = Aws::Vector<Aws::String>>
    DescribeStateMachineResult& AddVariableReferences(VariableReferencesKeyT&& key, VariableReferencesValueT&& value) {
      m_variableReferencesHasBeenSet = true; m_variableReferences.emplace(std::forward<VariableReferencesKeyT>(key), std::forward<VariableReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStateMachineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StateMachineStatus m_status{StateMachineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StateMachineType m_type{StateMachineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    TracingConfiguration m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
