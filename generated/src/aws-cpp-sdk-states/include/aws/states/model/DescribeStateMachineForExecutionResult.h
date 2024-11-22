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
    AWS_SFN_API DescribeStateMachineForExecutionResult();
    AWS_SFN_API DescribeStateMachineForExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeStateMachineForExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definition.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }
    inline DescribeStateMachineForExecutionResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }
    inline DescribeStateMachineForExecutionResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const{ return m_tracingConfiguration; }
    inline void SetTracingConfiguration(const TracingConfiguration& value) { m_tracingConfiguration = value; }
    inline void SetTracingConfiguration(TracingConfiguration&& value) { m_tracingConfiguration = std::move(value); }
    inline DescribeStateMachineForExecutionResult& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArn = value; }
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArn = std::move(value); }
    inline void SetMapRunArn(const char* value) { m_mapRunArn.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline void SetLabel(const Aws::String& value) { m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_label.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithLabel(const char* value) { SetLabel(value); return *this;}
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
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure server-side encryption. </p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfiguration = std::move(value); }
    inline DescribeStateMachineForExecutionResult& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
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
    inline DescribeStateMachineForExecutionResult& WithVariableReferences(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetVariableReferences(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithVariableReferences(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetVariableReferences(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(key, value); return *this; }
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(std::move(key), value); return *this; }
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(key, std::move(value)); return *this; }
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(const char* key, Aws::Vector<Aws::String>&& value) { m_variableReferences.emplace(key, std::move(value)); return *this; }
    inline DescribeStateMachineForExecutionResult& AddVariableReferences(const char* key, const Aws::Vector<Aws::String>& value) { m_variableReferences.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeStateMachineForExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeStateMachineForExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;

    Aws::String m_name;

    Aws::String m_definition;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_updateDate;

    LoggingConfiguration m_loggingConfiguration;

    TracingConfiguration m_tracingConfiguration;

    Aws::String m_mapRunArn;

    Aws::String m_label;

    Aws::String m_revisionId;

    EncryptionConfiguration m_encryptionConfiguration;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_variableReferences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
