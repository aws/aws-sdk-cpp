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
    AWS_OUTPOSTS_API Site();
    AWS_OUTPOSTS_API Site(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Site& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    
    inline Site& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    
    inline Site& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    
    inline Site& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline Site& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline Site& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline Site& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Site& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Site& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Site& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Site& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Site& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Site& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The site tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The site tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The site tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The site tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The site tags.</p>
     */
    inline Site& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The site tags.</p>
     */
    inline Site& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The site tags.</p>
     */
    inline Site& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetSiteArn() const{ return m_siteArn; }

    
    inline bool SiteArnHasBeenSet() const { return m_siteArnHasBeenSet; }

    
    inline void SetSiteArn(const Aws::String& value) { m_siteArnHasBeenSet = true; m_siteArn = value; }

    
    inline void SetSiteArn(Aws::String&& value) { m_siteArnHasBeenSet = true; m_siteArn = std::move(value); }

    
    inline void SetSiteArn(const char* value) { m_siteArnHasBeenSet = true; m_siteArn.assign(value); }

    
    inline Site& WithSiteArn(const Aws::String& value) { SetSiteArn(value); return *this;}

    
    inline Site& WithSiteArn(Aws::String&& value) { SetSiteArn(std::move(value)); return *this;}

    
    inline Site& WithSiteArn(const char* value) { SetSiteArn(value); return *this;}


    /**
     * <p> Notes about a site. </p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p> Notes about a site. </p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p> Notes about a site. </p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p> Notes about a site. </p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p> Notes about a site. </p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p> Notes about a site. </p>
     */
    inline Site& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p> Notes about a site. </p>
     */
    inline Site& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p> Notes about a site. </p>
     */
    inline Site& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressCountryCode() const{ return m_operatingAddressCountryCode; }

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline bool OperatingAddressCountryCodeHasBeenSet() const { return m_operatingAddressCountryCodeHasBeenSet; }

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline void SetOperatingAddressCountryCode(const Aws::String& value) { m_operatingAddressCountryCodeHasBeenSet = true; m_operatingAddressCountryCode = value; }

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline void SetOperatingAddressCountryCode(Aws::String&& value) { m_operatingAddressCountryCodeHasBeenSet = true; m_operatingAddressCountryCode = std::move(value); }

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline void SetOperatingAddressCountryCode(const char* value) { m_operatingAddressCountryCodeHasBeenSet = true; m_operatingAddressCountryCode.assign(value); }

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline Site& WithOperatingAddressCountryCode(const Aws::String& value) { SetOperatingAddressCountryCode(value); return *this;}

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline Site& WithOperatingAddressCountryCode(Aws::String&& value) { SetOperatingAddressCountryCode(std::move(value)); return *this;}

    /**
     * <p> The ISO-3166 two-letter country code where the hardware is installed and
     * powered on. </p>
     */
    inline Site& WithOperatingAddressCountryCode(const char* value) { SetOperatingAddressCountryCode(value); return *this;}


    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressStateOrRegion() const{ return m_operatingAddressStateOrRegion; }

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline bool OperatingAddressStateOrRegionHasBeenSet() const { return m_operatingAddressStateOrRegionHasBeenSet; }

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressStateOrRegion(const Aws::String& value) { m_operatingAddressStateOrRegionHasBeenSet = true; m_operatingAddressStateOrRegion = value; }

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressStateOrRegion(Aws::String&& value) { m_operatingAddressStateOrRegionHasBeenSet = true; m_operatingAddressStateOrRegion = std::move(value); }

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressStateOrRegion(const char* value) { m_operatingAddressStateOrRegionHasBeenSet = true; m_operatingAddressStateOrRegion.assign(value); }

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressStateOrRegion(const Aws::String& value) { SetOperatingAddressStateOrRegion(value); return *this;}

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressStateOrRegion(Aws::String&& value) { SetOperatingAddressStateOrRegion(std::move(value)); return *this;}

    /**
     * <p> State or region where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressStateOrRegion(const char* value) { SetOperatingAddressStateOrRegion(value); return *this;}


    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline const Aws::String& GetOperatingAddressCity() const{ return m_operatingAddressCity; }

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline bool OperatingAddressCityHasBeenSet() const { return m_operatingAddressCityHasBeenSet; }

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressCity(const Aws::String& value) { m_operatingAddressCityHasBeenSet = true; m_operatingAddressCity = value; }

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressCity(Aws::String&& value) { m_operatingAddressCityHasBeenSet = true; m_operatingAddressCity = std::move(value); }

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline void SetOperatingAddressCity(const char* value) { m_operatingAddressCityHasBeenSet = true; m_operatingAddressCity.assign(value); }

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressCity(const Aws::String& value) { SetOperatingAddressCity(value); return *this;}

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressCity(Aws::String&& value) { SetOperatingAddressCity(std::move(value)); return *this;}

    /**
     * <p> City where the hardware is installed and powered on. </p>
     */
    inline Site& WithOperatingAddressCity(const char* value) { SetOperatingAddressCity(value); return *this;}


    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline const RackPhysicalProperties& GetRackPhysicalProperties() const{ return m_rackPhysicalProperties; }

    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline bool RackPhysicalPropertiesHasBeenSet() const { return m_rackPhysicalPropertiesHasBeenSet; }

    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline void SetRackPhysicalProperties(const RackPhysicalProperties& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = value; }

    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline void SetRackPhysicalProperties(RackPhysicalProperties&& value) { m_rackPhysicalPropertiesHasBeenSet = true; m_rackPhysicalProperties = std::move(value); }

    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline Site& WithRackPhysicalProperties(const RackPhysicalProperties& value) { SetRackPhysicalProperties(value); return *this;}

    /**
     * <p> Information about the physical and logistical details for a rack at the
     * site. </p>
     */
    inline Site& WithRackPhysicalProperties(RackPhysicalProperties&& value) { SetRackPhysicalProperties(std::move(value)); return *this;}

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
