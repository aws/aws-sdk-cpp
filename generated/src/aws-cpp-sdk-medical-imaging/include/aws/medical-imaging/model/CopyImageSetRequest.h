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
    inline CopyImageSetRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline CopyImageSetRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline CopyImageSetRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source image set identifier.</p>
     */
    inline const Aws::String& GetSourceImageSetId() const{ return m_sourceImageSetId; }
    inline bool SourceImageSetIdHasBeenSet() const { return m_sourceImageSetIdHasBeenSet; }
    inline void SetSourceImageSetId(const Aws::String& value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId = value; }
    inline void SetSourceImageSetId(Aws::String&& value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId = std::move(value); }
    inline void SetSourceImageSetId(const char* value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId.assign(value); }
    inline CopyImageSetRequest& WithSourceImageSetId(const Aws::String& value) { SetSourceImageSetId(value); return *this;}
    inline CopyImageSetRequest& WithSourceImageSetId(Aws::String&& value) { SetSourceImageSetId(std::move(value)); return *this;}
    inline CopyImageSetRequest& WithSourceImageSetId(const char* value) { SetSourceImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy image set information.</p>
     */
    inline const CopyImageSetInformation& GetCopyImageSetInformation() const{ return m_copyImageSetInformation; }
    inline bool CopyImageSetInformationHasBeenSet() const { return m_copyImageSetInformationHasBeenSet; }
    inline void SetCopyImageSetInformation(const CopyImageSetInformation& value) { m_copyImageSetInformationHasBeenSet = true; m_copyImageSetInformation = value; }
    inline void SetCopyImageSetInformation(CopyImageSetInformation&& value) { m_copyImageSetInformationHasBeenSet = true; m_copyImageSetInformation = std::move(value); }
    inline CopyImageSetRequest& WithCopyImageSetInformation(const CopyImageSetInformation& value) { SetCopyImageSetInformation(value); return *this;}
    inline CopyImageSetRequest& WithCopyImageSetInformation(CopyImageSetInformation&& value) { SetCopyImageSetInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Setting this flag will force the <code>CopyImageSet</code> operation, even if
     * Patient, Study, or Series level metadata are mismatched across the
     * <code>sourceImageSet</code> and <code>destinationImageSet</code>.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline CopyImageSetRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_sourceImageSetId;
    bool m_sourceImageSetIdHasBeenSet = false;

    CopyImageSetInformation m_copyImageSetInformation;
    bool m_copyImageSetInformationHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
