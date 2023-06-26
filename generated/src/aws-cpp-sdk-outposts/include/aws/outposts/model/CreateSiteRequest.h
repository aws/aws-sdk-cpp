/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/outposts/model/Address.h>
#include <aws/outposts/model/RackPhysicalProperties.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class CreateSiteRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API CreateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSite"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateSiteRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateSiteRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline CreateSiteRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline CreateSiteRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline CreateSiteRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p> The tags to apply to a site. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to a site. </p>
     */
    inline CreateSiteRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline const Address& GetOperatingAddress() const{ return m_operatingAddress; }

    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline bool OperatingAddressHasBeenSet() const { return m_operatingAddressHasBeenSet; }

    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline void SetOperatingAddress(const Address& value) { m_operatingAddressHasBeenSet = true; m_operatingAddress = value; }

    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline void SetOperatingAddress(Address&& value) { m_operatingAddressHasBeenSet = true; m_operatingAddress = std::move(value); }

    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline CreateSiteRequest& WithOperatingAddress(const Address& value) { SetOperatingAddress(value); return *this;}

    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline CreateSiteRequest& WithOperatingAddress(Address&& value) { SetOperatingAddress(std::move(value)); return *this;}


    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline CreateSiteRequest& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}

    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline CreateSiteRequest& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline const RackPhysicalProperties& GetRackPhysicalProperties() const{ return m_rackPhysicalProperties; }

    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline bool RackPhysicalPropertiesHasBeenSet() const { return m_rackPhysicalPropertiesHasBeenSet; }

    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline void SetRackPhysicalProperties(const RackPhysicalProperties& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = value; }

    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline void SetRackPhysicalProperties(RackPhysicalProperties&& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = std::move(value); }

    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline CreateSiteRequest& WithRackPhysicalProperties(const RackPhysicalProperties& value) { SetRackPhysicalProperties(value); return *this;}

    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline CreateSiteRequest& WithRackPhysicalProperties(RackPhysicalProperties&& value) { SetRackPhysicalProperties(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Address m_operatingAddress;
    bool m_operatingAddressHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    RackPhysicalProperties m_rackPhysicalProperties;
    bool m_rackPhysicalPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
