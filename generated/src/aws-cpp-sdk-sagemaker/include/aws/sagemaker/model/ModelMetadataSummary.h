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


    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline ModelMetadataSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline ModelMetadataSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The machine learning domain of the model.</p>
     */
    inline ModelMetadataSummary& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline ModelMetadataSummary& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline ModelMetadataSummary& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p>The machine learning framework of the model.</p>
     */
    inline ModelMetadataSummary& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p>The machine learning task of the model.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline ModelMetadataSummary& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline ModelMetadataSummary& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The machine learning task of the model.</p>
     */
    inline ModelMetadataSummary& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline ModelMetadataSummary& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline ModelMetadataSummary& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline ModelMetadataSummary& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The framework version of the model.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The framework version of the model.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The framework version of the model.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The framework version of the model.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The framework version of the model.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The framework version of the model.</p>
     */
    inline ModelMetadataSummary& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The framework version of the model.</p>
     */
    inline ModelMetadataSummary& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The framework version of the model.</p>
     */
    inline ModelMetadataSummary& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}

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
