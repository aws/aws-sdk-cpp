/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ClientSecretConfiguration.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateAccessControlApplicationSecretRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateAccessControlApplicationSecretRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAccessControlApplicationSecret"; }

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
  CreateAccessControlApplicationSecretRequest& WithAwsAccountId(AwsAccountIdT&& value) {
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
  CreateAccessControlApplicationSecretRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the client secret, for example
   * <code>rotation-june-2026</code>. If you don't provide a description, the client
   * secret has no description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateAccessControlApplicationSecretRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the client secret, which is your IdP, and the Amazon Web
   * Services Secrets Manager ARNs of the secret.</p>
   */
  inline const ClientSecretConfiguration& GetClientSecretConfiguration() const { return m_clientSecretConfiguration; }
  inline bool ClientSecretConfigurationHasBeenSet() const { return m_clientSecretConfigurationHasBeenSet; }
  template <typename ClientSecretConfigurationT = ClientSecretConfiguration>
  void SetClientSecretConfiguration(ClientSecretConfigurationT&& value) {
    m_clientSecretConfigurationHasBeenSet = true;
    m_clientSecretConfiguration = std::forward<ClientSecretConfigurationT>(value);
  }
  template <typename ClientSecretConfigurationT = ClientSecretConfiguration>
  CreateAccessControlApplicationSecretRequest& WithClientSecretConfiguration(ClientSecretConfigurationT&& value) {
    SetClientSecretConfiguration(std::forward<ClientSecretConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_applicationId;

  Aws::String m_description;

  ClientSecretConfiguration m_clientSecretConfiguration;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientSecretConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
