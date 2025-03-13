/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AssociateOpsItemRelatedItemRequest : public SSMRequest
  {
  public:
    AWS_SSM_API AssociateOpsItemRelatedItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateOpsItemRelatedItem"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the OpsItem to which you want to associate a resource as a related
     * item.</p>
     */
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    AssociateOpsItemRelatedItemRequest& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association that you want to create between an OpsItem and a
     * resource. OpsCenter supports <code>IsParentOf</code> and <code>RelatesTo</code>
     * association types.</p>
     */
    inline const Aws::String& GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    template<typename AssociationTypeT = Aws::String>
    void SetAssociationType(AssociationTypeT&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::forward<AssociationTypeT>(value); }
    template<typename AssociationTypeT = Aws::String>
    AssociateOpsItemRelatedItemRequest& WithAssociationType(AssociationTypeT&& value) { SetAssociationType(std::forward<AssociationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that you want to associate with an OpsItem. OpsCenter
     * supports the following types:</p> <p>
     * <code>AWS::SSMIncidents::IncidentRecord</code>: an Incident Manager incident.
     * </p> <p> <code>AWS::SSM::Document</code>: a Systems Manager (SSM) document.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    AssociateOpsItemRelatedItemRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource that you
     * want to associate with the OpsItem.</p>
     */
    inline const Aws::String& GetResourceUri() const { return m_resourceUri; }
    inline bool ResourceUriHasBeenSet() const { return m_resourceUriHasBeenSet; }
    template<typename ResourceUriT = Aws::String>
    void SetResourceUri(ResourceUriT&& value) { m_resourceUriHasBeenSet = true; m_resourceUri = std::forward<ResourceUriT>(value); }
    template<typename ResourceUriT = Aws::String>
    AssociateOpsItemRelatedItemRequest& WithResourceUri(ResourceUriT&& value) { SetResourceUri(std::forward<ResourceUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceUri;
    bool m_resourceUriHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
