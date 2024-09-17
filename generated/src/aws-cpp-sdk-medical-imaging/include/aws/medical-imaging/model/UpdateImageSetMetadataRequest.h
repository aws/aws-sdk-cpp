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
    AWS_MEDICALIMAGING_API UpdateImageSetMetadataRequest();

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
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline UpdateImageSetMetadataRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline UpdateImageSetMetadataRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
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
    inline UpdateImageSetMetadataRequest& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}
    inline UpdateImageSetMetadataRequest& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataRequest& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest image set version identifier.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}
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
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline UpdateImageSetMetadataRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update image set metadata updates.</p>
     */
    inline const MetadataUpdates& GetUpdateImageSetMetadataUpdates() const{ return m_updateImageSetMetadataUpdates; }
    inline bool UpdateImageSetMetadataUpdatesHasBeenSet() const { return m_updateImageSetMetadataUpdatesHasBeenSet; }
    inline void SetUpdateImageSetMetadataUpdates(const MetadataUpdates& value) { m_updateImageSetMetadataUpdatesHasBeenSet = true; m_updateImageSetMetadataUpdates = value; }
    inline void SetUpdateImageSetMetadataUpdates(MetadataUpdates&& value) { m_updateImageSetMetadataUpdatesHasBeenSet = true; m_updateImageSetMetadataUpdates = std::move(value); }
    inline UpdateImageSetMetadataRequest& WithUpdateImageSetMetadataUpdates(const MetadataUpdates& value) { SetUpdateImageSetMetadataUpdates(value); return *this;}
    inline UpdateImageSetMetadataRequest& WithUpdateImageSetMetadataUpdates(MetadataUpdates&& value) { SetUpdateImageSetMetadataUpdates(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    MetadataUpdates m_updateImageSetMetadataUpdates;
    bool m_updateImageSetMetadataUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
