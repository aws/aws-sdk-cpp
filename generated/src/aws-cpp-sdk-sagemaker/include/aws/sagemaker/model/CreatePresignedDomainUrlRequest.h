/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreatePresignedDomainUrlRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreatePresignedDomainUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedDomainUrl"; }

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
    CreatePresignedDomainUrlRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    template<typename UserProfileNameT = Aws::String>
    void SetUserProfileName(UserProfileNameT&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::forward<UserProfileNameT>(value); }
    template<typename UserProfileNameT = Aws::String>
    CreatePresignedDomainUrlRequest& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session expiration duration in seconds. This value defaults to 43200.</p>
     */
    inline int GetSessionExpirationDurationInSeconds() const { return m_sessionExpirationDurationInSeconds; }
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }
    inline void SetSessionExpirationDurationInSeconds(int value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }
    inline CreatePresignedDomainUrlRequest& WithSessionExpirationDurationInSeconds(int value) { SetSessionExpirationDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds until the pre-signed URL expires. This value defaults
     * to 300.</p>
     */
    inline int GetExpiresInSeconds() const { return m_expiresInSeconds; }
    inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }
    inline void SetExpiresInSeconds(int value) { m_expiresInSecondsHasBeenSet = true; m_expiresInSeconds = value; }
    inline CreatePresignedDomainUrlRequest& WithExpiresInSeconds(int value) { SetExpiresInSeconds(value); return *this;}
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
    CreatePresignedDomainUrlRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing page that the user is directed to when accessing the presigned
     * URL. Using this value, users can access Studio or Studio Classic, even if it is
     * not the default experience for the domain. The supported values are:</p> <ul>
     * <li> <p> <code>studio::relative/path</code>: Directs users to the relative path
     * in Studio.</p> </li> <li> <p> <code>app:JupyterServer:relative/path</code>:
     * Directs users to the relative path in the Studio Classic application.</p> </li>
     * <li> <p> <code>app:JupyterLab:relative/path</code>: Directs users to the
     * relative path in the JupyterLab application.</p> </li> <li> <p>
     * <code>app:RStudioServerPro:relative/path</code>: Directs users to the relative
     * path in the RStudio application.</p> </li> <li> <p>
     * <code>app:CodeEditor:relative/path</code>: Directs users to the relative path in
     * the Code Editor, based on Code-OSS, Visual Studio Code - Open Source
     * application.</p> </li> <li> <p> <code>app:Canvas:relative/path</code>: Directs
     * users to the relative path in the Canvas application.</p> </li> </ul>
     */
    inline const Aws::String& GetLandingUri() const { return m_landingUri; }
    inline bool LandingUriHasBeenSet() const { return m_landingUriHasBeenSet; }
    template<typename LandingUriT = Aws::String>
    void SetLandingUri(LandingUriT&& value) { m_landingUriHasBeenSet = true; m_landingUri = std::forward<LandingUriT>(value); }
    template<typename LandingUriT = Aws::String>
    CreatePresignedDomainUrlRequest& WithLandingUri(LandingUriT&& value) { SetLandingUri(std::forward<LandingUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    int m_sessionExpirationDurationInSeconds{0};
    bool m_sessionExpirationDurationInSecondsHasBeenSet = false;

    int m_expiresInSeconds{0};
    bool m_expiresInSecondsHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_landingUri;
    bool m_landingUriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
