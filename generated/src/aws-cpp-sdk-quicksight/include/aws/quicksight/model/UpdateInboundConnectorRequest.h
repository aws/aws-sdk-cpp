/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorConfig.h>
#include <aws/quicksight/model/InboundConnectorStatus.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateInboundConnectorRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateInboundConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateInboundConnector"; }

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
  UpdateInboundConnectorRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the inbound connector.</p>
   */
  inline const Aws::String& GetInboundConnectorId() const { return m_inboundConnectorId; }
  inline bool InboundConnectorIdHasBeenSet() const { return m_inboundConnectorIdHasBeenSet; }
  template <typename InboundConnectorIdT = Aws::String>
  void SetInboundConnectorId(InboundConnectorIdT&& value) {
    m_inboundConnectorIdHasBeenSet = true;
    m_inboundConnectorId = std::forward<InboundConnectorIdT>(value);
  }
  template <typename InboundConnectorIdT = Aws::String>
  UpdateInboundConnectorRequest& WithInboundConnectorId(InboundConnectorIdT&& value) {
    SetInboundConnectorId(std::forward<InboundConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the inbound connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateInboundConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description of the inbound connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateInboundConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new configuration of the inbound connector. You can't change the
   * <code>InboundConnectorType</code>.</p>
   */
  inline const InboundConnectorConfig& GetInboundConnectorConfiguration() const { return m_inboundConnectorConfiguration; }
  inline bool InboundConnectorConfigurationHasBeenSet() const { return m_inboundConnectorConfigurationHasBeenSet; }
  template <typename InboundConnectorConfigurationT = InboundConnectorConfig>
  void SetInboundConnectorConfiguration(InboundConnectorConfigurationT&& value) {
    m_inboundConnectorConfigurationHasBeenSet = true;
    m_inboundConnectorConfiguration = std::forward<InboundConnectorConfigurationT>(value);
  }
  template <typename InboundConnectorConfigurationT = InboundConnectorConfig>
  UpdateInboundConnectorRequest& WithInboundConnectorConfiguration(InboundConnectorConfigurationT&& value) {
    SetInboundConnectorConfiguration(std::forward<InboundConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status of the inbound connector.</p>
   */
  inline InboundConnectorStatus GetInboundConnectorStatus() const { return m_inboundConnectorStatus; }
  inline bool InboundConnectorStatusHasBeenSet() const { return m_inboundConnectorStatusHasBeenSet; }
  inline void SetInboundConnectorStatus(InboundConnectorStatus value) {
    m_inboundConnectorStatusHasBeenSet = true;
    m_inboundConnectorStatus = value;
  }
  inline UpdateInboundConnectorRequest& WithInboundConnectorStatus(InboundConnectorStatus value) {
    SetInboundConnectorStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_inboundConnectorId;

  Aws::String m_name;

  Aws::String m_description;

  InboundConnectorConfig m_inboundConnectorConfiguration;

  InboundConnectorStatus m_inboundConnectorStatus{InboundConnectorStatus::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_inboundConnectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_inboundConnectorConfigurationHasBeenSet = false;
  bool m_inboundConnectorStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
