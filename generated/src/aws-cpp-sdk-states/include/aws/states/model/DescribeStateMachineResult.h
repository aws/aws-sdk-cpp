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
    AWS_SFN_API DescribeStateMachineResult();
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
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }
    inline DescribeStateMachineResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline DescribeStateMachineResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeStateMachineResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeStateMachineResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the state machine.</p>
     */
    inline const StateMachineStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StateMachineStatus& value) { m_status = value; }
    inline void SetStatus(StateMachineStatus&& value) { m_status = std::move(value); }
    inline DescribeStateMachineResult& WithStatus(const StateMachineStatus& value) { SetStatus(value); return *this;}
    inline DescribeStateMachineResult& WithStatus(StateMachineStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p> <p>If called with <code>includedData =
     * METADATA_ONLY</code>, the returned definition will be <code>{}</code>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definition.assign(value); }
    inline DescribeStateMachineResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline DescribeStateMachineResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeStateMachineResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeStateMachineResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline const StateMachineType& GetType() const{ return m_type; }
    inline void SetType(const StateMachineType& value) { m_type = value; }
    inline void SetType(StateMachineType&& value) { m_type = std::move(value); }
    inline DescribeStateMachineResult& WithType(const StateMachineType& value) { SetType(value); return *this;}
    inline DescribeStateMachineResult& WithType(StateMachineType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeStateMachineResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeStateMachineResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }
    inline DescribeStateMachineResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline DescribeStateMachineResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const{ return m_tracingConfiguration; }
    inline void SetTracingConfiguration(const TracingConfiguration& value) { m_tracingConfiguration = value; }
    inline void SetTracingConfiguration(TracingConfiguration&& value) { m_tracingConfiguration = std::move(value); }
    inline DescribeStateMachineResult& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}
    inline DescribeStateMachineResult& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline void SetLabel(const Aws::String& value) { m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_label.assign(value); }
    inline DescribeStateMachineResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline DescribeStateMachineResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline DescribeStateMachineResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline DescribeStateMachineResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the state machine version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeStateMachineResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeStateMachineResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure server-side encryption. </p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfiguration = std::move(value); }
    inline DescribeStateMachineResult& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline DescribeStateMachineResult& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of <b>state name</b> to a list of variables referenced by that state.
     * States that do not use variable references will not be shown in the
     * response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVariableReferences() const{ return m_variableReferences; }
    inline void SetVariableReferences(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_variableReferences = value; }
    inline void SetVariableReferences(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_variableReferences = std::move(value); }
    inline DescribeStateMachineResult& WithVariableReferences(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetVariableReferences(value); return *this;}
    inline DescribeStateMachineResult& WithVariableReferences(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetVariableReferences(std::move(value)); return *this;}
    inline DescribeStateMachineResult& AddVariableReferences(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(key, value); return *this; }
    inline DescribeStateMachineResult& AddVariableReferences(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(std::move(key), value); return *this; }
    inline DescribeStateMachineResult& AddVariableReferences(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(key, std::move(value)); return *this; }
    inline DescribeStateMachineResult& AddVariableReferences(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeStateMachineResult& AddVariableReferences(const char* key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(key, std::move(value)); return *this; }
    inline DescribeStateMachineResult& AddVariableReferences(const char* key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeStateMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeStateMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeStateMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;

    Aws::String m_name;

    StateMachineStatus m_status;

    Aws::String m_definition;

    Aws::String m_roleArn;

    StateMachineType m_type;

    Aws::Utils::DateTime m_creationDate;

    LoggingConfiguration m_loggingConfiguration;

    TracingConfiguration m_tracingConfiguration;

    Aws::String m_label;

    Aws::String m_revisionId;

    Aws::String m_description;

    EncryptionConfiguration m_encryptionConfiguration;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_variableReferences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
