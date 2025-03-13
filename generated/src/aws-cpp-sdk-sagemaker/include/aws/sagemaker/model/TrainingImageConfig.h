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
    AWS_SAGEMAKER_API TrainingImageConfig() = default;
    AWS_SAGEMAKER_API TrainingImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method that your training job will use to gain access to the images in
     * your private Docker registry. For access to an image in a private Docker
     * registry, set to <code>Vpc</code>.</p>
     */
    inline TrainingRepositoryAccessMode GetTrainingRepositoryAccessMode() const { return m_trainingRepositoryAccessMode; }
    inline bool TrainingRepositoryAccessModeHasBeenSet() const { return m_trainingRepositoryAccessModeHasBeenSet; }
    inline void SetTrainingRepositoryAccessMode(TrainingRepositoryAccessMode value) { m_trainingRepositoryAccessModeHasBeenSet = true; m_trainingRepositoryAccessMode = value; }
    inline TrainingImageConfig& WithTrainingRepositoryAccessMode(TrainingRepositoryAccessMode value) { SetTrainingRepositoryAccessMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing authentication information for a private Docker registry
     * containing your training images.</p>
     */
    inline const TrainingRepositoryAuthConfig& GetTrainingRepositoryAuthConfig() const { return m_trainingRepositoryAuthConfig; }
    inline bool TrainingRepositoryAuthConfigHasBeenSet() const { return m_trainingRepositoryAuthConfigHasBeenSet; }
    template<typename TrainingRepositoryAuthConfigT = TrainingRepositoryAuthConfig>
    void SetTrainingRepositoryAuthConfig(TrainingRepositoryAuthConfigT&& value) { m_trainingRepositoryAuthConfigHasBeenSet = true; m_trainingRepositoryAuthConfig = std::forward<TrainingRepositoryAuthConfigT>(value); }
    template<typename TrainingRepositoryAuthConfigT = TrainingRepositoryAuthConfig>
    TrainingImageConfig& WithTrainingRepositoryAuthConfig(TrainingRepositoryAuthConfigT&& value) { SetTrainingRepositoryAuthConfig(std::forward<TrainingRepositoryAuthConfigT>(value)); return *this;}
    ///@}
  private:

    TrainingRepositoryAccessMode m_trainingRepositoryAccessMode{TrainingRepositoryAccessMode::NOT_SET};
    bool m_trainingRepositoryAccessModeHasBeenSet = false;

    TrainingRepositoryAuthConfig m_trainingRepositoryAuthConfig;
    bool m_trainingRepositoryAuthConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
