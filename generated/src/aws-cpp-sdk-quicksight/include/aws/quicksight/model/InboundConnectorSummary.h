/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorConfig.h>
#include <aws/quicksight/model/InboundConnectorStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of an inbound connector, including its ID, ARN, name, status,
 * tenant URL, configuration, and timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InboundConnectorSummary">AWS
 * API Reference</a></p>
 */
class InboundConnectorSummary {
 public:
  AWS_QUICKSIGHT_API InboundConnectorSummary() = default;
  AWS_QUICKSIGHT_API InboundConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API InboundConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  InboundConnectorSummary& WithInboundConnectorId(InboundConnectorIdT&& value) {
    SetInboundConnectorId(std::forward<InboundConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the inbound connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  InboundConnectorSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the inbound connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InboundConnectorSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the inbound connector.</p>
   */
  inline InboundConnectorStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InboundConnectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InboundConnectorSummary& WithStatus(InboundConnectorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the inbound connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  InboundConnectorSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the inbound connector was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  InboundConnectorSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL that clients use to reach Quick Sight through the inbound
   * connector.</p>
   */
  inline const Aws::String& GetTenantUrl() const { return m_tenantUrl; }
  inline bool TenantUrlHasBeenSet() const { return m_tenantUrlHasBeenSet; }
  template <typename TenantUrlT = Aws::String>
  void SetTenantUrl(TenantUrlT&& value) {
    m_tenantUrlHasBeenSet = true;
    m_tenantUrl = std::forward<TenantUrlT>(value);
  }
  template <typename TenantUrlT = Aws::String>
  InboundConnectorSummary& WithTenantUrl(TenantUrlT&& value) {
    SetTenantUrl(std::forward<TenantUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the inbound connector.</p>
   */
  inline const InboundConnectorConfig& GetInboundConnectorConfiguration() const { return m_inboundConnectorConfiguration; }
  inline bool InboundConnectorConfigurationHasBeenSet() const { return m_inboundConnectorConfigurationHasBeenSet; }
  template <typename InboundConnectorConfigurationT = InboundConnectorConfig>
  void SetInboundConnectorConfiguration(InboundConnectorConfigurationT&& value) {
    m_inboundConnectorConfigurationHasBeenSet = true;
    m_inboundConnectorConfiguration = std::forward<InboundConnectorConfigurationT>(value);
  }
  template <typename InboundConnectorConfigurationT = InboundConnectorConfig>
  InboundConnectorSummary& WithInboundConnectorConfiguration(InboundConnectorConfigurationT&& value) {
    SetInboundConnectorConfiguration(std::forward<InboundConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the inbound connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  InboundConnectorSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inboundConnectorId;

  Aws::String m_arn;

  Aws::String m_name;

  InboundConnectorStatus m_status{InboundConnectorStatus::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_tenantUrl;

  InboundConnectorConfig m_inboundConnectorConfiguration;

  Aws::String m_description;
  bool m_inboundConnectorIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_tenantUrlHasBeenSet = false;
  bool m_inboundConnectorConfigurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
