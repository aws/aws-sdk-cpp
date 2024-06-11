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
    AWS_SSM_API AssociateOpsItemRelatedItemRequest();

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
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }
    inline AssociateOpsItemRelatedItemRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association that you want to create between an OpsItem and a
     * resource. OpsCenter supports <code>IsParentOf</code> and <code>RelatesTo</code>
     * association types.</p>
     */
    inline const Aws::String& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const Aws::String& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(Aws::String&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline void SetAssociationType(const char* value) { m_associationTypeHasBeenSet = true; m_associationType.assign(value); }
    inline AssociateOpsItemRelatedItemRequest& WithAssociationType(const Aws::String& value) { SetAssociationType(value); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithAssociationType(Aws::String&& value) { SetAssociationType(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithAssociationType(const char* value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that you want to associate with an OpsItem. OpsCenter
     * supports the following types:</p> <p>
     * <code>AWS::SSMIncidents::IncidentRecord</code>: an Incident Manager incident.
     * </p> <p> <code>AWS::SSM::Document</code>: a Systems Manager (SSM) document.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline AssociateOpsItemRelatedItemRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource that you
     * want to associate with the OpsItem.</p>
     */
    inline const Aws::String& GetResourceUri() const{ return m_resourceUri; }
    inline bool ResourceUriHasBeenSet() const { return m_resourceUriHasBeenSet; }
    inline void SetResourceUri(const Aws::String& value) { m_resourceUriHasBeenSet = true; m_resourceUri = value; }
    inline void SetResourceUri(Aws::String&& value) { m_resourceUriHasBeenSet = true; m_resourceUri = std::move(value); }
    inline void SetResourceUri(const char* value) { m_resourceUriHasBeenSet = true; m_resourceUri.assign(value); }
    inline AssociateOpsItemRelatedItemRequest& WithResourceUri(const Aws::String& value) { SetResourceUri(value); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithResourceUri(Aws::String&& value) { SetResourceUri(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemRequest& WithResourceUri(const char* value) { SetResourceUri(value); return *this;}
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
