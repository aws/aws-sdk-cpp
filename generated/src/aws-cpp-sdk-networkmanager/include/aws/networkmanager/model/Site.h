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
    AWS_NETWORKMANAGER_API Site() = default;
    AWS_NETWORKMANAGER_API Site(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Site& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the site.</p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    Site& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the site.</p>
     */
    inline const Aws::String& GetSiteArn() const { return m_siteArn; }
    inline bool SiteArnHasBeenSet() const { return m_siteArnHasBeenSet; }
    template<typename SiteArnT = Aws::String>
    void SetSiteArn(SiteArnT&& value) { m_siteArnHasBeenSet = true; m_siteArn = std::forward<SiteArnT>(value); }
    template<typename SiteArnT = Aws::String>
    Site& WithSiteArn(SiteArnT&& value) { SetSiteArn(std::forward<SiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    Site& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the site.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Site& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the site.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    Site& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the site was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Site& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the site.</p>
     */
    inline SiteState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SiteState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Site& WithState(SiteState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the site.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Site& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Site& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    SiteState m_state{SiteState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
