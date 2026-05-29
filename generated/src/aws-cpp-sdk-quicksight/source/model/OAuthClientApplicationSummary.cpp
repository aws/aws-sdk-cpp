/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/OAuthClientApplicationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

OAuthClientApplicationSummary::OAuthClientApplicationSummary(JsonView jsonValue) { *this = jsonValue; }

OAuthClientApplicationSummary& OAuthClientApplicationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OAuthClientApplicationId")) {
    m_oAuthClientApplicationId = jsonValue.GetString("OAuthClientApplicationId");
    m_oAuthClientApplicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OAuthClientAuthenticationType")) {
    m_oAuthClientAuthenticationType =
        OAuthClientAuthenticationTypeMapper::GetOAuthClientAuthenticationTypeForName(jsonValue.GetString("OAuthClientAuthenticationType"));
    m_oAuthClientAuthenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSourceType")) {
    m_dataSourceType = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("DataSourceType"));
    m_dataSourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityProviderVpcConnectionProperties")) {
    m_identityProviderVpcConnectionProperties = jsonValue.GetObject("IdentityProviderVpcConnectionProperties");
    m_identityProviderVpcConnectionPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthClientApplicationSummary::Jsonize() const {
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

  if (m_dataSourceTypeHasBeenSet) {
    payload.WithString("DataSourceType", DataSourceTypeMapper::GetNameForDataSourceType(m_dataSourceType));
  }

  if (m_identityProviderVpcConnectionPropertiesHasBeenSet) {
    payload.WithObject("IdentityProviderVpcConnectionProperties", m_identityProviderVpcConnectionProperties.Jsonize());
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
