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


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline DescribeStateMachineResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline DescribeStateMachineResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p> <p>If
     * you specified a state machine version ARN in your request, the API returns the
     * version ARN. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline DescribeStateMachineResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


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

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline DescribeStateMachineResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline DescribeStateMachineResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline DescribeStateMachineResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the state machine.</p>
     */
    inline const StateMachineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the state machine.</p>
     */
    inline void SetStatus(const StateMachineStatus& value) { m_status = value; }

    /**
     * <p>The current status of the state machine.</p>
     */
    inline void SetStatus(StateMachineStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the state machine.</p>
     */
    inline DescribeStateMachineResult& WithStatus(const StateMachineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the state machine.</p>
     */
    inline DescribeStateMachineResult& WithStatus(StateMachineStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline DescribeStateMachineResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline DescribeStateMachineResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline DescribeStateMachineResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline DescribeStateMachineResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline DescribeStateMachineResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. (The IAM role maintains security by granting Step Functions access to
     * Amazon Web Services resources.)</p>
     */
    inline DescribeStateMachineResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline const StateMachineType& GetType() const{ return m_type; }

    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline void SetType(const StateMachineType& value) { m_type = value; }

    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline void SetType(StateMachineType&& value) { m_type = std::move(value); }

    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline DescribeStateMachineResult& WithType(const StateMachineType& value) { SetType(value); return *this;}

    /**
     * <p>The <code>type</code> of the state machine (<code>STANDARD</code> or
     * <code>EXPRESS</code>).</p>
     */
    inline DescribeStateMachineResult& WithType(StateMachineType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline DescribeStateMachineResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the state machine is created.</p> <p>For a state machine version,
     * <code>creationDate</code> is the date the version was created.</p>
     */
    inline DescribeStateMachineResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    
    inline DescribeStateMachineResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    
    inline DescribeStateMachineResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


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
    inline DescribeStateMachineResult& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}

    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline DescribeStateMachineResult& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_label = value; }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline void SetLabel(const char* value) { m_label.assign(value); }

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline DescribeStateMachineResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline DescribeStateMachineResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A user-defined or an auto-generated string that identifies a <code>Map</code>
     * state. This parameter is present only if the <code>stateMachineArn</code>
     * specified in input is a qualified state machine ARN.</p>
     */
    inline DescribeStateMachineResult& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline DescribeStateMachineResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline DescribeStateMachineResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision identifier for the state machine.</p> <p>Use the
     * <code>revisionId</code> parameter to compare between versions of a state machine
     * configuration used for executions without performing a diff of the properties,
     * such as <code>definition</code> and <code>roleArn</code>.</p>
     */
    inline DescribeStateMachineResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The description of the state machine version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the state machine version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the state machine version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the state machine version.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the state machine version.</p>
     */
    inline DescribeStateMachineResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the state machine version.</p>
     */
    inline DescribeStateMachineResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the state machine version.</p>
     */
    inline DescribeStateMachineResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeStateMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeStateMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeStateMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
