/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
  class CreateAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateAppRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    template<typename UserProfileNameT = Aws::String>
    void SetUserProfileName(UserProfileNameT&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::forward<UserProfileNameT>(value); }
    template<typename UserProfileNameT = Aws::String>
    CreateAppRequest& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    CreateAppRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline CreateAppRequest& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const { return m_appName; }
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }
    template<typename AppNameT = Aws::String>
    void SetAppName(AppNameT&& value) { m_appNameHasBeenSet = true; m_appName = std::forward<AppNameT>(value); }
    template<typename AppNameT = Aws::String>
    CreateAppRequest& WithAppName(AppNameT&& value) { SetAppName(std::forward<AppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAppRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAppRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker AI
     * image created on the instance.</p>  <p>The value of
     * <code>InstanceType</code> passed as part of the <code>ResourceSpec</code> in the
     * <code>CreateApp</code> call overrides the value passed as part of the
     * <code>ResourceSpec</code> configured for the user profile or the domain. If
     * <code>InstanceType</code> is not specified in any of those three
     * <code>ResourceSpec</code> values for a <code>KernelGateway</code> app, the
     * <code>CreateApp</code> call fails with a request validation error.</p> 
     */
    inline const ResourceSpec& GetResourceSpec() const { return m_resourceSpec; }
    inline bool ResourceSpecHasBeenSet() const { return m_resourceSpecHasBeenSet; }
    template<typename ResourceSpecT = ResourceSpec>
    void SetResourceSpec(ResourceSpecT&& value) { m_resourceSpecHasBeenSet = true; m_resourceSpec = std::forward<ResourceSpecT>(value); }
    template<typename ResourceSpecT = ResourceSpec>
    CreateAppRequest& WithResourceSpec(ResourceSpecT&& value) { SetResourceSpec(std::forward<ResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the application is launched in recovery mode. </p>
     */
    inline bool GetRecoveryMode() const { return m_recoveryMode; }
    inline bool RecoveryModeHasBeenSet() const { return m_recoveryModeHasBeenSet; }
    inline void SetRecoveryMode(bool value) { m_recoveryModeHasBeenSet = true; m_recoveryMode = value; }
    inline CreateAppRequest& WithRecoveryMode(bool value) { SetRecoveryMode(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceSpec m_resourceSpec;
    bool m_resourceSpecHasBeenSet = false;

    bool m_recoveryMode{false};
    bool m_recoveryModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
