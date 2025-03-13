/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class GetImageSetRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API GetImageSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImageSet"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;

    AWS_MEDICALIMAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    GetImageSetRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
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
    GetImageSetRequest& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set version identifier.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetImageSetRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
