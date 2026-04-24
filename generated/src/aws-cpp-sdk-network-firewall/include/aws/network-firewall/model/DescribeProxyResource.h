/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListenerProperty.h>
#include <aws/network-firewall/model/ProxyModifyState.h>
#include <aws/network-firewall/model/ProxyState.h>
#include <aws/network-firewall/model/Tag.h>
#include <aws/network-firewall/model/TlsInterceptProperties.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Proxy attached to a NAT gateway. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeProxyResource">AWS
 * API Reference</a></p>
 */
class DescribeProxyResource {
 public:
  AWS_NETWORKFIREWALL_API DescribeProxyResource() = default;
  AWS_NETWORKFIREWALL_API DescribeProxyResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API DescribeProxyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The descriptive name of the proxy. You can't change the name of a proxy after
   * you create it.</p>
   */
  inline const Aws::String& GetProxyName() const { return m_proxyName; }
  inline bool ProxyNameHasBeenSet() const { return m_proxyNameHasBeenSet; }
  template <typename ProxyNameT = Aws::String>
  void SetProxyName(ProxyNameT&& value) {
    m_proxyNameHasBeenSet = true;
    m_proxyName = std::forward<ProxyNameT>(value);
  }
  template <typename ProxyNameT = Aws::String>
  DescribeProxyResource& WithProxyName(ProxyNameT&& value) {
    SetProxyName(std::forward<ProxyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy.</p>
   */
  inline const Aws::String& GetProxyArn() const { return m_proxyArn; }
  inline bool ProxyArnHasBeenSet() const { return m_proxyArnHasBeenSet; }
  template <typename ProxyArnT = Aws::String>
  void SetProxyArn(ProxyArnT&& value) {
    m_proxyArnHasBeenSet = true;
    m_proxyArn = std::forward<ProxyArnT>(value);
  }
  template <typename ProxyArnT = Aws::String>
  DescribeProxyResource& WithProxyArn(ProxyArnT&& value) {
    SetProxyArn(std::forward<ProxyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  inline bool ProxyConfigurationNameHasBeenSet() const { return m_proxyConfigurationNameHasBeenSet; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  DescribeProxyResource& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  inline bool ProxyConfigurationArnHasBeenSet() const { return m_proxyConfigurationArnHasBeenSet; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  DescribeProxyResource& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT Gateway for the proxy. </p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  DescribeProxyResource& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current attachment/detachment status of the Proxy. </p>
   */
  inline ProxyState GetProxyState() const { return m_proxyState; }
  inline bool ProxyStateHasBeenSet() const { return m_proxyStateHasBeenSet; }
  inline void SetProxyState(ProxyState value) {
    m_proxyStateHasBeenSet = true;
    m_proxyState = value;
  }
  inline DescribeProxyResource& WithProxyState(ProxyState value) {
    SetProxyState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current modification status of the Proxy. </p>
   */
  inline ProxyModifyState GetProxyModifyState() const { return m_proxyModifyState; }
  inline bool ProxyModifyStateHasBeenSet() const { return m_proxyModifyStateHasBeenSet; }
  inline void SetProxyModifyState(ProxyModifyState value) {
    m_proxyModifyStateHasBeenSet = true;
    m_proxyModifyState = value;
  }
  inline DescribeProxyResource& WithProxyModifyState(ProxyModifyState value) {
    SetProxyModifyState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Listener properties for HTTP and HTTPS traffic. </p>
   */
  inline const Aws::Vector<ListenerProperty>& GetListenerProperties() const { return m_listenerProperties; }
  inline bool ListenerPropertiesHasBeenSet() const { return m_listenerPropertiesHasBeenSet; }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  void SetListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties = std::forward<ListenerPropertiesT>(value);
  }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  DescribeProxyResource& WithListenerProperties(ListenerPropertiesT&& value) {
    SetListenerProperties(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  template <typename ListenerPropertiesT = ListenerProperty>
  DescribeProxyResource& AddListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties.emplace_back(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>TLS decryption on traffic to filter on attributes in the HTTP header. </p>
   */
  inline const TlsInterceptProperties& GetTlsInterceptProperties() const { return m_tlsInterceptProperties; }
  inline bool TlsInterceptPropertiesHasBeenSet() const { return m_tlsInterceptPropertiesHasBeenSet; }
  template <typename TlsInterceptPropertiesT = TlsInterceptProperties>
  void SetTlsInterceptProperties(TlsInterceptPropertiesT&& value) {
    m_tlsInterceptPropertiesHasBeenSet = true;
    m_tlsInterceptProperties = std::forward<TlsInterceptPropertiesT>(value);
  }
  template <typename TlsInterceptPropertiesT = TlsInterceptProperties>
  DescribeProxyResource& WithTlsInterceptProperties(TlsInterceptPropertiesT&& value) {
    SetTlsInterceptProperties(std::forward<TlsInterceptPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service endpoint created in the VPC. </p>
   */
  inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
  inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
  template <typename VpcEndpointServiceNameT = Aws::String>
  void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) {
    m_vpcEndpointServiceNameHasBeenSet = true;
    m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value);
  }
  template <typename VpcEndpointServiceNameT = Aws::String>
  DescribeProxyResource& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) {
    SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private DNS name of the Proxy. </p>
   */
  inline const Aws::String& GetPrivateDNSName() const { return m_privateDNSName; }
  inline bool PrivateDNSNameHasBeenSet() const { return m_privateDNSNameHasBeenSet; }
  template <typename PrivateDNSNameT = Aws::String>
  void SetPrivateDNSName(PrivateDNSNameT&& value) {
    m_privateDNSNameHasBeenSet = true;
    m_privateDNSName = std::forward<PrivateDNSNameT>(value);
  }
  template <typename PrivateDNSNameT = Aws::String>
  DescribeProxyResource& WithPrivateDNSName(PrivateDNSNameT&& value) {
    SetPrivateDNSName(std::forward<PrivateDNSNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  DescribeProxyResource& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy was deleted. </p>
   */
  inline const Aws::Utils::DateTime& GetDeleteTime() const { return m_deleteTime; }
  inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  void SetDeleteTime(DeleteTimeT&& value) {
    m_deleteTimeHasBeenSet = true;
    m_deleteTime = std::forward<DeleteTimeT>(value);
  }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  DescribeProxyResource& WithDeleteTime(DeleteTimeT&& value) {
    SetDeleteTime(std::forward<DeleteTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy was updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  DescribeProxyResource& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure code for cases when the Proxy fails to attach or update. </p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  DescribeProxyResource& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure message for cases when the Proxy fails to attach or update. </p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  DescribeProxyResource& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs to associate with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeProxyResource& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeProxyResource& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyName;

  Aws::String m_proxyArn;

  Aws::String m_proxyConfigurationName;

  Aws::String m_proxyConfigurationArn;

  Aws::String m_natGatewayId;

  ProxyState m_proxyState{ProxyState::NOT_SET};

  ProxyModifyState m_proxyModifyState{ProxyModifyState::NOT_SET};

  Aws::Vector<ListenerProperty> m_listenerProperties;

  TlsInterceptProperties m_tlsInterceptProperties;

  Aws::String m_vpcEndpointServiceName;

  Aws::String m_privateDNSName;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_deleteTime{};

  Aws::Utils::DateTime m_updateTime{};

  Aws::String m_failureCode;

  Aws::String m_failureMessage;

  Aws::Vector<Tag> m_tags;
  bool m_proxyNameHasBeenSet = false;
  bool m_proxyArnHasBeenSet = false;
  bool m_proxyConfigurationNameHasBeenSet = false;
  bool m_proxyConfigurationArnHasBeenSet = false;
  bool m_natGatewayIdHasBeenSet = false;
  bool m_proxyStateHasBeenSet = false;
  bool m_proxyModifyStateHasBeenSet = false;
  bool m_listenerPropertiesHasBeenSet = false;
  bool m_tlsInterceptPropertiesHasBeenSet = false;
  bool m_vpcEndpointServiceNameHasBeenSet = false;
  bool m_privateDNSNameHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_deleteTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
