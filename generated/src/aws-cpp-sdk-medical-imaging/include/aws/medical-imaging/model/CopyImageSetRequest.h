/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/CopyImageSetInformation.h>
#include <utility>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class CopyImageSetRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API CopyImageSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyImageSet"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;


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
    inline CopyImageSetRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline CopyImageSetRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline CopyImageSetRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The source image set identifier.</p>
     */
    inline const Aws::String& GetSourceImageSetId() const{ return m_sourceImageSetId; }

    /**
     * <p>The source image set identifier.</p>
     */
    inline bool SourceImageSetIdHasBeenSet() const { return m_sourceImageSetIdHasBeenSet; }

    /**
     * <p>The source image set identifier.</p>
     */
    inline void SetSourceImageSetId(const Aws::String& value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId = value; }

    /**
     * <p>The source image set identifier.</p>
     */
    inline void SetSourceImageSetId(Aws::String&& value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId = std::move(value); }

    /**
     * <p>The source image set identifier.</p>
     */
    inline void SetSourceImageSetId(const char* value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId.assign(value); }

    /**
     * <p>The source image set identifier.</p>
     */
    inline CopyImageSetRequest& WithSourceImageSetId(const Aws::String& value) { SetSourceImageSetId(value); return *this;}

    /**
     * <p>The source image set identifier.</p>
     */
    inline CopyImageSetRequest& WithSourceImageSetId(Aws::String&& value) { SetSourceImageSetId(std::move(value)); return *this;}

    /**
     * <p>The source image set identifier.</p>
     */
    inline CopyImageSetRequest& WithSourceImageSetId(const char* value) { SetSourceImageSetId(value); return *this;}


    /**
     * <p>Copy image set information.</p>
     */
    inline const CopyImageSetInformation& GetCopyImageSetInformation() const{ return m_copyImageSetInformation; }

    /**
     * <p>Copy image set information.</p>
     */
    inline bool CopyImageSetInformationHasBeenSet() const { return m_copyImageSetInformationHasBeenSet; }

    /**
     * <p>Copy image set information.</p>
     */
    inline void SetCopyImageSetInformation(const CopyImageSetInformation& value) { m_copyImageSetInformationHasBeenSet = true; m_copyImageSetInformation = value; }

    /**
     * <p>Copy image set information.</p>
     */
    inline void SetCopyImageSetInformation(CopyImageSetInformation&& value) { m_copyImageSetInformationHasBeenSet = true; m_copyImageSetInformation = std::move(value); }

    /**
     * <p>Copy image set information.</p>
     */
    inline CopyImageSetRequest& WithCopyImageSetInformation(const CopyImageSetInformation& value) { SetCopyImageSetInformation(value); return *this;}

    /**
     * <p>Copy image set information.</p>
     */
    inline CopyImageSetRequest& WithCopyImageSetInformation(CopyImageSetInformation&& value) { SetCopyImageSetInformation(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_sourceImageSetId;
    bool m_sourceImageSetIdHasBeenSet = false;

    CopyImageSetInformation m_copyImageSetInformation;
    bool m_copyImageSetInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
