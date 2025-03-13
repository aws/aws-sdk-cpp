/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/SamlProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DeletableSamlProperty.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifySamlPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifySamlPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySamlProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory identifier for which you want to configure SAML properties.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ModifySamlPropertiesRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for configuring SAML 2.0 authentication.</p>
     */
    inline const SamlProperties& GetSamlProperties() const { return m_samlProperties; }
    inline bool SamlPropertiesHasBeenSet() const { return m_samlPropertiesHasBeenSet; }
    template<typename SamlPropertiesT = SamlProperties>
    void SetSamlProperties(SamlPropertiesT&& value) { m_samlPropertiesHasBeenSet = true; m_samlProperties = std::forward<SamlPropertiesT>(value); }
    template<typename SamlPropertiesT = SamlProperties>
    ModifySamlPropertiesRequest& WithSamlProperties(SamlPropertiesT&& value) { SetSamlProperties(std::forward<SamlPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAML properties to delete as part of your request.</p> <p>Specify one of
     * the following options:</p> <ul> <li> <p>
     * <code>SAML_PROPERTIES_USER_ACCESS_URL</code> to delete the user access URL.</p>
     * </li> <li> <p> <code>SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME</code> to delete
     * the relay state parameter name.</p> </li> </ul>
     */
    inline const Aws::Vector<DeletableSamlProperty>& GetPropertiesToDelete() const { return m_propertiesToDelete; }
    inline bool PropertiesToDeleteHasBeenSet() const { return m_propertiesToDeleteHasBeenSet; }
    template<typename PropertiesToDeleteT = Aws::Vector<DeletableSamlProperty>>
    void SetPropertiesToDelete(PropertiesToDeleteT&& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete = std::forward<PropertiesToDeleteT>(value); }
    template<typename PropertiesToDeleteT = Aws::Vector<DeletableSamlProperty>>
    ModifySamlPropertiesRequest& WithPropertiesToDelete(PropertiesToDeleteT&& value) { SetPropertiesToDelete(std::forward<PropertiesToDeleteT>(value)); return *this;}
    inline ModifySamlPropertiesRequest& AddPropertiesToDelete(DeletableSamlProperty value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    SamlProperties m_samlProperties;
    bool m_samlPropertiesHasBeenSet = false;

    Aws::Vector<DeletableSamlProperty> m_propertiesToDelete;
    bool m_propertiesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
