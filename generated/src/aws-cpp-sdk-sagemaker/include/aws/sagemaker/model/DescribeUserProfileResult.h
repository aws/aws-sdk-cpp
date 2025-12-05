/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/UserProfileStatus.h>
#include <aws/sagemaker/model/UserSettings.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeUserProfileResult {
 public:
  AWS_SAGEMAKER_API DescribeUserProfileResult() = default;
  AWS_SAGEMAKER_API DescribeUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the domain that contains the profile.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  DescribeUserProfileResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user profile Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetUserProfileArn() const { return m_userProfileArn; }
  template <typename UserProfileArnT = Aws::String>
  void SetUserProfileArn(UserProfileArnT&& value) {
    m_userProfileArnHasBeenSet = true;
    m_userProfileArn = std::forward<UserProfileArnT>(value);
  }
  template <typename UserProfileArnT = Aws::String>
  DescribeUserProfileResult& WithUserProfileArn(UserProfileArnT&& value) {
    SetUserProfileArn(std::forward<UserProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user profile name.</p>
   */
  inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
  template <typename UserProfileNameT = Aws::String>
  void SetUserProfileName(UserProfileNameT&& value) {
    m_userProfileNameHasBeenSet = true;
    m_userProfileName = std::forward<UserProfileNameT>(value);
  }
  template <typename UserProfileNameT = Aws::String>
  DescribeUserProfileResult& WithUserProfileName(UserProfileNameT&& value) {
    SetUserProfileName(std::forward<UserProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the user's profile in the Amazon Elastic File System volume.</p>
   */
  inline const Aws::String& GetHomeEfsFileSystemUid() const { return m_homeEfsFileSystemUid; }
  template <typename HomeEfsFileSystemUidT = Aws::String>
  void SetHomeEfsFileSystemUid(HomeEfsFileSystemUidT&& value) {
    m_homeEfsFileSystemUidHasBeenSet = true;
    m_homeEfsFileSystemUid = std::forward<HomeEfsFileSystemUidT>(value);
  }
  template <typename HomeEfsFileSystemUidT = Aws::String>
  DescribeUserProfileResult& WithHomeEfsFileSystemUid(HomeEfsFileSystemUidT&& value) {
    SetHomeEfsFileSystemUid(std::forward<HomeEfsFileSystemUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status.</p>
   */
  inline UserProfileStatus GetStatus() const { return m_status; }
  inline void SetStatus(UserProfileStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeUserProfileResult& WithStatus(UserProfileStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last modified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeUserProfileResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The creation time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeUserProfileResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure reason.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  DescribeUserProfileResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM Identity Center user identifier.</p>
   */
  inline const Aws::String& GetSingleSignOnUserIdentifier() const { return m_singleSignOnUserIdentifier; }
  template <typename SingleSignOnUserIdentifierT = Aws::String>
  void SetSingleSignOnUserIdentifier(SingleSignOnUserIdentifierT&& value) {
    m_singleSignOnUserIdentifierHasBeenSet = true;
    m_singleSignOnUserIdentifier = std::forward<SingleSignOnUserIdentifierT>(value);
  }
  template <typename SingleSignOnUserIdentifierT = Aws::String>
  DescribeUserProfileResult& WithSingleSignOnUserIdentifier(SingleSignOnUserIdentifierT&& value) {
    SetSingleSignOnUserIdentifier(std::forward<SingleSignOnUserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM Identity Center user value.</p>
   */
  inline const Aws::String& GetSingleSignOnUserValue() const { return m_singleSignOnUserValue; }
  template <typename SingleSignOnUserValueT = Aws::String>
  void SetSingleSignOnUserValue(SingleSignOnUserValueT&& value) {
    m_singleSignOnUserValueHasBeenSet = true;
    m_singleSignOnUserValue = std::forward<SingleSignOnUserValueT>(value);
  }
  template <typename SingleSignOnUserValueT = Aws::String>
  DescribeUserProfileResult& WithSingleSignOnUserValue(SingleSignOnUserValueT&& value) {
    SetSingleSignOnUserValue(std::forward<SingleSignOnUserValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A collection of settings.</p>
   */
  inline const UserSettings& GetUserSettings() const { return m_userSettings; }
  template <typename UserSettingsT = UserSettings>
  void SetUserSettings(UserSettingsT&& value) {
    m_userSettingsHasBeenSet = true;
    m_userSettings = std::forward<UserSettingsT>(value);
  }
  template <typename UserSettingsT = UserSettings>
  DescribeUserProfileResult& WithUserSettings(UserSettingsT&& value) {
    SetUserSettings(std::forward<UserSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeUserProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_userProfileArn;

  Aws::String m_userProfileName;

  Aws::String m_homeEfsFileSystemUid;

  UserProfileStatus m_status{UserProfileStatus::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_failureReason;

  Aws::String m_singleSignOnUserIdentifier;

  Aws::String m_singleSignOnUserValue;

  UserSettings m_userSettings;

  Aws::String m_requestId;
  bool m_domainIdHasBeenSet = false;
  bool m_userProfileArnHasBeenSet = false;
  bool m_userProfileNameHasBeenSet = false;
  bool m_homeEfsFileSystemUidHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_singleSignOnUserIdentifierHasBeenSet = false;
  bool m_singleSignOnUserValueHasBeenSet = false;
  bool m_userSettingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
