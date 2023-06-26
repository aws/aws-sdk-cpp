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
   * <p>Configures the timeout and maximum number of retries for processing a
   * transform job invocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelClientConfig">AWS
   * API Reference</a></p>
   */
  class ModelClientConfig
  {
  public:
    AWS_SAGEMAKER_API ModelClientConfig();
    AWS_SAGEMAKER_API ModelClientConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelClientConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timeout value in seconds for an invocation request. The default value is
     * 600.</p>
     */
    inline int GetInvocationsTimeoutInSeconds() const{ return m_invocationsTimeoutInSeconds; }

    /**
     * <p>The timeout value in seconds for an invocation request. The default value is
     * 600.</p>
     */
    inline bool InvocationsTimeoutInSecondsHasBeenSet() const { return m_invocationsTimeoutInSecondsHasBeenSet; }

    /**
     * <p>The timeout value in seconds for an invocation request. The default value is
     * 600.</p>
     */
    inline void SetInvocationsTimeoutInSeconds(int value) { m_invocationsTimeoutInSecondsHasBeenSet = true; m_invocationsTimeoutInSeconds = value; }

    /**
     * <p>The timeout value in seconds for an invocation request. The default value is
     * 600.</p>
     */
    inline ModelClientConfig& WithInvocationsTimeoutInSeconds(int value) { SetInvocationsTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum number of retries when invocation requests are failing. The
     * default value is 3.</p>
     */
    inline int GetInvocationsMaxRetries() const{ return m_invocationsMaxRetries; }

    /**
     * <p>The maximum number of retries when invocation requests are failing. The
     * default value is 3.</p>
     */
    inline bool InvocationsMaxRetriesHasBeenSet() const { return m_invocationsMaxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of retries when invocation requests are failing. The
     * default value is 3.</p>
     */
    inline void SetInvocationsMaxRetries(int value) { m_invocationsMaxRetriesHasBeenSet = true; m_invocationsMaxRetries = value; }

    /**
     * <p>The maximum number of retries when invocation requests are failing. The
     * default value is 3.</p>
     */
    inline ModelClientConfig& WithInvocationsMaxRetries(int value) { SetInvocationsMaxRetries(value); return *this;}

  private:

    int m_invocationsTimeoutInSeconds;
    bool m_invocationsTimeoutInSecondsHasBeenSet = false;

    int m_invocationsMaxRetries;
    bool m_invocationsMaxRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
