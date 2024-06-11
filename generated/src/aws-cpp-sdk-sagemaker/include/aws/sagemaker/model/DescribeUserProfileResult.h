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


    ///@{
    /**
     * <p>The ID of the domain that contains the profile.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline DescribeUserProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeUserProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArn = value; }
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArn = std::move(value); }
    inline void SetUserProfileArn(const char* value) { m_userProfileArn.assign(value); }
    inline DescribeUserProfileResult& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}
    inline DescribeUserProfileResult& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileName.assign(value); }
    inline DescribeUserProfileResult& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline DescribeUserProfileResult& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user's profile in the Amazon Elastic File System volume.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemUid() const{ return m_homeEfsFileSystemUid; }
    inline void SetHomeEfsFileSystemUid(const Aws::String& value) { m_homeEfsFileSystemUid = value; }
    inline void SetHomeEfsFileSystemUid(Aws::String&& value) { m_homeEfsFileSystemUid = std::move(value); }
    inline void SetHomeEfsFileSystemUid(const char* value) { m_homeEfsFileSystemUid.assign(value); }
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(const Aws::String& value) { SetHomeEfsFileSystemUid(value); return *this;}
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(Aws::String&& value) { SetHomeEfsFileSystemUid(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithHomeEfsFileSystemUid(const char* value) { SetHomeEfsFileSystemUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const UserProfileStatus& value) { m_status = value; }
    inline void SetStatus(UserProfileStatus&& value) { m_status = std::move(value); }
    inline DescribeUserProfileResult& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}
    inline DescribeUserProfileResult& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeUserProfileResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeUserProfileResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeUserProfileResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeUserProfileResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeUserProfileResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeUserProfileResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center user identifier.</p>
     */
    inline const Aws::String& GetSingleSignOnUserIdentifier() const{ return m_singleSignOnUserIdentifier; }
    inline void SetSingleSignOnUserIdentifier(const Aws::String& value) { m_singleSignOnUserIdentifier = value; }
    inline void SetSingleSignOnUserIdentifier(Aws::String&& value) { m_singleSignOnUserIdentifier = std::move(value); }
    inline void SetSingleSignOnUserIdentifier(const char* value) { m_singleSignOnUserIdentifier.assign(value); }
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(const Aws::String& value) { SetSingleSignOnUserIdentifier(value); return *this;}
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(Aws::String&& value) { SetSingleSignOnUserIdentifier(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithSingleSignOnUserIdentifier(const char* value) { SetSingleSignOnUserIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center user value.</p>
     */
    inline const Aws::String& GetSingleSignOnUserValue() const{ return m_singleSignOnUserValue; }
    inline void SetSingleSignOnUserValue(const Aws::String& value) { m_singleSignOnUserValue = value; }
    inline void SetSingleSignOnUserValue(Aws::String&& value) { m_singleSignOnUserValue = std::move(value); }
    inline void SetSingleSignOnUserValue(const char* value) { m_singleSignOnUserValue.assign(value); }
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(const Aws::String& value) { SetSingleSignOnUserValue(value); return *this;}
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(Aws::String&& value) { SetSingleSignOnUserValue(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithSingleSignOnUserValue(const char* value) { SetSingleSignOnUserValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }
    inline void SetUserSettings(const UserSettings& value) { m_userSettings = value; }
    inline void SetUserSettings(UserSettings&& value) { m_userSettings = std::move(value); }
    inline DescribeUserProfileResult& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}
    inline DescribeUserProfileResult& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUserProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUserProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
