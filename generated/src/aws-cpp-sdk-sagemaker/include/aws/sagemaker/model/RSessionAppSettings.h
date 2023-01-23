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
    AWS_SAGEMAKER_API RSessionAppSettings();
    AWS_SAGEMAKER_API RSessionAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RSessionAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    
    inline RSessionAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    
    inline RSessionAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const{ return m_customImages; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline void SetCustomImages(const Aws::Vector<CustomImage>& value) { m_customImagesHasBeenSet = true; m_customImages = value; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline void SetCustomImages(Aws::Vector<CustomImage>&& value) { m_customImagesHasBeenSet = true; m_customImages = std::move(value); }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline RSessionAppSettings& WithCustomImages(const Aws::Vector<CustomImage>& value) { SetCustomImages(value); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline RSessionAppSettings& WithCustomImages(Aws::Vector<CustomImage>&& value) { SetCustomImages(std::move(value)); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline RSessionAppSettings& AddCustomImages(const CustomImage& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(value); return *this; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a RSession
     * app.</p>
     */
    inline RSessionAppSettings& AddCustomImages(CustomImage&& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(std::move(value)); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
