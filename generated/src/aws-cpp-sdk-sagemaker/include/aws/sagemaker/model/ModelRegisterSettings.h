/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>The model registry settings for the SageMaker Canvas
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelRegisterSettings">AWS
   * API Reference</a></p>
   */
  class ModelRegisterSettings
  {
  public:
    AWS_SAGEMAKER_API ModelRegisterSettings() = default;
    AWS_SAGEMAKER_API ModelRegisterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelRegisterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelRegisterSettings& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline const Aws::String& GetCrossAccountModelRegisterRoleArn() const { return m_crossAccountModelRegisterRoleArn; }
    inline bool CrossAccountModelRegisterRoleArnHasBeenSet() const { return m_crossAccountModelRegisterRoleArnHasBeenSet; }
    template<typename CrossAccountModelRegisterRoleArnT = Aws::String>
    void SetCrossAccountModelRegisterRoleArn(CrossAccountModelRegisterRoleArnT&& value) { m_crossAccountModelRegisterRoleArnHasBeenSet = true; m_crossAccountModelRegisterRoleArn = std::forward<CrossAccountModelRegisterRoleArnT>(value); }
    template<typename CrossAccountModelRegisterRoleArnT = Aws::String>
    ModelRegisterSettings& WithCrossAccountModelRegisterRoleArn(CrossAccountModelRegisterRoleArnT&& value) { SetCrossAccountModelRegisterRoleArn(std::forward<CrossAccountModelRegisterRoleArnT>(value)); return *this;}
    ///@}
  private:

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_crossAccountModelRegisterRoleArn;
    bool m_crossAccountModelRegisterRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
