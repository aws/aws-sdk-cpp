/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/BookingOptions.h>
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
  class UpdateResourceRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResource"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline UpdateResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline UpdateResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource to be updated.</p> <p>The identifier can
     * accept <i>ResourceId</i>, <i>Resourcename</i>, or <i>email</i>. The following
     * identity formats are available:</p> <ul> <li> <p>Resource ID:
     * r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email address:
     * resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li> </ul>
     */
    inline UpdateResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline const BookingOptions& GetBookingOptions() const{ return m_bookingOptions; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline bool BookingOptionsHasBeenSet() const { return m_bookingOptionsHasBeenSet; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline void SetBookingOptions(const BookingOptions& value) { m_bookingOptionsHasBeenSet = true; m_bookingOptions = value; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline void SetBookingOptions(BookingOptions&& value) { m_bookingOptionsHasBeenSet = true; m_bookingOptions = std::move(value); }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline UpdateResourceRequest& WithBookingOptions(const BookingOptions& value) { SetBookingOptions(value); return *this;}

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline UpdateResourceRequest& WithBookingOptions(BookingOptions&& value) { SetBookingOptions(std::move(value)); return *this;}


    /**
     * <p>Updates the resource description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Updates the resource description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Updates the resource description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Updates the resource description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Updates the resource description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Updates the resource description.</p>
     */
    inline UpdateResourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Updates the resource description.</p>
     */
    inline UpdateResourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Updates the resource description.</p>
     */
    inline UpdateResourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Updates the resource type.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>Updates the resource type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Updates the resource type.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Updates the resource type.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Updates the resource type.</p>
     */
    inline UpdateResourceRequest& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>Updates the resource type.</p>
     */
    inline UpdateResourceRequest& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }

    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }

    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }

    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline UpdateResourceRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BookingOptions m_bookingOptions;
    bool m_bookingOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ResourceType m_type;
    bool m_typeHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
