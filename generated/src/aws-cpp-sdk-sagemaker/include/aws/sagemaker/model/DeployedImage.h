/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Gets the Amazon EC2 Container Registry path of the docker image of the model
   * that is hosted in this <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ProductionVariant.html">ProductionVariant</a>.</p>
   * <p>If you used the <code>registry/repository[:tag]</code> form to specify the
   * image path of the primary container when you created the model hosted in this
   * <code>ProductionVariant</code>, the path resolves to a path of the form
   * <code>registry/repository[@digest]</code>. A digest is a hash value that
   * identifies a specific version of an image. For information about Amazon ECR
   * paths, see <a
   * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
   * an Image</a> in the <i>Amazon ECR User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeployedImage">AWS
   * API Reference</a></p>
   */
  class DeployedImage
  {
  public:
    AWS_SAGEMAKER_API DeployedImage() = default;
    AWS_SAGEMAKER_API DeployedImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeployedImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline const Aws::String& GetSpecifiedImage() const { return m_specifiedImage; }
    inline bool SpecifiedImageHasBeenSet() const { return m_specifiedImageHasBeenSet; }
    template<typename SpecifiedImageT = Aws::String>
    void SetSpecifiedImage(SpecifiedImageT&& value) { m_specifiedImageHasBeenSet = true; m_specifiedImage = std::forward<SpecifiedImageT>(value); }
    template<typename SpecifiedImageT = Aws::String>
    DeployedImage& WithSpecifiedImage(SpecifiedImageT&& value) { SetSpecifiedImage(std::forward<SpecifiedImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline const Aws::String& GetResolvedImage() const { return m_resolvedImage; }
    inline bool ResolvedImageHasBeenSet() const { return m_resolvedImageHasBeenSet; }
    template<typename ResolvedImageT = Aws::String>
    void SetResolvedImage(ResolvedImageT&& value) { m_resolvedImageHasBeenSet = true; m_resolvedImage = std::forward<ResolvedImageT>(value); }
    template<typename ResolvedImageT = Aws::String>
    DeployedImage& WithResolvedImage(ResolvedImageT&& value) { SetResolvedImage(std::forward<ResolvedImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline const Aws::Utils::DateTime& GetResolutionTime() const { return m_resolutionTime; }
    inline bool ResolutionTimeHasBeenSet() const { return m_resolutionTimeHasBeenSet; }
    template<typename ResolutionTimeT = Aws::Utils::DateTime>
    void SetResolutionTime(ResolutionTimeT&& value) { m_resolutionTimeHasBeenSet = true; m_resolutionTime = std::forward<ResolutionTimeT>(value); }
    template<typename ResolutionTimeT = Aws::Utils::DateTime>
    DeployedImage& WithResolutionTime(ResolutionTimeT&& value) { SetResolutionTime(std::forward<ResolutionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_specifiedImage;
    bool m_specifiedImageHasBeenSet = false;

    Aws::String m_resolvedImage;
    bool m_resolvedImageHasBeenSet = false;

    Aws::Utils::DateTime m_resolutionTime{};
    bool m_resolutionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
