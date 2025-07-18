/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A summary of the call execution that includes an execution ID, the type of
   * execution (for example, <code>Command</code>), and the date/time of the
   * execution using a datetime object that is saved in the following format:
   * <code>yyyy-MM-dd'T'HH:mm:ss'Z'</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceExecutionSummary">AWS
   * API Reference</a></p>
   */
  class ComplianceExecutionSummary
  {
  public:
    AWS_SSM_API ComplianceExecutionSummary() = default;
    AWS_SSM_API ComplianceExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: <code>yyyy-MM-dd'T'HH:mm:ss'Z'</code> </p>  <p>For
     * State Manager associations, this timestamp represents when the compliance status
     * was captured and reported by the Systems Manager service, not when the
     * underlying association was actually executed on the managed node. To track
     * actual association execution times, use the
     * <a>DescribeAssociationExecutionTargets</a> command or check the association
     * execution history in the Systems Manager console.</p> 
     */
    inline const Aws::Utils::DateTime& GetExecutionTime() const { return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    template<typename ExecutionTimeT = Aws::Utils::DateTime>
    void SetExecutionTime(ExecutionTimeT&& value) { m_executionTimeHasBeenSet = true; m_executionTime = std::forward<ExecutionTimeT>(value); }
    template<typename ExecutionTimeT = Aws::Utils::DateTime>
    ComplianceExecutionSummary& WithExecutionTime(ExecutionTimeT&& value) { SetExecutionTime(std::forward<ExecutionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    ComplianceExecutionSummary& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline const Aws::String& GetExecutionType() const { return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    template<typename ExecutionTypeT = Aws::String>
    void SetExecutionType(ExecutionTypeT&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::forward<ExecutionTypeT>(value); }
    template<typename ExecutionTypeT = Aws::String>
    ComplianceExecutionSummary& WithExecutionType(ExecutionTypeT&& value) { SetExecutionType(std::forward<ExecutionTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_executionTime{};
    bool m_executionTimeHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_executionType;
    bool m_executionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
