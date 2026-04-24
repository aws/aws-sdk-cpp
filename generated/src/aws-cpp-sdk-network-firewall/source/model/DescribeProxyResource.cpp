/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeProxyResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

DescribeProxyResource::DescribeProxyResource(JsonView jsonValue) { *this = jsonValue; }

DescribeProxyResource& DescribeProxyResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyName")) {
    m_proxyName = jsonValue.GetString("ProxyName");
    m_proxyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyArn")) {
    m_proxyArn = jsonValue.GetString("ProxyArn");
    m_proxyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyConfigurationName")) {
    m_proxyConfigurationName = jsonValue.GetString("ProxyConfigurationName");
    m_proxyConfigurationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyConfigurationArn")) {
    m_proxyConfigurationArn = jsonValue.GetString("ProxyConfigurationArn");
    m_proxyConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatGatewayId")) {
    m_natGatewayId = jsonValue.GetString("NatGatewayId");
    m_natGatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyState")) {
    m_proxyState = ProxyStateMapper::GetProxyStateForName(jsonValue.GetString("ProxyState"));
    m_proxyStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyModifyState")) {
    m_proxyModifyState = ProxyModifyStateMapper::GetProxyModifyStateForName(jsonValue.GetString("ProxyModifyState"));
    m_proxyModifyStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListenerProperties")) {
    Aws::Utils::Array<JsonView> listenerPropertiesJsonList = jsonValue.GetArray("ListenerProperties");
    for (unsigned listenerPropertiesIndex = 0; listenerPropertiesIndex < listenerPropertiesJsonList.GetLength();
         ++listenerPropertiesIndex) {
      m_listenerProperties.push_back(listenerPropertiesJsonList[listenerPropertiesIndex].AsObject());
    }
    m_listenerPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TlsInterceptProperties")) {
    m_tlsInterceptProperties = jsonValue.GetObject("TlsInterceptProperties");
    m_tlsInterceptPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcEndpointServiceName")) {
    m_vpcEndpointServiceName = jsonValue.GetString("VpcEndpointServiceName");
    m_vpcEndpointServiceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrivateDNSName")) {
    m_privateDNSName = jsonValue.GetString("PrivateDNSName");
    m_privateDNSNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateTime")) {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeleteTime")) {
    m_deleteTime = jsonValue.GetDouble("DeleteTime");
    m_deleteTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateTime")) {
    m_updateTime = jsonValue.GetDouble("UpdateTime");
    m_updateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCode")) {
    m_failureCode = jsonValue.GetString("FailureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureMessage")) {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeProxyResource::Jsonize() const {
  JsonValue payload;

  if (m_proxyNameHasBeenSet) {
    payload.WithString("ProxyName", m_proxyName);
  }

  if (m_proxyArnHasBeenSet) {
    payload.WithString("ProxyArn", m_proxyArn);
  }

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  if (m_natGatewayIdHasBeenSet) {
    payload.WithString("NatGatewayId", m_natGatewayId);
  }

  if (m_proxyStateHasBeenSet) {
    payload.WithString("ProxyState", ProxyStateMapper::GetNameForProxyState(m_proxyState));
  }

  if (m_proxyModifyStateHasBeenSet) {
    payload.WithString("ProxyModifyState", ProxyModifyStateMapper::GetNameForProxyModifyState(m_proxyModifyState));
  }

  if (m_listenerPropertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> listenerPropertiesJsonList(m_listenerProperties.size());
    for (unsigned listenerPropertiesIndex = 0; listenerPropertiesIndex < listenerPropertiesJsonList.GetLength();
         ++listenerPropertiesIndex) {
      listenerPropertiesJsonList[listenerPropertiesIndex].AsObject(m_listenerProperties[listenerPropertiesIndex].Jsonize());
    }
    payload.WithArray("ListenerProperties", std::move(listenerPropertiesJsonList));
  }

  if (m_tlsInterceptPropertiesHasBeenSet) {
    payload.WithObject("TlsInterceptProperties", m_tlsInterceptProperties.Jsonize());
  }

  if (m_vpcEndpointServiceNameHasBeenSet) {
    payload.WithString("VpcEndpointServiceName", m_vpcEndpointServiceName);
  }

  if (m_privateDNSNameHasBeenSet) {
    payload.WithString("PrivateDNSName", m_privateDNSName);
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_deleteTimeHasBeenSet) {
    payload.WithDouble("DeleteTime", m_deleteTime.SecondsWithMSPrecision());
  }

  if (m_updateTimeHasBeenSet) {
    payload.WithDouble("UpdateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("FailureCode", m_failureCode);
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("FailureMessage", m_failureMessage);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
