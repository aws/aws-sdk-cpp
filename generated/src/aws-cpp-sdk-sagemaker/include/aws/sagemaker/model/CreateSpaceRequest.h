/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SpaceSettings.h>
#include <aws/sagemaker/model/OwnershipSettings.h>
#include <aws/sagemaker/model/SpaceSharingSettings.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateSpaceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateSpaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateSpaceRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    CreateSpaceRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSpaceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSpaceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const { return m_spaceSettings; }
    inline bool SpaceSettingsHasBeenSet() const { return m_spaceSettingsHasBeenSet; }
    template<typename SpaceSettingsT = SpaceSettings>
    void SetSpaceSettings(SpaceSettingsT&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::forward<SpaceSettingsT>(value); }
    template<typename SpaceSettingsT = SpaceSettings>
    CreateSpaceRequest& WithSpaceSettings(SpaceSettingsT&& value) { SetSpaceSettings(std::forward<SpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of ownership settings.</p>
     */
    inline const OwnershipSettings& GetOwnershipSettings() const { return m_ownershipSettings; }
    inline bool OwnershipSettingsHasBeenSet() const { return m_ownershipSettingsHasBeenSet; }
    template<typename OwnershipSettingsT = OwnershipSettings>
    void SetOwnershipSettings(OwnershipSettingsT&& value) { m_ownershipSettingsHasBeenSet = true; m_ownershipSettings = std::forward<OwnershipSettingsT>(value); }
    template<typename OwnershipSettingsT = OwnershipSettings>
    CreateSpaceRequest& WithOwnershipSettings(OwnershipSettingsT&& value) { SetOwnershipSettings(std::forward<OwnershipSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of space sharing settings.</p>
     */
    inline const SpaceSharingSettings& GetSpaceSharingSettings() const { return m_spaceSharingSettings; }
    inline bool SpaceSharingSettingsHasBeenSet() const { return m_spaceSharingSettingsHasBeenSet; }
    template<typename SpaceSharingSettingsT = SpaceSharingSettings>
    void SetSpaceSharingSettings(SpaceSharingSettingsT&& value) { m_spaceSharingSettingsHasBeenSet = true; m_spaceSharingSettings = std::forward<SpaceSharingSettingsT>(value); }
    template<typename SpaceSharingSettingsT = SpaceSharingSettings>
    CreateSpaceRequest& WithSpaceSharingSettings(SpaceSharingSettingsT&& value) { SetSpaceSharingSettings(std::forward<SpaceSharingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the SageMaker Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const { return m_spaceDisplayName; }
    inline bool SpaceDisplayNameHasBeenSet() const { return m_spaceDisplayNameHasBeenSet; }
    template<typename SpaceDisplayNameT = Aws::String>
    void SetSpaceDisplayName(SpaceDisplayNameT&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::forward<SpaceDisplayNameT>(value); }
    template<typename SpaceDisplayNameT = Aws::String>
    CreateSpaceRequest& WithSpaceDisplayName(SpaceDisplayNameT&& value) { SetSpaceDisplayName(std::forward<SpaceDisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SpaceSettings m_spaceSettings;
    bool m_spaceSettingsHasBeenSet = false;

    OwnershipSettings m_ownershipSettings;
    bool m_ownershipSettingsHasBeenSet = false;

    SpaceSharingSettings m_spaceSharingSettings;
    bool m_spaceSharingSettingsHasBeenSet = false;

    Aws::String m_spaceDisplayName;
    bool m_spaceDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
