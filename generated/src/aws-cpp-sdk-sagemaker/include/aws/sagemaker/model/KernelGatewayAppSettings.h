/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomImage.h>
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
   * <p>The KernelGateway app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KernelGatewayAppSettings">AWS
   * API Reference</a></p>
   */
  class KernelGatewayAppSettings
  {
  public:
    AWS_SAGEMAKER_API KernelGatewayAppSettings() = default;
    AWS_SAGEMAKER_API KernelGatewayAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KernelGatewayAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker AI image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker AI Studio UI does not use the default instance type value set here.
     * The default instance type set here is used when Apps are created using the CLI
     * or CloudFormation and the instance type parameter value is not passed.</p>
     * 
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    KernelGatewayAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom SageMaker AI images that are configured to run as a
     * KernelGateway app.</p> <p>The maximum number of custom images are as
     * follows.</p> <ul> <li> <p>On a domain level: 200</p> </li> <li> <p>On a space
     * level: 5</p> </li> <li> <p>On a user profile level: 5</p> </li> </ul>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const { return m_customImages; }
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    void SetCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages = std::forward<CustomImagesT>(value); }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    KernelGatewayAppSettings& WithCustomImages(CustomImagesT&& value) { SetCustomImages(std::forward<CustomImagesT>(value)); return *this;}
    template<typename CustomImagesT = CustomImage>
    KernelGatewayAppSettings& AddCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages.emplace_back(std::forward<CustomImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const { return m_lifecycleConfigArns; }
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    void SetLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::forward<LifecycleConfigArnsT>(value); }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    KernelGatewayAppSettings& WithLifecycleConfigArns(LifecycleConfigArnsT&& value) { SetLifecycleConfigArns(std::forward<LifecycleConfigArnsT>(value)); return *this;}
    template<typename LifecycleConfigArnsT = Aws::String>
    KernelGatewayAppSettings& AddLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.emplace_back(std::forward<LifecycleConfigArnsT>(value)); return *this; }
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
