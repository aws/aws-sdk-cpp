/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Location.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/SiteState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a site.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Site">AWS
   * API Reference</a></p>
   */
  class Site
  {
  public:
    AWS_NETWORKMANAGER_API Site();
    AWS_NETWORKMANAGER_API Site(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Site& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the site.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The ID of the site.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline Site& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline Site& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline Site& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline const Aws::String& GetSiteArn() const{ return m_siteArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline bool SiteArnHasBeenSet() const { return m_siteArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline void SetSiteArn(const Aws::String& value) { m_siteArnHasBeenSet = true; m_siteArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline void SetSiteArn(Aws::String&& value) { m_siteArnHasBeenSet = true; m_siteArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline void SetSiteArn(const char* value) { m_siteArnHasBeenSet = true; m_siteArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline Site& WithSiteArn(const Aws::String& value) { SetSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline Site& WithSiteArn(Aws::String&& value) { SetSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline Site& WithSiteArn(const char* value) { SetSiteArn(value); return *this;}


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline Site& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Site& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Site& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The description of the site.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the site.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the site.</p>
     */
    inline Site& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the site.</p>
     */
    inline Site& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the site.</p>
     */
    inline Site& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The location of the site.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the site.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the site.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the site.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the site.</p>
     */
    inline Site& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the site.</p>
     */
    inline Site& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The date and time that the site was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline Site& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline Site& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The state of the site.</p>
     */
    inline const SiteState& GetState() const{ return m_state; }

    /**
     * <p>The state of the site.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the site.</p>
     */
    inline void SetState(const SiteState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the site.</p>
     */
    inline void SetState(SiteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the site.</p>
     */
    inline Site& WithState(const SiteState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the site.</p>
     */
    inline Site& WithState(SiteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags for the site.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the site.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the site.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the site.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the site.</p>
     */
    inline Site& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the site.</p>
     */
    inline Site& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the site.</p>
     */
    inline Site& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the site.</p>
     */
    inline Site& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_siteArn;
    bool m_siteArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    SiteState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
