/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Information about the container image used for a task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImageDetails">AWS
   * API Reference</a></p>
   */
  class ImageDetails
  {
  public:
    AWS_OMICS_API ImageDetails() = default;
    AWS_OMICS_API ImageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the container image.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ImageDetails& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image digest. If the image URI was transformed, this will be
     * the digest of the container image referenced by the transformed URI.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ImageDetails& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of the source registry. If the URI is from a third-party registry, Amazon
     * Web Services HealthOmics transforms the URI to the corresponding ECR path, using
     * the pull-through cache mapping rules.</p>
     */
    inline const Aws::String& GetSourceImage() const { return m_sourceImage; }
    inline bool SourceImageHasBeenSet() const { return m_sourceImageHasBeenSet; }
    template<typename SourceImageT = Aws::String>
    void SetSourceImage(SourceImageT&& value) { m_sourceImageHasBeenSet = true; m_sourceImage = std::forward<SourceImageT>(value); }
    template<typename SourceImageT = Aws::String>
    ImageDetails& WithSourceImage(SourceImageT&& value) { SetSourceImage(std::forward<SourceImageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_sourceImage;
    bool m_sourceImageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
