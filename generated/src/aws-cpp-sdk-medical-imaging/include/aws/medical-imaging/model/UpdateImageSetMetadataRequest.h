/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/MetadataUpdates.h>
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
  class UpdateImageSetMetadataRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API UpdateImageSetMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImageSetMetadata"; }

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
    UpdateImageSetMetadataRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
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
    UpdateImageSetMetadataRequest& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest image set version identifier.</p>
     */
    inline const Aws::String& GetLatestVersionId() const { return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    template<typename LatestVersionIdT = Aws::String>
    void SetLatestVersionId(LatestVersionIdT&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::forward<LatestVersionIdT>(value); }
    template<typename LatestVersionIdT = Aws::String>
    UpdateImageSetMetadataRequest& WithLatestVersionId(LatestVersionIdT&& value) { SetLatestVersionId(std::forward<LatestVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Setting this flag will force the <code>UpdateImageSetMetadata</code>
     * operation for the following attributes:</p> <ul> <li> <p>
     * <code>Tag.StudyInstanceUID</code>, <code>Tag.SeriesInstanceUID</code>,
     * <code>Tag.SOPInstanceUID</code>, and <code>Tag.StudyID</code> </p> </li> <li>
     * <p>Adding, removing, or updating private tags for an individual SOP Instance</p>
     * </li> </ul>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline UpdateImageSetMetadataRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update image set metadata updates.</p>
     */
    inline const MetadataUpdates& GetUpdateImageSetMetadataUpdates() const { return m_updateImageSetMetadataUpdates; }
    inline bool UpdateImageSetMetadataUpdatesHasBeenSet() const { return m_updateImageSetMetadataUpdatesHasBeenSet; }
    template<typename UpdateImageSetMetadataUpdatesT = MetadataUpdates>
    void SetUpdateImageSetMetadataUpdates(UpdateImageSetMetadataUpdatesT&& value) { m_updateImageSetMetadataUpdatesHasBeenSet = true; m_updateImageSetMetadataUpdates = std::forward<UpdateImageSetMetadataUpdatesT>(value); }
    template<typename UpdateImageSetMetadataUpdatesT = MetadataUpdates>
    UpdateImageSetMetadataRequest& WithUpdateImageSetMetadataUpdates(UpdateImageSetMetadataUpdatesT&& value) { SetUpdateImageSetMetadataUpdates(std::forward<UpdateImageSetMetadataUpdatesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;

    MetadataUpdates m_updateImageSetMetadataUpdates;
    bool m_updateImageSetMetadataUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
