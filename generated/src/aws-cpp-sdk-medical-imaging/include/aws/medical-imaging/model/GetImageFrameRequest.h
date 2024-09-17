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
    AWS_MEDICALIMAGING_API GetImageFrameRequest();

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
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline GetImageFrameRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline GetImageFrameRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline GetImageFrameRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }
    inline GetImageFrameRequest& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}
    inline GetImageFrameRequest& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}
    inline GetImageFrameRequest& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the image frame (pixel data) identifier.</p>
     */
    inline const ImageFrameInformation& GetImageFrameInformation() const{ return m_imageFrameInformation; }
    inline bool ImageFrameInformationHasBeenSet() const { return m_imageFrameInformationHasBeenSet; }
    inline void SetImageFrameInformation(const ImageFrameInformation& value) { m_imageFrameInformationHasBeenSet = true; m_imageFrameInformation = value; }
    inline void SetImageFrameInformation(ImageFrameInformation&& value) { m_imageFrameInformationHasBeenSet = true; m_imageFrameInformation = std::move(value); }
    inline GetImageFrameRequest& WithImageFrameInformation(const ImageFrameInformation& value) { SetImageFrameInformation(value); return *this;}
    inline GetImageFrameRequest& WithImageFrameInformation(ImageFrameInformation&& value) { SetImageFrameInformation(std::move(value)); return *this;}
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
