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
    AWS_MEDICALIMAGING_API CopyImageSetRequest() = default;

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
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    CopyImageSetRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source image set identifier.</p>
     */
    inline const Aws::String& GetSourceImageSetId() const { return m_sourceImageSetId; }
    inline bool SourceImageSetIdHasBeenSet() const { return m_sourceImageSetIdHasBeenSet; }
    template<typename SourceImageSetIdT = Aws::String>
    void SetSourceImageSetId(SourceImageSetIdT&& value) { m_sourceImageSetIdHasBeenSet = true; m_sourceImageSetId = std::forward<SourceImageSetIdT>(value); }
    template<typename SourceImageSetIdT = Aws::String>
    CopyImageSetRequest& WithSourceImageSetId(SourceImageSetIdT&& value) { SetSourceImageSetId(std::forward<SourceImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy image set information.</p>
     */
    inline const CopyImageSetInformation& GetCopyImageSetInformation() const { return m_copyImageSetInformation; }
    inline bool CopyImageSetInformationHasBeenSet() const { return m_copyImageSetInformationHasBeenSet; }
    template<typename CopyImageSetInformationT = CopyImageSetInformation>
    void SetCopyImageSetInformation(CopyImageSetInformationT&& value) { m_copyImageSetInformationHasBeenSet = true; m_copyImageSetInformation = std::forward<CopyImageSetInformationT>(value); }
    template<typename CopyImageSetInformationT = CopyImageSetInformation>
    CopyImageSetRequest& WithCopyImageSetInformation(CopyImageSetInformationT&& value) { SetCopyImageSetInformation(std::forward<CopyImageSetInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Providing this parameter will force completion of the
     * <code>CopyImageSet</code> operation, even if there are inconsistent Patient,
     * Study, and/or Series level metadata elements between the
     * <code>sourceImageSet</code> and <code>destinationImageSet</code>.</p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline CopyImageSetRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Providing this parameter will configure the <code>CopyImageSet</code>
     * operation to promote the given image set to the primary DICOM hierarchy. If
     * successful, a new primary image set ID will be returned as the destination image
     * set.</p>
     */
    inline bool GetPromoteToPrimary() const { return m_promoteToPrimary; }
    inline bool PromoteToPrimaryHasBeenSet() const { return m_promoteToPrimaryHasBeenSet; }
    inline void SetPromoteToPrimary(bool value) { m_promoteToPrimaryHasBeenSet = true; m_promoteToPrimary = value; }
    inline CopyImageSetRequest& WithPromoteToPrimary(bool value) { SetPromoteToPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_sourceImageSetId;
    bool m_sourceImageSetIdHasBeenSet = false;

    CopyImageSetInformation m_copyImageSetInformation;
    bool m_copyImageSetInformationHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;

    bool m_promoteToPrimary{false};
    bool m_promoteToPrimaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
