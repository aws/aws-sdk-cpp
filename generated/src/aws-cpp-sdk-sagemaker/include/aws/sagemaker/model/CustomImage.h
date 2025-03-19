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
   * <p>A custom SageMaker AI image. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
   * your own SageMaker AI image</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomImage">AWS
   * API Reference</a></p>
   */
  class CustomImage
  {
  public:
    AWS_SAGEMAKER_API CustomImage() = default;
    AWS_SAGEMAKER_API CustomImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    CustomImage& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the CustomImage.</p>
     */
    inline int GetImageVersionNumber() const { return m_imageVersionNumber; }
    inline bool ImageVersionNumberHasBeenSet() const { return m_imageVersionNumberHasBeenSet; }
    inline void SetImageVersionNumber(int value) { m_imageVersionNumberHasBeenSet = true; m_imageVersionNumber = value; }
    inline CustomImage& WithImageVersionNumber(int value) { SetImageVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    CustomImage& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    int m_imageVersionNumber{0};
    bool m_imageVersionNumberHasBeenSet = false;

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
