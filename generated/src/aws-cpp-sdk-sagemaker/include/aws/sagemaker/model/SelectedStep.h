/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A step selected to run in selective execution mode.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SelectedStep">AWS
   * API Reference</a></p>
   */
  class SelectedStep
  {
  public:
    AWS_SAGEMAKER_API SelectedStep();
    AWS_SAGEMAKER_API SelectedStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SelectedStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline SelectedStep& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline SelectedStep& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline step.</p>
     */
    inline SelectedStep& WithStepName(const char* value) { SetStepName(value); return *this;}

  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
