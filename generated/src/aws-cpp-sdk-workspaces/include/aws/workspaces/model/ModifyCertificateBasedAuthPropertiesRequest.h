/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/CertificateBasedAuthProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DeletableCertificateBasedAuthProperty.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyCertificateBasedAuthPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyCertificateBasedAuthPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCertificateBasedAuthProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ModifyCertificateBasedAuthPropertiesRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const { return m_certificateBasedAuthProperties; }
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    void SetCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::forward<CertificateBasedAuthPropertiesT>(value); }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    ModifyCertificateBasedAuthPropertiesRequest& WithCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { SetCertificateBasedAuthProperties(std::forward<CertificateBasedAuthPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline const Aws::Vector<DeletableCertificateBasedAuthProperty>& GetPropertiesToDelete() const { return m_propertiesToDelete; }
    inline bool PropertiesToDeleteHasBeenSet() const { return m_propertiesToDeleteHasBeenSet; }
    template<typename PropertiesToDeleteT = Aws::Vector<DeletableCertificateBasedAuthProperty>>
    void SetPropertiesToDelete(PropertiesToDeleteT&& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete = std::forward<PropertiesToDeleteT>(value); }
    template<typename PropertiesToDeleteT = Aws::Vector<DeletableCertificateBasedAuthProperty>>
    ModifyCertificateBasedAuthPropertiesRequest& WithPropertiesToDelete(PropertiesToDeleteT&& value) { SetPropertiesToDelete(std::forward<PropertiesToDeleteT>(value)); return *this;}
    inline ModifyCertificateBasedAuthPropertiesRequest& AddPropertiesToDelete(DeletableCertificateBasedAuthProperty value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;

    Aws::Vector<DeletableCertificateBasedAuthProperty> m_propertiesToDelete;
    bool m_propertiesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
