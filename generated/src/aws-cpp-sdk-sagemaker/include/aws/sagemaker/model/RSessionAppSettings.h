/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomImage.h>
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
   * <p>A collection of settings that apply to an <code>RSessionGateway</code>
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RSessionAppSettings">AWS
   * API Reference</a></p>
   */
  class RSessionAppSettings
  {
  public:
    AWS_SAGEMAKER_API RSessionAppSettings() = default;
    AWS_SAGEMAKER_API RSessionAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RSessionAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    RSessionAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom SageMaker AI images that are configured to run as a RSession
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const { return m_customImages; }
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    void SetCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages = std::forward<CustomImagesT>(value); }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    RSessionAppSettings& WithCustomImages(CustomImagesT&& value) { SetCustomImages(std::forward<CustomImagesT>(value)); return *this;}
    template<typename CustomImagesT = CustomImage>
    RSessionAppSettings& AddCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages.emplace_back(std::forward<CustomImagesT>(value)); return *this; }
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
