/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Information about the image frame (pixel data) identifier.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ImageFrameInformation">AWS
   * API Reference</a></p>
   */
  class ImageFrameInformation
  {
  public:
    AWS_MEDICALIMAGING_API ImageFrameInformation() = default;
    AWS_MEDICALIMAGING_API ImageFrameInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API ImageFrameInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image frame (pixel data) identifier.</p>
     */
    inline const Aws::String& GetImageFrameId() const { return m_imageFrameId; }
    inline bool ImageFrameIdHasBeenSet() const { return m_imageFrameIdHasBeenSet; }
    template<typename ImageFrameIdT = Aws::String>
    void SetImageFrameId(ImageFrameIdT&& value) { m_imageFrameIdHasBeenSet = true; m_imageFrameId = std::forward<ImageFrameIdT>(value); }
    template<typename ImageFrameIdT = Aws::String>
    ImageFrameInformation& WithImageFrameId(ImageFrameIdT&& value) { SetImageFrameId(std::forward<ImageFrameIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageFrameId;
    bool m_imageFrameIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
