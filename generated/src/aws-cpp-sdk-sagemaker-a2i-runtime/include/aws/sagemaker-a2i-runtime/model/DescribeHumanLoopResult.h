/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{
  class DescribeHumanLoopResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult();
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeHumanLoopResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeHumanLoopResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeHumanLoopResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeHumanLoopResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }
    inline DescribeHumanLoopResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline DescribeHumanLoopResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the human loop. </p>
     */
    inline const HumanLoopStatus& GetHumanLoopStatus() const{ return m_humanLoopStatus; }
    inline void SetHumanLoopStatus(const HumanLoopStatus& value) { m_humanLoopStatus = value; }
    inline void SetHumanLoopStatus(HumanLoopStatus&& value) { m_humanLoopStatus = std::move(value); }
    inline DescribeHumanLoopResult& WithHumanLoopStatus(const HumanLoopStatus& value) { SetHumanLoopStatus(value); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopStatus(HumanLoopStatus&& value) { SetHumanLoopStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopName = value; }
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopName = std::move(value); }
    inline void SetHumanLoopName(const char* value) { m_humanLoopName.assign(value); }
    inline DescribeHumanLoopResult& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArn = value; }
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArn = std::move(value); }
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArn.assign(value); }
    inline DescribeHumanLoopResult& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline const HumanLoopOutput& GetHumanLoopOutput() const{ return m_humanLoopOutput; }
    inline void SetHumanLoopOutput(const HumanLoopOutput& value) { m_humanLoopOutput = value; }
    inline void SetHumanLoopOutput(HumanLoopOutput&& value) { m_humanLoopOutput = std::move(value); }
    inline DescribeHumanLoopResult& WithHumanLoopOutput(const HumanLoopOutput& value) { SetHumanLoopOutput(value); return *this;}
    inline DescribeHumanLoopResult& WithHumanLoopOutput(HumanLoopOutput&& value) { SetHumanLoopOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHumanLoopResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHumanLoopResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHumanLoopResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    Aws::String m_failureCode;

    HumanLoopStatus m_humanLoopStatus;

    Aws::String m_humanLoopName;

    Aws::String m_humanLoopArn;

    Aws::String m_flowDefinitionArn;

    HumanLoopOutput m_humanLoopOutput;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
