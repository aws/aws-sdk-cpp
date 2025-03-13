/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EnvironmentParameter.h>
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
   * <p>Defines the model configuration. Includes the specification name and
   * environment parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelConfiguration
  {
  public:
    AWS_SAGEMAKER_API ModelConfiguration() = default;
    AWS_SAGEMAKER_API ModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const { return m_inferenceSpecificationName; }
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }
    template<typename InferenceSpecificationNameT = Aws::String>
    void SetInferenceSpecificationName(InferenceSpecificationNameT&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::forward<InferenceSpecificationNameT>(value); }
    template<typename InferenceSpecificationNameT = Aws::String>
    ModelConfiguration& WithInferenceSpecificationName(InferenceSpecificationNameT&& value) { SetInferenceSpecificationName(std::forward<InferenceSpecificationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the environment parameters that includes key, value types, and
     * values.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetEnvironmentParameters() const { return m_environmentParameters; }
    inline bool EnvironmentParametersHasBeenSet() const { return m_environmentParametersHasBeenSet; }
    template<typename EnvironmentParametersT = Aws::Vector<EnvironmentParameter>>
    void SetEnvironmentParameters(EnvironmentParametersT&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = std::forward<EnvironmentParametersT>(value); }
    template<typename EnvironmentParametersT = Aws::Vector<EnvironmentParameter>>
    ModelConfiguration& WithEnvironmentParameters(EnvironmentParametersT&& value) { SetEnvironmentParameters(std::forward<EnvironmentParametersT>(value)); return *this;}
    template<typename EnvironmentParametersT = EnvironmentParameter>
    ModelConfiguration& AddEnvironmentParameters(EnvironmentParametersT&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.emplace_back(std::forward<EnvironmentParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the compilation job used to create the recommended model
     * artifacts.</p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    ModelConfiguration& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_environmentParameters;
    bool m_environmentParametersHasBeenSet = false;

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
