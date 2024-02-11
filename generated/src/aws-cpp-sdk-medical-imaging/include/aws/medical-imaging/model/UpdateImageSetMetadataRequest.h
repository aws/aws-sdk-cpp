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


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }

    /**
     * <p>The image set identifier.</p>
     */
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The latest image set version identifier.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}

    /**
     * <p>The latest image set version identifier.</p>
     */
    inline UpdateImageSetMetadataRequest& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}


    /**
     * <p>Update image set metadata updates.</p>
     */
    inline const MetadataUpdates& GetUpdateImageSetMetadataUpdates() const{ return m_updateImageSetMetadataUpdates; }

    /**
     * <p>Update image set metadata updates.</p>
     */
    inline bool UpdateImageSetMetadataUpdatesHasBeenSet() const { return m_updateImageSetMetadataUpdatesHasBeenSet; }

    /**
     * <p>Update image set metadata updates.</p>
     */
    inline void SetUpdateImageSetMetadataUpdates(const MetadataUpdates& value) { m_updateImageSetMetadataUpdatesHasBeenSet = true; m_updateImageSetMetadataUpdates = value; }

    /**
     * <p>Update image set metadata updates.</p>
     */
    inline void SetUpdateImageSetMetadataUpdates(MetadataUpdates&& value) { m_updateImageSetMetadataUpdatesHasBeenSet = true; m_updateImageSetMetadataUpdates = std::move(value); }

    /**
     * <p>Update image set metadata updates.</p>
     */
    inline UpdateImageSetMetadataRequest& WithUpdateImageSetMetadataUpdates(const MetadataUpdates& value) { SetUpdateImageSetMetadataUpdates(value); return *this;}

    /**
     * <p>Update image set metadata updates.</p>
     */
    inline UpdateImageSetMetadataRequest& WithUpdateImageSetMetadataUpdates(MetadataUpdates&& value) { SetUpdateImageSetMetadataUpdates(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    MetadataUpdates m_updateImageSetMetadataUpdates;
    bool m_updateImageSetMetadataUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
