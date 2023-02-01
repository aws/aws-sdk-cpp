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


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine associated with the
     * execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine associated with the execution.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline void SetDefinition(const char* value) { m_definition.assign(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline DescribeStateMachineForExecutionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline DescribeStateMachineForExecutionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the State Machine for the
     * execution. </p>
     */
    inline DescribeStateMachineForExecutionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }

    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }

    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time the state machine associated with an execution was updated.
     * For a newly created state machine, this is the creation date.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    
    inline DescribeStateMachineForExecutionResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    
    inline DescribeStateMachineForExecutionResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const{ return m_tracingConfiguration; }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline void SetTracingConfiguration(const TracingConfiguration& value) { m_tracingConfiguration = value; }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline void SetTracingConfiguration(TracingConfiguration&& value) { m_tracingConfiguration = std::move(value); }

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetMapRunArn(const char* value) { m_mapRunArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * execution. This field is returned only if the <code>executionArn</code> is a
     * child workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}


    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_label = value; }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline void SetLabel(const char* value) { m_label.assign(value); }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This ﬁeld is returned only if the <code>executionArn</code> is a child
     * workflow execution that was started by a Distributed Map state.</p>
     */
    inline DescribeStateMachineForExecutionResult& WithLabel(const char* value) { SetLabel(value); return *this;}

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
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
