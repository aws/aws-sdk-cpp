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
    AWS_SAGEMAKER_API ModelMetadataSummary();
    AWS_SAGEMAKER_API ModelMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ModelMetadataSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ModelMetadataSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ModelMetadataSummary& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }
    inline ModelMetadataSummary& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}
    inline ModelMetadataSummary& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}
    inline ModelMetadataSummary& WithFramework(const char* value) { SetFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task of the model.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline ModelMetadataSummary& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline ModelMetadataSummary& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline ModelMetadataSummary& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline ModelMetadataSummary& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline ModelMetadataSummary& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline ModelMetadataSummary& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework version of the model.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }
    inline ModelMetadataSummary& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}
    inline ModelMetadataSummary& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}
    inline ModelMetadataSummary& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}
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
