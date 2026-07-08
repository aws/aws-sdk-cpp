/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CloudConnectorConfiguration.h>

#include <utility>

namespace Aws {
namespace SSM {
namespace Model {

/**
 */
class UpdateCloudConnectorRequest : public SSMRequest {
 public:
  AWS_SSM_API UpdateCloudConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudConnector"; }

  AWS_SSM_API Aws::String SerializePayload() const override;

  AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the cloud connector to update.</p>
   */
  inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
  inline bool CloudConnectorIdHasBeenSet() const { return m_cloudConnectorIdHasBeenSet; }
  template <typename CloudConnectorIdT = Aws::String>
  void SetCloudConnectorId(CloudConnectorIdT&& value) {
    m_cloudConnectorIdHasBeenSet = true;
    m_cloudConnectorId = std::forward<CloudConnectorIdT>(value);
  }
  template <typename CloudConnectorIdT = Aws::String>
  UpdateCloudConnectorRequest& WithCloudConnectorId(CloudConnectorIdT&& value) {
    SetCloudConnectorId(std::forward<CloudConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new friendly name for the cloud connector.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateCloudConnectorRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration details for connecting to the third-party cloud
   * environment.</p>
   */
  inline const CloudConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  UpdateCloudConnectorRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the cloud connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateCloudConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudConnectorId;

  Aws::String m_displayName;

  CloudConnectorConfiguration m_configuration;

  Aws::String m_description;
  bool m_cloudConnectorIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
