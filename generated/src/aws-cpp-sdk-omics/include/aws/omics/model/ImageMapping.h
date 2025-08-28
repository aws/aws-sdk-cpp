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
   * <p>Specifies image mappings that workflow tasks can use. For example, you can
   * replace all the task references of a public image to use an equivalent image in
   * your private ECR repository. You can use image mappings with upstream registries
   * that don't support pull through cache. You need to manually synchronize the
   * upstream registry with your private repository. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImageMapping">AWS
   * API Reference</a></p>
   */
  class ImageMapping
  {
  public:
    AWS_OMICS_API ImageMapping() = default;
    AWS_OMICS_API ImageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the URI of the source image in the upstream registry.</p>
     */
    inline const Aws::String& GetSourceImage() const { return m_sourceImage; }
    inline bool SourceImageHasBeenSet() const { return m_sourceImageHasBeenSet; }
    template<typename SourceImageT = Aws::String>
    void SetSourceImage(SourceImageT&& value) { m_sourceImageHasBeenSet = true; m_sourceImage = std::forward<SourceImageT>(value); }
    template<typename SourceImageT = Aws::String>
    ImageMapping& WithSourceImage(SourceImageT&& value) { SetSourceImage(std::forward<SourceImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the URI of the corresponding image in the private ECR registry.</p>
     */
    inline const Aws::String& GetDestinationImage() const { return m_destinationImage; }
    inline bool DestinationImageHasBeenSet() const { return m_destinationImageHasBeenSet; }
    template<typename DestinationImageT = Aws::String>
    void SetDestinationImage(DestinationImageT&& value) { m_destinationImageHasBeenSet = true; m_destinationImage = std::forward<DestinationImageT>(value); }
    template<typename DestinationImageT = Aws::String>
    ImageMapping& WithDestinationImage(DestinationImageT&& value) { SetDestinationImage(std::forward<DestinationImageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceImage;
    bool m_sourceImageHasBeenSet = false;

    Aws::String m_destinationImage;
    bool m_destinationImageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
