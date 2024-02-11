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
    AWS_SAGEMAKER_API ModelRegisterSettings();
    AWS_SAGEMAKER_API ModelRegisterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelRegisterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline ModelRegisterSettings& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether the integration to the model registry is enabled or
     * disabled in the Canvas application.</p>
     */
    inline ModelRegisterSettings& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline const Aws::String& GetCrossAccountModelRegisterRoleArn() const{ return m_crossAccountModelRegisterRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline bool CrossAccountModelRegisterRoleArnHasBeenSet() const { return m_crossAccountModelRegisterRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline void SetCrossAccountModelRegisterRoleArn(const Aws::String& value) { m_crossAccountModelRegisterRoleArnHasBeenSet = true; m_crossAccountModelRegisterRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline void SetCrossAccountModelRegisterRoleArn(Aws::String&& value) { m_crossAccountModelRegisterRoleArnHasBeenSet = true; m_crossAccountModelRegisterRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline void SetCrossAccountModelRegisterRoleArn(const char* value) { m_crossAccountModelRegisterRoleArnHasBeenSet = true; m_crossAccountModelRegisterRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline ModelRegisterSettings& WithCrossAccountModelRegisterRoleArn(const Aws::String& value) { SetCrossAccountModelRegisterRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline ModelRegisterSettings& WithCrossAccountModelRegisterRoleArn(Aws::String&& value) { SetCrossAccountModelRegisterRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker model registry account.
     * Required only to register model versions created by a different SageMaker Canvas
     * Amazon Web Services account than the Amazon Web Services account in which
     * SageMaker model registry is set up.</p>
     */
    inline ModelRegisterSettings& WithCrossAccountModelRegisterRoleArn(const char* value) { SetCrossAccountModelRegisterRoleArn(value); return *this;}

  private:

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_crossAccountModelRegisterRoleArn;
    bool m_crossAccountModelRegisterRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
