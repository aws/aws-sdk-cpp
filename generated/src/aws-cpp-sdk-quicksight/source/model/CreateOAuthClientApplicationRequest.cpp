/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateOAuthClientApplicationRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOAuthClientApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_oAuthClientApplicationIdHasBeenSet) {
    payload.WithString("OAuthClientApplicationId", m_oAuthClientApplicationId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_oAuthClientAuthenticationTypeHasBeenSet) {
    payload.WithString("OAuthClientAuthenticationType",
                       OAuthClientAuthenticationTypeMapper::GetNameForOAuthClientAuthenticationType(m_oAuthClientAuthenticationType));
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("ClientSecret", m_clientSecret);
  }

  if (m_oAuthTokenEndpointUrlHasBeenSet) {
    payload.WithString("OAuthTokenEndpointUrl", m_oAuthTokenEndpointUrl);
  }

  if (m_oAuthAuthorizationEndpointUrlHasBeenSet) {
    payload.WithString("OAuthAuthorizationEndpointUrl", m_oAuthAuthorizationEndpointUrl);
  }

  if (m_oAuthScopesHasBeenSet) {
    payload.WithString("OAuthScopes", m_oAuthScopes);
  }

  if (m_dataSourceTypeHasBeenSet) {
    payload.WithString("DataSourceType", DataSourceTypeMapper::GetNameForDataSourceType(m_dataSourceType));
  }

  if (m_identityProviderVpcConnectionPropertiesHasBeenSet) {
    payload.WithObject("IdentityProviderVpcConnectionProperties", m_identityProviderVpcConnectionProperties.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
