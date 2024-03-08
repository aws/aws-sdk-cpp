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
   * <p>Details about the runtime settings for the model that is deployed with the
   * inference component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentRuntimeConfigSummary">AWS
   * API Reference</a></p>
   */
  class InferenceComponentRuntimeConfigSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary();
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of runtime copies of the model container that you requested to
     * deploy with the inference component.</p>
     */
    inline int GetDesiredCopyCount() const{ return m_desiredCopyCount; }

    /**
     * <p>The number of runtime copies of the model container that you requested to
     * deploy with the inference component.</p>
     */
    inline bool DesiredCopyCountHasBeenSet() const { return m_desiredCopyCountHasBeenSet; }

    /**
     * <p>The number of runtime copies of the model container that you requested to
     * deploy with the inference component.</p>
     */
    inline void SetDesiredCopyCount(int value) { m_desiredCopyCountHasBeenSet = true; m_desiredCopyCount = value; }

    /**
     * <p>The number of runtime copies of the model container that you requested to
     * deploy with the inference component.</p>
     */
    inline InferenceComponentRuntimeConfigSummary& WithDesiredCopyCount(int value) { SetDesiredCopyCount(value); return *this;}


    /**
     * <p>The number of runtime copies of the model container that are currently
     * deployed.</p>
     */
    inline int GetCurrentCopyCount() const{ return m_currentCopyCount; }

    /**
     * <p>The number of runtime copies of the model container that are currently
     * deployed.</p>
     */
    inline bool CurrentCopyCountHasBeenSet() const { return m_currentCopyCountHasBeenSet; }

    /**
     * <p>The number of runtime copies of the model container that are currently
     * deployed.</p>
     */
    inline void SetCurrentCopyCount(int value) { m_currentCopyCountHasBeenSet = true; m_currentCopyCount = value; }

    /**
     * <p>The number of runtime copies of the model container that are currently
     * deployed.</p>
     */
    inline InferenceComponentRuntimeConfigSummary& WithCurrentCopyCount(int value) { SetCurrentCopyCount(value); return *this;}

  private:

    int m_desiredCopyCount;
    bool m_desiredCopyCountHasBeenSet = false;

    int m_currentCopyCount;
    bool m_currentCopyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
