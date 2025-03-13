/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/ImageFrameInformation.h>
#include <utility>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class GetImageFrameRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API GetImageFrameRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImageFrame"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    GetImageFrameRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const { return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    template<typename ImageSetIdT = Aws::String>
    void SetImageSetId(ImageSetIdT&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::forward<ImageSetIdT>(value); }
    template<typename ImageSetIdT = Aws::String>
    GetImageFrameRequest& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the image frame (pixel data) identifier.</p>
     */
    inline const ImageFrameInformation& GetImageFrameInformation() const { return m_imageFrameInformation; }
    inline bool ImageFrameInformationHasBeenSet() const { return m_imageFrameInformationHasBeenSet; }
    template<typename ImageFrameInformationT = ImageFrameInformation>
    void SetImageFrameInformation(ImageFrameInformationT&& value) { m_imageFrameInformationHasBeenSet = true; m_imageFrameInformation = std::forward<ImageFrameInformationT>(value); }
    template<typename ImageFrameInformationT = ImageFrameInformation>
    GetImageFrameRequest& WithImageFrameInformation(ImageFrameInformationT&& value) { SetImageFrameInformation(std::forward<ImageFrameInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    ImageFrameInformation m_imageFrameInformation;
    bool m_imageFrameInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
