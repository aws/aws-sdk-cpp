/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/UserIdentifier.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 * <p>///////////////////////// /////////////////////////</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetIdentityContextRequest">AWS
 * API Reference</a></p>
 */
class GetIdentityContextRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API GetIdentityContextRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIdentityContext"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID for the Amazon Web Services account that the user whose identity
   * context you want to retrieve is in. Currently, you use the ID for the Amazon Web
   * Services account that contains your Quick Sight account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  GetIdentityContextRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the user whose identity context you want to retrieve.</p>
   */
  inline const UserIdentifier& GetUserIdentifier() const { return m_userIdentifier; }
  inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
  template <typename UserIdentifierT = UserIdentifier>
  void SetUserIdentifier(UserIdentifierT&& value) {
    m_userIdentifierHasBeenSet = true;
    m_userIdentifier = std::forward<UserIdentifierT>(value);
  }
  template <typename UserIdentifierT = UserIdentifier>
  GetIdentityContextRequest& WithUserIdentifier(UserIdentifierT&& value) {
    SetUserIdentifier(std::forward<UserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the user that you want to get identity context for. This
   * parameter is required when the UserIdentifier is specified using Email or
   * UserName.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  GetIdentityContextRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the session will expire.</p>
   */
  inline const Aws::Utils::DateTime& GetSessionExpiresAt() const { return m_sessionExpiresAt; }
  inline bool SessionExpiresAtHasBeenSet() const { return m_sessionExpiresAtHasBeenSet; }
  template <typename SessionExpiresAtT = Aws::Utils::DateTime>
  void SetSessionExpiresAt(SessionExpiresAtT&& value) {
    m_sessionExpiresAtHasBeenSet = true;
    m_sessionExpiresAt = std::forward<SessionExpiresAtT>(value);
  }
  template <typename SessionExpiresAtT = Aws::Utils::DateTime>
  GetIdentityContextRequest& WithSessionExpiresAt(SessionExpiresAtT&& value) {
    SetSessionExpiresAt(std::forward<SessionExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  UserIdentifier m_userIdentifier;

  Aws::String m_namespace;

  Aws::Utils::DateTime m_sessionExpiresAt{};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_userIdentifierHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_sessionExpiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
