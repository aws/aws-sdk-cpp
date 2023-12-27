/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Configuration for remote debugging for the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateTrainingJob.html">UpdateTrainingJob</a>
   * API. To learn more about the remote debugging functionality of SageMaker, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-remote-debugging.html">Access
   * a training container through Amazon Web Services Systems Manager (SSM) for
   * remote debugging</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RemoteDebugConfigForUpdate">AWS
   * API Reference</a></p>
   */
  class RemoteDebugConfigForUpdate
  {
  public:
    AWS_SAGEMAKER_API RemoteDebugConfigForUpdate();
    AWS_SAGEMAKER_API RemoteDebugConfigForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RemoteDebugConfigForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If set to True, enables remote debugging.</p>
     */
    inline bool GetEnableRemoteDebug() const{ return m_enableRemoteDebug; }

    /**
     * <p>If set to True, enables remote debugging.</p>
     */
    inline bool EnableRemoteDebugHasBeenSet() const { return m_enableRemoteDebugHasBeenSet; }

    /**
     * <p>If set to True, enables remote debugging.</p>
     */
    inline void SetEnableRemoteDebug(bool value) { m_enableRemoteDebugHasBeenSet = true; m_enableRemoteDebug = value; }

    /**
     * <p>If set to True, enables remote debugging.</p>
     */
    inline RemoteDebugConfigForUpdate& WithEnableRemoteDebug(bool value) { SetEnableRemoteDebug(value); return *this;}

  private:

    bool m_enableRemoteDebug;
    bool m_enableRemoteDebugHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
