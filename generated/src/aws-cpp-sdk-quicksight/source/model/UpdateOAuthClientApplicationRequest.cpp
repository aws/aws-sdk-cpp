/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateOAuthClientApplicationRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOAuthClientApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
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

  return payload.View().WriteReadable();
}
