/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserProfileStatus.h>
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
   * <p>The user profile details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserProfileDetails">AWS
   * API Reference</a></p>
   */
  class UserProfileDetails
  {
  public:
    AWS_SAGEMAKER_API UserProfileDetails();
    AWS_SAGEMAKER_API UserProfileDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline UserProfileDetails& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UserProfileDetails& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UserProfileDetails& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }
    inline UserProfileDetails& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline UserProfileDetails& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline UserProfileDetails& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UserProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UserProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UserProfileDetails& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}
    inline UserProfileDetails& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline UserProfileDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UserProfileDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline UserProfileDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline UserProfileDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    UserProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
