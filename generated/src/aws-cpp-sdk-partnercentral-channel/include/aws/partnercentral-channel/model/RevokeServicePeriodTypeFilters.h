/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ServicePeriodType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Filters specific to revoke service period handshakes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/RevokeServicePeriodTypeFilters">AWS
 * API Reference</a></p>
 */
class RevokeServicePeriodTypeFilters {
 public:
  AWS_PARTNERCENTRALCHANNEL_API RevokeServicePeriodTypeFilters() = default;
  AWS_PARTNERCENTRALCHANNEL_API RevokeServicePeriodTypeFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API RevokeServicePeriodTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by service period types.</p>
   */
  inline const Aws::Vector<ServicePeriodType>& GetServicePeriodTypes() const { return m_servicePeriodTypes; }
  inline bool ServicePeriodTypesHasBeenSet() const { return m_servicePeriodTypesHasBeenSet; }
  template <typename ServicePeriodTypesT = Aws::Vector<ServicePeriodType>>
  void SetServicePeriodTypes(ServicePeriodTypesT&& value) {
    m_servicePeriodTypesHasBeenSet = true;
    m_servicePeriodTypes = std::forward<ServicePeriodTypesT>(value);
  }
  template <typename ServicePeriodTypesT = Aws::Vector<ServicePeriodType>>
  RevokeServicePeriodTypeFilters& WithServicePeriodTypes(ServicePeriodTypesT&& value) {
    SetServicePeriodTypes(std::forward<ServicePeriodTypesT>(value));
    return *this;
  }
  inline RevokeServicePeriodTypeFilters& AddServicePeriodTypes(ServicePeriodType value) {
    m_servicePeriodTypesHasBeenSet = true;
    m_servicePeriodTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ServicePeriodType> m_servicePeriodTypes;
  bool m_servicePeriodTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
