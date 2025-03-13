/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApp"; }

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
    DeleteAppRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
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
    DeleteAppRequest& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
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
    DeleteAppRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline DeleteAppRequest& WithAppType(AppType value) { SetAppType(value); return *this;}
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
    DeleteAppRequest& WithAppName(AppNameT&& value) { SetAppName(std::forward<AppNameT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
