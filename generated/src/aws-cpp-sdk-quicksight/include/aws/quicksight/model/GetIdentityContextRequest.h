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
 * <p/><p><h3>See Also:</h3>   <a
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

  ///@{
  /**
   * <p>The region in which the context is to be used. Use this parameter to obtain
   * an identity context for cross-region use.</p> <p>The specified region must meet
   * the following conditions:</p> <ul> <li> <p>The region must be in the same Amazon
   * Web Services partition as the region you are calling from. Cross-partition
   * requests are not supported. For example, you cannot specify a region in the
   * <code>aws-cn</code> partition when calling from a region in the <code>aws</code>
   * partition.</p> </li> <li> <p>It must be a valid Amazon QuickSight supported
   * region.</p> </li> <li> <p>The calling customer account must be enabled in the
   * specified context region.</p> </li> <li> <p>This parameter is not supported when
   * calling from an opt-in region.</p> </li> </ul>
   */
  inline const Aws::String& GetContextRegion() const { return m_contextRegion; }
  inline bool ContextRegionHasBeenSet() const { return m_contextRegionHasBeenSet; }
  template <typename ContextRegionT = Aws::String>
  void SetContextRegion(ContextRegionT&& value) {
    m_contextRegionHasBeenSet = true;
    m_contextRegion = std::forward<ContextRegionT>(value);
  }
  template <typename ContextRegionT = Aws::String>
  GetIdentityContextRequest& WithContextRegion(ContextRegionT&& value) {
    SetContextRegion(std::forward<ContextRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  UserIdentifier m_userIdentifier;

  Aws::String m_namespace;

  Aws::Utils::DateTime m_sessionExpiresAt{};

  Aws::String m_contextRegion;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_userIdentifierHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_sessionExpiresAtHasBeenSet = false;
  bool m_contextRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
