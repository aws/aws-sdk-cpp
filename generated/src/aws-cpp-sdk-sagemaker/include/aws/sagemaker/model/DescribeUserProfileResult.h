/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserProfileStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeUserProfileResult
  {
  public:
    AWS_SAGEMAKER_API DescribeUserProfileResult();
    AWS_SAGEMAKER_API DescribeUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline DescribeUserProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline DescribeUserProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline DescribeUserProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArn = value; }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArn = std::move(value); }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(const char* value) { m_userProfileArn.assign(value); }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline DescribeUserProfileResult& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline DescribeUserProfileResult& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline DescribeUserProfileResult& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}


    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileName = value; }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileName = std::move(value); }

    /**
     * <p>The user profile name.</p>
     */
    inline void SetUserProfileName(const char* value) { m_userProfileName.assign(value); }

    /**
     * <p>The user profile name.</p>
     */
    inline DescribeUserProfileResult& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}

    /**
     * <p>The user profile name.</p>
     */
    inline DescribeUserProfileResult& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The user profile name.</p>
     */
    inline DescribeUserProfileResult& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}


    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemUid() const{ return m_homeEfsFileSystemUid; }

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(const Aws::String& value) { m_homeEfsFileSystemUid = value; }

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(Aws::String&& value) { m_homeEfsFileSystemUid = std::move(value); }

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(const char* value) { m_homeEfsFileSystemUid.assign(value); }

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(const Aws::String& value) { SetHomeEfsFileSystemUid(value); return *this;}

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(Aws::String&& value) { SetHomeEfsFileSystemUid(std::move(value)); return *this;}

    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System (EFS)
     * volume.</p>
     */
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(const char* value) { SetHomeEfsFileSystemUid(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const UserProfileStatus& value) { m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(UserProfileStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline DescribeUserProfileResult& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline DescribeUserProfileResult& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeUserProfileResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeUserProfileResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline DescribeUserProfileResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline DescribeUserProfileResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeUserProfileResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeUserProfileResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeUserProfileResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline const Aws::String& GetSingleSignOnUserIdentifier() const{ return m_singleSignOnUserIdentifier; }

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline void SetSingleSignOnUserIdentifier(const Aws::String& value) { m_singleSignOnUserIdentifier = value; }

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline void SetSingleSignOnUserIdentifier(Aws::String&& value) { m_singleSignOnUserIdentifier = std::move(value); }

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline void SetSingleSignOnUserIdentifier(const char* value) { m_singleSignOnUserIdentifier.assign(value); }

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(const Aws::String& value) { SetSingleSignOnUserIdentifier(value); return *this;}

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(Aws::String&& value) { SetSingleSignOnUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(const char* value) { SetSingleSignOnUserIdentifier(value); return *this;}


    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline const Aws::String& GetSingleSignOnUserValue() const{ return m_singleSignOnUserValue; }

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline void SetSingleSignOnUserValue(const Aws::String& value) { m_singleSignOnUserValue = value; }

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline void SetSingleSignOnUserValue(Aws::String&& value) { m_singleSignOnUserValue = std::move(value); }

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline void SetSingleSignOnUserValue(const char* value) { m_singleSignOnUserValue.assign(value); }

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(const Aws::String& value) { SetSingleSignOnUserValue(value); return *this;}

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(Aws::String&& value) { SetSingleSignOnUserValue(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(const char* value) { SetSingleSignOnUserValue(value); return *this;}


    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetUserSettings(const UserSettings& value) { m_userSettings = value; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetUserSettings(UserSettings&& value) { m_userSettings = std::move(value); }

    /**
     * <p>A collection of settings.</p>
     */
    inline DescribeUserProfileResult& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}

    /**
     * <p>A collection of settings.</p>
     */
    inline DescribeUserProfileResult& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;

    Aws::String m_userProfileArn;

    Aws::String m_userProfileName;

    Aws::String m_homeEfsFileSystemUid;

    UserProfileStatus m_status;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    Aws::String m_singleSignOnUserIdentifier;

    Aws::String m_singleSignOnUserValue;

    UserSettings m_userSettings;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
