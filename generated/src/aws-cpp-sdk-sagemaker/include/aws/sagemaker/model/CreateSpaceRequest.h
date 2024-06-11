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
    AWS_SAGEMAKER_API CreateSpaceRequest();

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
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline CreateSpaceRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateSpaceRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline CreateSpaceRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateSpaceRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSpaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSpaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSpaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSpaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const{ return m_spaceSettings; }
    inline bool SpaceSettingsHasBeenSet() const { return m_spaceSettingsHasBeenSet; }
    inline void SetSpaceSettings(const SpaceSettings& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = value; }
    inline void SetSpaceSettings(SpaceSettings&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::move(value); }
    inline CreateSpaceRequest& WithSpaceSettings(const SpaceSettings& value) { SetSpaceSettings(value); return *this;}
    inline CreateSpaceRequest& WithSpaceSettings(SpaceSettings&& value) { SetSpaceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of ownership settings.</p>
     */
    inline const OwnershipSettings& GetOwnershipSettings() const{ return m_ownershipSettings; }
    inline bool OwnershipSettingsHasBeenSet() const { return m_ownershipSettingsHasBeenSet; }
    inline void SetOwnershipSettings(const OwnershipSettings& value) { m_ownershipSettingsHasBeenSet = true; m_ownershipSettings = value; }
    inline void SetOwnershipSettings(OwnershipSettings&& value) { m_ownershipSettingsHasBeenSet = true; m_ownershipSettings = std::move(value); }
    inline CreateSpaceRequest& WithOwnershipSettings(const OwnershipSettings& value) { SetOwnershipSettings(value); return *this;}
    inline CreateSpaceRequest& WithOwnershipSettings(OwnershipSettings&& value) { SetOwnershipSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of space sharing settings.</p>
     */
    inline const SpaceSharingSettings& GetSpaceSharingSettings() const{ return m_spaceSharingSettings; }
    inline bool SpaceSharingSettingsHasBeenSet() const { return m_spaceSharingSettingsHasBeenSet; }
    inline void SetSpaceSharingSettings(const SpaceSharingSettings& value) { m_spaceSharingSettingsHasBeenSet = true; m_spaceSharingSettings = value; }
    inline void SetSpaceSharingSettings(SpaceSharingSettings&& value) { m_spaceSharingSettingsHasBeenSet = true; m_spaceSharingSettings = std::move(value); }
    inline CreateSpaceRequest& WithSpaceSharingSettings(const SpaceSharingSettings& value) { SetSpaceSharingSettings(value); return *this;}
    inline CreateSpaceRequest& WithSpaceSharingSettings(SpaceSharingSettings&& value) { SetSpaceSharingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the SageMaker Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const{ return m_spaceDisplayName; }
    inline bool SpaceDisplayNameHasBeenSet() const { return m_spaceDisplayNameHasBeenSet; }
    inline void SetSpaceDisplayName(const Aws::String& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = value; }
    inline void SetSpaceDisplayName(Aws::String&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::move(value); }
    inline void SetSpaceDisplayName(const char* value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName.assign(value); }
    inline CreateSpaceRequest& WithSpaceDisplayName(const Aws::String& value) { SetSpaceDisplayName(value); return *this;}
    inline CreateSpaceRequest& WithSpaceDisplayName(Aws::String&& value) { SetSpaceDisplayName(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithSpaceDisplayName(const char* value) { SetSpaceDisplayName(value); return *this;}
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
