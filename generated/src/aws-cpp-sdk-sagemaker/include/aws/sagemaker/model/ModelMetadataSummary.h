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
   * <p>A summary of the model metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelMetadataSummary">AWS
   * API Reference</a></p>
   */
  class ModelMetadataSummary
  {
  public:
    AWS_SAGEMAKER_API ModelMetadataSummary() = default;
    AWS_SAGEMAKER_API ModelMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ModelMetadataSummary& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    ModelMetadataSummary& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task of the model.</p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    ModelMetadataSummary& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    ModelMetadataSummary& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework version of the model.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const { return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    template<typename FrameworkVersionT = Aws::String>
    void SetFrameworkVersion(FrameworkVersionT&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::forward<FrameworkVersionT>(value); }
    template<typename FrameworkVersionT = Aws::String>
    ModelMetadataSummary& WithFrameworkVersion(FrameworkVersionT&& value) { SetFrameworkVersion(std::forward<FrameworkVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
