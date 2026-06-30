/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContainerAssociationStatus.h>
#include <aws/network-firewall/model/ContainerMonitoringConfiguration.h>
#include <aws/network-firewall/model/ContainerMonitoringType.h>
#include <aws/network-firewall/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class DescribeContainerAssociationResult {
 public:
  AWS_NETWORKFIREWALL_API DescribeContainerAssociationResult() = default;
  AWS_NETWORKFIREWALL_API DescribeContainerAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DescribeContainerAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The descriptive name of the container association.</p>
   */
  inline const Aws::String& GetContainerAssociationName() const { return m_containerAssociationName; }
  template <typename ContainerAssociationNameT = Aws::String>
  void SetContainerAssociationName(ContainerAssociationNameT&& value) {
    m_containerAssociationNameHasBeenSet = true;
    m_containerAssociationName = std::forward<ContainerAssociationNameT>(value);
  }
  template <typename ContainerAssociationNameT = Aws::String>
  DescribeContainerAssociationResult& WithContainerAssociationName(ContainerAssociationNameT&& value) {
    SetContainerAssociationName(std::forward<ContainerAssociationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the container association.</p>
   */
  inline const Aws::String& GetContainerAssociationArn() const { return m_containerAssociationArn; }
  template <typename ContainerAssociationArnT = Aws::String>
  void SetContainerAssociationArn(ContainerAssociationArnT&& value) {
    m_containerAssociationArnHasBeenSet = true;
    m_containerAssociationArn = std::forward<ContainerAssociationArnT>(value);
  }
  template <typename ContainerAssociationArnT = Aws::String>
  DescribeContainerAssociationResult& WithContainerAssociationArn(ContainerAssociationArnT&& value) {
    SetContainerAssociationArn(std::forward<ContainerAssociationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the container association.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeContainerAssociationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of container orchestration platform. Either <code>ECS</code> or
   * <code>EKS</code>.</p>
   */
  inline ContainerMonitoringType GetType() const { return m_type; }
  inline void SetType(ContainerMonitoringType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DescribeContainerAssociationResult& WithType(ContainerMonitoringType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container monitoring configurations for this container association.</p>
   */
  inline const Aws::Vector<ContainerMonitoringConfiguration>& GetContainerMonitoringConfigurations() const {
    return m_containerMonitoringConfigurations;
  }
  template <typename ContainerMonitoringConfigurationsT = Aws::Vector<ContainerMonitoringConfiguration>>
  void SetContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    m_containerMonitoringConfigurationsHasBeenSet = true;
    m_containerMonitoringConfigurations = std::forward<ContainerMonitoringConfigurationsT>(value);
  }
  template <typename ContainerMonitoringConfigurationsT = Aws::Vector<ContainerMonitoringConfiguration>>
  DescribeContainerAssociationResult& WithContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    SetContainerMonitoringConfigurations(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  template <typename ContainerMonitoringConfigurationsT = ContainerMonitoringConfiguration>
  DescribeContainerAssociationResult& AddContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    m_containerMonitoringConfigurationsHasBeenSet = true;
    m_containerMonitoringConfigurations.emplace_back(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the container association.</p>
   */
  inline ContainerAssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ContainerAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeContainerAssociationResult& WithStatus(ContainerAssociationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CIDR blocks that have been resolved from the monitored
   * containers for this container association.</p>
   */
  inline int GetResolvedCidrCount() const { return m_resolvedCidrCount; }
  inline void SetResolvedCidrCount(int value) {
    m_resolvedCidrCountHasBeenSet = true;
    m_resolvedCidrCount = value;
  }
  inline DescribeContainerAssociationResult& WithResolvedCidrCount(int value) {
    SetResolvedCidrCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time that the container association was updated or resolved new
   * container IP addresses.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  DescribeContainerAssociationResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs associated with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeContainerAssociationResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeContainerAssociationResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the container association. The token marks the state of the
   * container association resource at the time of the request.</p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  DescribeContainerAssociationResult& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  DescribeContainerAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_containerAssociationName;

  Aws::String m_containerAssociationArn;

  Aws::String m_description;

  ContainerMonitoringType m_type{ContainerMonitoringType::NOT_SET};

  Aws::Vector<ContainerMonitoringConfiguration> m_containerMonitoringConfigurations;

  ContainerAssociationStatus m_status{ContainerAssociationStatus::NOT_SET};

  int m_resolvedCidrCount{0};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::Vector<Tag> m_tags;

  Aws::String m_updateToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_containerAssociationNameHasBeenSet = false;
  bool m_containerAssociationArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_containerMonitoringConfigurationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resolvedCidrCountHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
