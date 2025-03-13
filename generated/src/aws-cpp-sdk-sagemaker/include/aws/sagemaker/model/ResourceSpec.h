/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppInstanceType.h>
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
   * <p>Specifies the ARN's of a SageMaker AI image and SageMaker AI image version,
   * and the instance type that the version runs on.</p>  <p>When both
   * <code>SageMakerImageVersionArn</code> and <code>SageMakerImageArn</code> are
   * passed, <code>SageMakerImageVersionArn</code> is used. Any updates to
   * <code>SageMakerImageArn</code> will not take effect if
   * <code>SageMakerImageVersionArn</code> already exists in the
   * <code>ResourceSpec</code> because <code>SageMakerImageVersionArn</code> always
   * takes precedence. To clear the value set for
   * <code>SageMakerImageVersionArn</code>, pass <code>None</code> as the value.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceSpec">AWS
   * API Reference</a></p>
   */
  class ResourceSpec
  {
  public:
    AWS_SAGEMAKER_API ResourceSpec() = default;
    AWS_SAGEMAKER_API ResourceSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SageMaker AI image that the image version belongs to.</p>
     */
    inline const Aws::String& GetSageMakerImageArn() const { return m_sageMakerImageArn; }
    inline bool SageMakerImageArnHasBeenSet() const { return m_sageMakerImageArnHasBeenSet; }
    template<typename SageMakerImageArnT = Aws::String>
    void SetSageMakerImageArn(SageMakerImageArnT&& value) { m_sageMakerImageArnHasBeenSet = true; m_sageMakerImageArn = std::forward<SageMakerImageArnT>(value); }
    template<typename SageMakerImageArnT = Aws::String>
    ResourceSpec& WithSageMakerImageArn(SageMakerImageArnT&& value) { SetSageMakerImageArn(std::forward<SageMakerImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image version created on the instance. To clear the value set
     * for <code>SageMakerImageVersionArn</code>, pass <code>None</code> as the
     * value.</p>
     */
    inline const Aws::String& GetSageMakerImageVersionArn() const { return m_sageMakerImageVersionArn; }
    inline bool SageMakerImageVersionArnHasBeenSet() const { return m_sageMakerImageVersionArnHasBeenSet; }
    template<typename SageMakerImageVersionArnT = Aws::String>
    void SetSageMakerImageVersionArn(SageMakerImageVersionArnT&& value) { m_sageMakerImageVersionArnHasBeenSet = true; m_sageMakerImageVersionArn = std::forward<SageMakerImageVersionArnT>(value); }
    template<typename SageMakerImageVersionArnT = Aws::String>
    ResourceSpec& WithSageMakerImageVersionArn(SageMakerImageVersionArnT&& value) { SetSageMakerImageVersionArn(std::forward<SageMakerImageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SageMakerImageVersionAlias of the image to launch with. This value is in
     * SemVer 2.0.0 versioning format.</p>
     */
    inline const Aws::String& GetSageMakerImageVersionAlias() const { return m_sageMakerImageVersionAlias; }
    inline bool SageMakerImageVersionAliasHasBeenSet() const { return m_sageMakerImageVersionAliasHasBeenSet; }
    template<typename SageMakerImageVersionAliasT = Aws::String>
    void SetSageMakerImageVersionAlias(SageMakerImageVersionAliasT&& value) { m_sageMakerImageVersionAliasHasBeenSet = true; m_sageMakerImageVersionAlias = std::forward<SageMakerImageVersionAliasT>(value); }
    template<typename SageMakerImageVersionAliasT = Aws::String>
    ResourceSpec& WithSageMakerImageVersionAlias(SageMakerImageVersionAliasT&& value) { SetSageMakerImageVersionAlias(std::forward<SageMakerImageVersionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type that the image version runs on.</p>  <p>
     * <b>JupyterServer apps</b> only support the <code>system</code> value.</p> <p>For
     * <b>KernelGateway apps</b>, the <code>system</code> value is translated to
     * <code>ml.t3.medium</code>. KernelGateway apps also support all other values for
     * available instance types.</p> 
     */
    inline AppInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(AppInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ResourceSpec& WithInstanceType(AppInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration attached to
     * the Resource.</p>
     */
    inline const Aws::String& GetLifecycleConfigArn() const { return m_lifecycleConfigArn; }
    inline bool LifecycleConfigArnHasBeenSet() const { return m_lifecycleConfigArnHasBeenSet; }
    template<typename LifecycleConfigArnT = Aws::String>
    void SetLifecycleConfigArn(LifecycleConfigArnT&& value) { m_lifecycleConfigArnHasBeenSet = true; m_lifecycleConfigArn = std::forward<LifecycleConfigArnT>(value); }
    template<typename LifecycleConfigArnT = Aws::String>
    ResourceSpec& WithLifecycleConfigArn(LifecycleConfigArnT&& value) { SetLifecycleConfigArn(std::forward<LifecycleConfigArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sageMakerImageArn;
    bool m_sageMakerImageArnHasBeenSet = false;

    Aws::String m_sageMakerImageVersionArn;
    bool m_sageMakerImageVersionArnHasBeenSet = false;

    Aws::String m_sageMakerImageVersionAlias;
    bool m_sageMakerImageVersionAliasHasBeenSet = false;

    AppInstanceType m_instanceType{AppInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_lifecycleConfigArn;
    bool m_lifecycleConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
