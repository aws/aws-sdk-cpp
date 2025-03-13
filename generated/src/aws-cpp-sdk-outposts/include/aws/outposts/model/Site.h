/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/outposts/model/RackPhysicalProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about a site.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Site">AWS API
   * Reference</a></p>
   */
  class Site
  {
  public:
    AWS_OUTPOSTS_API Site() = default;
    AWS_OUTPOSTS_API Site(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Site& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    Site& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Site& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Site& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Site& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The site tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Site& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Site& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetSiteArn() const { return m_siteArn; }
    inline bool SiteArnHasBeenSet() const { return m_siteArnHasBeenSet; }
    template<typename SiteArnT = Aws::String>
    void SetSiteArn(SiteArnT&& value) { m_siteArnHasBeenSet = true; m_siteArn = std::forward<SiteArnT>(value); }
    template<typename SiteArnT = Aws::String>
    Site& WithSiteArn(SiteArnT&& value) { SetSiteArn(std::forward<SiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Notes about a site. </p>
     */
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    Site& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressCountryCode() const { return m_operatingAddressCountryCode; }
    inline bool OperatingAddressCountryCodeHasBeenSet() const { return m_operatingAddressCountryCodeHasBeenSet; }
    template<typename OperatingAddressCountryCodeT = Aws::String>
    void SetOperatingAddressCountryCode(OperatingAddressCountryCodeT&& value) { m_operatingAddressCountryCodeHasBeenSet = true; m_operatingAddressCountryCode = std::forward<OperatingAddressCountryCodeT>(value); }
    template<typename OperatingAddressCountryCodeT = Aws::String>
    Site& WithOperatingAddressCountryCode(OperatingAddressCountryCodeT&& value) { SetOperatingAddressCountryCode(std::forward<OperatingAddressCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressStateOrRegion() const { return m_operatingAddressStateOrRegion; }
    inline bool OperatingAddressStateOrRegionHasBeenSet() const { return m_operatingAddressStateOrRegionHasBeenSet; }
    template<typename OperatingAddressStateOrRegionT = Aws::String>
    void SetOperatingAddressStateOrRegion(OperatingAddressStateOrRegionT&& value) { m_operatingAddressStateOrRegionHasBeenSet = true; m_operatingAddressStateOrRegion = std::forward<OperatingAddressStateOrRegionT>(value); }
    template<typename OperatingAddressStateOrRegionT = Aws::String>
    Site& WithOperatingAddressStateOrRegion(OperatingAddressStateOrRegionT&& value) { SetOperatingAddressStateOrRegion(std::forward<OperatingAddressStateOrRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressCity() const { return m_operatingAddressCity; }
    inline bool OperatingAddressCityHasBeenSet() const { return m_operatingAddressCityHasBeenSet; }
    template<typename OperatingAddressCityT = Aws::String>
    void SetOperatingAddressCity(OperatingAddressCityT&& value) { m_operatingAddressCityHasBeenSet = true; m_operatingAddressCity = std::forward<OperatingAddressCityT>(value); }
    template<typename OperatingAddressCityT = Aws::String>
    Site& WithOperatingAddressCity(OperatingAddressCityT&& value) { SetOperatingAddressCity(std::forward<OperatingAddressCityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline const RackPhysicalProperties& GetRackPhysicalProperties() const { return m_rackPhysicalProperties; }
    inline bool RackPhysicalPropertiesHasBeenSet() const { return m_rackPhysicalPropertiesHasBeenSet; }
    template<typename RackPhysicalPropertiesT = RackPhysicalProperties>
    void SetRackPhysicalProperties(RackPhysicalPropertiesT&& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = std::forward<RackPhysicalPropertiesT>(value); }
    template<typename RackPhysicalPropertiesT = RackPhysicalProperties>
    Site& WithRackPhysicalProperties(RackPhysicalPropertiesT&& value) { SetRackPhysicalProperties(std::forward<RackPhysicalPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_siteArn;
    bool m_siteArnHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::String m_operatingAddressCountryCode;
    bool m_operatingAddressCountryCodeHasBeenSet = false;

    Aws::String m_operatingAddressStateOrRegion;
    bool m_operatingAddressStateOrRegionHasBeenSet = false;

    Aws::String m_operatingAddressCity;
    bool m_operatingAddressCityHasBeenSet = false;

    RackPhysicalProperties m_rackPhysicalProperties;
    bool m_rackPhysicalPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
