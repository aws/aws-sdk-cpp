/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelInfrastructureConfig.h>
#include <aws/sagemaker/model/ModelVariantStatus.h>
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
   * <p>Summary of the deployment configuration of a model.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelVariantConfigSummary">AWS
   * API Reference</a></p>
   */
  class ModelVariantConfigSummary
  {
  public:
    AWS_SAGEMAKER_API ModelVariantConfigSummary();
    AWS_SAGEMAKER_API ModelVariantConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelVariantConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfigSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfigSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfigSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the variant.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfigSummary& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfigSummary& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfigSummary& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline const ModelInfrastructureConfig& GetInfrastructureConfig() const{ return m_infrastructureConfig; }

    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline bool InfrastructureConfigHasBeenSet() const { return m_infrastructureConfigHasBeenSet; }

    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline void SetInfrastructureConfig(const ModelInfrastructureConfig& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = value; }

    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline void SetInfrastructureConfig(ModelInfrastructureConfig&& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = std::move(value); }

    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline ModelVariantConfigSummary& WithInfrastructureConfig(const ModelInfrastructureConfig& value) { SetInfrastructureConfig(value); return *this;}

    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline ModelVariantConfigSummary& WithInfrastructureConfig(ModelInfrastructureConfig&& value) { SetInfrastructureConfig(std::move(value)); return *this;}


    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline const ModelVariantStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline void SetStatus(const ModelVariantStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline void SetStatus(ModelVariantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline ModelVariantConfigSummary& WithStatus(const ModelVariantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline ModelVariantConfigSummary& WithStatus(ModelVariantStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ModelInfrastructureConfig m_infrastructureConfig;
    bool m_infrastructureConfigHasBeenSet = false;

    ModelVariantStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
