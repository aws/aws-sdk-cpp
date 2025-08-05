/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchAddClusterNodesErrorCode.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about an error that occurred during the node addition
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchAddClusterNodesError">AWS
   * API Reference</a></p>
   */
  class BatchAddClusterNodesError
  {
  public:
    AWS_SAGEMAKER_API BatchAddClusterNodesError() = default;
    AWS_SAGEMAKER_API BatchAddClusterNodesError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchAddClusterNodesError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the instance group for which the error occurred.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    BatchAddClusterNodesError& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code associated with the failure. Possible values include
     * <code>InstanceGroupNotFound</code> and
     * <code>InvalidInstanceGroupState</code>.</p>
     */
    inline BatchAddClusterNodesErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(BatchAddClusterNodesErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline BatchAddClusterNodesError& WithErrorCode(BatchAddClusterNodesErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that failed to be added to the specified instance
     * group.</p>
     */
    inline int GetFailedCount() const { return m_failedCount; }
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }
    inline BatchAddClusterNodesError& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive message providing additional details about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchAddClusterNodesError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    BatchAddClusterNodesErrorCode m_errorCode{BatchAddClusterNodesErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    int m_failedCount{0};
    bool m_failedCountHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
