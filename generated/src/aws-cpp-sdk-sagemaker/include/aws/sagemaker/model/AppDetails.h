/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/AppStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details about an Amazon SageMaker app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AppDetails">AWS
   * API Reference</a></p>
   */
  class AppDetails
  {
  public:
    AWS_SAGEMAKER_API AppDetails();
    AWS_SAGEMAKER_API AppDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline AppDetails& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline AppDetails& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline AppDetails& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }

    /**
     * <p>The user profile name.</p>
     */
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }

    /**
     * <p>The user profile name.</p>
     */
    inline AppDetails& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}

    /**
     * <p>The user profile name.</p>
     */
    inline AppDetails& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The user profile name.</p>
     */
    inline AppDetails& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}


    /**
     * <p>The type of app.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p>The type of app.</p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p>The type of app.</p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p>The type of app.</p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p>The type of app.</p>
     */
    inline AppDetails& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p>The type of app.</p>
     */
    inline AppDetails& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }

    /**
     * <p>The name of the app.</p>
     */
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const Aws::String& value) { m_appNameHasBeenSet = true; m_appName = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(Aws::String&& value) { m_appNameHasBeenSet = true; m_appName = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const char* value) { m_appNameHasBeenSet = true; m_appName.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline AppDetails& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline AppDetails& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline AppDetails& WithAppName(const char* value) { SetAppName(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const AppStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const AppStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(AppStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline AppDetails& WithStatus(const AppStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline AppDetails& WithStatus(AppStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline AppDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline AppDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline AppDetails& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline AppDetails& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline AppDetails& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    AppStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
