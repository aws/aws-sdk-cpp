/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class CreateResourceRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResource"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateResourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateResourceRequest& WithType(const ResourceType& value) { SetType(value); return *this;}
    inline CreateResourceRequest& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateResourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateResourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateResourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is enabled, the resource will be hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline CreateResourceRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
