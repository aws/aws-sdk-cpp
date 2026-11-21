/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateAccessControlApplicationSecretRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateAccessControlApplicationSecretRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessControlApplicationSecret"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Sight
   * account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateAccessControlApplicationSecretRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access control application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  UpdateAccessControlApplicationSecretRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the client secret.</p>
   */
  inline const Aws::String& GetClientSecretId() const { return m_clientSecretId; }
  inline bool ClientSecretIdHasBeenSet() const { return m_clientSecretIdHasBeenSet; }
  template <typename ClientSecretIdT = Aws::String>
  void SetClientSecretId(ClientSecretIdT&& value) {
    m_clientSecretIdHasBeenSet = true;
    m_clientSecretId = std::forward<ClientSecretIdT>(value);
  }
  template <typename ClientSecretIdT = Aws::String>
  UpdateAccessControlApplicationSecretRequest& WithClientSecretId(ClientSecretIdT&& value) {
    SetClientSecretId(std::forward<ClientSecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region ARNs to add or replace. The Region in each ARN must match its
   * key.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetUpdateRegionalSecretManagerArns() const { return m_updateRegionalSecretManagerArns; }
  inline bool UpdateRegionalSecretManagerArnsHasBeenSet() const { return m_updateRegionalSecretManagerArnsHasBeenSet; }
  template <typename UpdateRegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetUpdateRegionalSecretManagerArns(UpdateRegionalSecretManagerArnsT&& value) {
    m_updateRegionalSecretManagerArnsHasBeenSet = true;
    m_updateRegionalSecretManagerArns = std::forward<UpdateRegionalSecretManagerArnsT>(value);
  }
  template <typename UpdateRegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  UpdateAccessControlApplicationSecretRequest& WithUpdateRegionalSecretManagerArns(UpdateRegionalSecretManagerArnsT&& value) {
    SetUpdateRegionalSecretManagerArns(std::forward<UpdateRegionalSecretManagerArnsT>(value));
    return *this;
  }
  template <typename UpdateRegionalSecretManagerArnsKeyT = Aws::String, typename UpdateRegionalSecretManagerArnsValueT = Aws::String>
  UpdateAccessControlApplicationSecretRequest& AddUpdateRegionalSecretManagerArns(UpdateRegionalSecretManagerArnsKeyT&& key,
                                                                                  UpdateRegionalSecretManagerArnsValueT&& value) {
    m_updateRegionalSecretManagerArnsHasBeenSet = true;
    m_updateRegionalSecretManagerArns.emplace(std::forward<UpdateRegionalSecretManagerArnsKeyT>(key),
                                              std::forward<UpdateRegionalSecretManagerArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regions whose ARNs to remove. You can't remove the last remaining Region.
   * To remove it, delete the client secret instead.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoveRegionalSecretManagerArns() const { return m_removeRegionalSecretManagerArns; }
  inline bool RemoveRegionalSecretManagerArnsHasBeenSet() const { return m_removeRegionalSecretManagerArnsHasBeenSet; }
  template <typename RemoveRegionalSecretManagerArnsT = Aws::Vector<Aws::String>>
  void SetRemoveRegionalSecretManagerArns(RemoveRegionalSecretManagerArnsT&& value) {
    m_removeRegionalSecretManagerArnsHasBeenSet = true;
    m_removeRegionalSecretManagerArns = std::forward<RemoveRegionalSecretManagerArnsT>(value);
  }
  template <typename RemoveRegionalSecretManagerArnsT = Aws::Vector<Aws::String>>
  UpdateAccessControlApplicationSecretRequest& WithRemoveRegionalSecretManagerArns(RemoveRegionalSecretManagerArnsT&& value) {
    SetRemoveRegionalSecretManagerArns(std::forward<RemoveRegionalSecretManagerArnsT>(value));
    return *this;
  }
  template <typename RemoveRegionalSecretManagerArnsT = Aws::String>
  UpdateAccessControlApplicationSecretRequest& AddRemoveRegionalSecretManagerArns(RemoveRegionalSecretManagerArnsT&& value) {
    m_removeRegionalSecretManagerArnsHasBeenSet = true;
    m_removeRegionalSecretManagerArns.emplace_back(std::forward<RemoveRegionalSecretManagerArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_applicationId;

  Aws::String m_clientSecretId;

  Aws::Map<Aws::String, Aws::String> m_updateRegionalSecretManagerArns;

  Aws::Vector<Aws::String> m_removeRegionalSecretManagerArns;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_clientSecretIdHasBeenSet = false;
  bool m_updateRegionalSecretManagerArnsHasBeenSet = false;
  bool m_removeRegionalSecretManagerArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
