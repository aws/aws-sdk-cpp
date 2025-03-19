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
    AWS_OUTPOSTS_API CreateSiteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSite"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSiteRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSiteRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that you provide about site access requirements,
     * electrician scheduling, personal protective equipment, or regulation of
     * equipment materials that could affect your installation process. </p>
     */
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    CreateSiteRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags to apply to a site. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSiteRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSiteRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The location to install and power on the hardware. This address might be
     * different from the shipping address. </p>
     */
    inline const Address& GetOperatingAddress() const { return m_operatingAddress; }
    inline bool OperatingAddressHasBeenSet() const { return m_operatingAddressHasBeenSet; }
    template<typename OperatingAddressT = Address>
    void SetOperatingAddress(OperatingAddressT&& value) { m_operatingAddressHasBeenSet = true; m_operatingAddress = std::forward<OperatingAddressT>(value); }
    template<typename OperatingAddressT = Address>
    CreateSiteRequest& WithOperatingAddress(OperatingAddressT&& value) { SetOperatingAddress(std::forward<OperatingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location to ship the hardware. This address might be different from the
     * operating address. </p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    CreateSiteRequest& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the physical and logistical details for the rack at this
     * site. For more information about hardware requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
     * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
     */
    inline const RackPhysicalProperties& GetRackPhysicalProperties() const { return m_rackPhysicalProperties; }
    inline bool RackPhysicalPropertiesHasBeenSet() const { return m_rackPhysicalPropertiesHasBeenSet; }
    template<typename RackPhysicalPropertiesT = RackPhysicalProperties>
    void SetRackPhysicalProperties(RackPhysicalPropertiesT&& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = std::forward<RackPhysicalPropertiesT>(value); }
    template<typename RackPhysicalPropertiesT = RackPhysicalProperties>
    CreateSiteRequest& WithRackPhysicalProperties(RackPhysicalPropertiesT&& value) { SetRackPhysicalProperties(std::forward<RackPhysicalPropertiesT>(value)); return *this;}
    ///@}
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
