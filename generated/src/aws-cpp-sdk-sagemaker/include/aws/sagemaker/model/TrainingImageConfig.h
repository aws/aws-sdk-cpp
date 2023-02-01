/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingRepositoryAccessMode.h>
#include <aws/sagemaker/model/TrainingRepositoryAuthConfig.h>
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
   * <p>The configuration to use an image from a private Docker registry for a
   * training job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingImageConfig">AWS
   * API Reference</a></p>
   */
  class TrainingImageConfig
  {
  public:
    AWS_SAGEMAKER_API TrainingImageConfig();
    AWS_SAGEMAKER_API TrainingImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline const TrainingRepositoryAccessMode& GetTrainingRepositoryAccessMode() const{ return m_trainingRepositoryAccessMode; }

    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline bool TrainingRepositoryAccessModeHasBeenSet() const { return m_trainingRepositoryAccessModeHasBeenSet; }

    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline void SetTrainingRepositoryAccessMode(const TrainingRepositoryAccessMode& value) { m_trainingRepositoryAccessModeHasBeenSet = true; m_trainingRepositoryAccessMode = value; }

    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline void SetTrainingRepositoryAccessMode(TrainingRepositoryAccessMode&& value) { m_trainingRepositoryAccessModeHasBeenSet = true; m_trainingRepositoryAccessMode = std::move(value); }

    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline TrainingImageConfig& WithTrainingRepositoryAccessMode(const TrainingRepositoryAccessMode& value) { SetTrainingRepositoryAccessMode(value); return *this;}

    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline TrainingImageConfig& WithTrainingRepositoryAccessMode(TrainingRepositoryAccessMode&& value) { SetTrainingRepositoryAccessMode(std::move(value)); return *this;}


    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline const TrainingRepositoryAuthConfig& GetTrainingRepositoryAuthConfig() const{ return m_trainingRepositoryAuthConfig; }

    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline bool TrainingRepositoryAuthConfigHasBeenSet() const { return m_trainingRepositoryAuthConfigHasBeenSet; }

    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline void SetTrainingRepositoryAuthConfig(const TrainingRepositoryAuthConfig& value) { m_trainingRepositoryAuthConfigHasBeenSet = true; m_trainingRepositoryAuthConfig = value; }

    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline void SetTrainingRepositoryAuthConfig(TrainingRepositoryAuthConfig&& value) { m_trainingRepositoryAuthConfigHasBeenSet = true; m_trainingRepositoryAuthConfig = std::move(value); }

    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline TrainingImageConfig& WithTrainingRepositoryAuthConfig(const TrainingRepositoryAuthConfig& value) { SetTrainingRepositoryAuthConfig(value); return *this;}

    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline TrainingImageConfig& WithTrainingRepositoryAuthConfig(TrainingRepositoryAuthConfig&& value) { SetTrainingRepositoryAuthConfig(std::move(value)); return *this;}

  private:

    TrainingRepositoryAccessMode m_trainingRepositoryAccessMode;
    bool m_trainingRepositoryAccessModeHasBeenSet = false;

    TrainingRepositoryAuthConfig m_trainingRepositoryAuthConfig;
    bool m_trainingRepositoryAuthConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
