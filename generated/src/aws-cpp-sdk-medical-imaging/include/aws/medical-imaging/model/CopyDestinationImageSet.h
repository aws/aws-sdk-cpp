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
   * <p>Copy the destination image set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopyDestinationImageSet">AWS
   * API Reference</a></p>
   */
  class CopyDestinationImageSet
  {
  public:
    AWS_MEDICALIMAGING_API CopyDestinationImageSet() = default;
    AWS_MEDICALIMAGING_API CopyDestinationImageSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopyDestinationImageSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline const Aws::String& GetImageSetId() const { return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    template<typename ImageSetIdT = Aws::String>
    void SetImageSetId(ImageSetIdT&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::forward<ImageSetIdT>(value); }
    template<typename ImageSetIdT = Aws::String>
    CopyDestinationImageSet& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const { return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    template<typename LatestVersionIdT = Aws::String>
    void SetLatestVersionId(LatestVersionIdT&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::forward<LatestVersionIdT>(value); }
    template<typename LatestVersionIdT = Aws::String>
    CopyDestinationImageSet& WithLatestVersionId(LatestVersionIdT&& value) { SetLatestVersionId(std::forward<LatestVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
