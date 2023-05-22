/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverrideParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleImportJobDataSourceOverrideParameters::AssetBundleImportJobDataSourceOverrideParameters() : 
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

AssetBundleImportJobDataSourceOverrideParameters::AssetBundleImportJobDataSourceOverrideParameters(JsonView jsonValue) : 
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSourceOverrideParameters& AssetBundleImportJobDataSourceOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceParameters"))
  {
    m_dataSourceParameters = jsonValue.GetObject("DataSourceParameters");

    m_dataSourceParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConnectionProperties"))
  {
    m_vpcConnectionProperties = jsonValue.GetObject("VpcConnectionProperties");

    m_vpcConnectionPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslProperties"))
  {
    m_sslProperties = jsonValue.GetObject("SslProperties");

    m_sslPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

    m_credentialsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDataSourceOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataSourceParametersHasBeenSet)
  {
   payload.WithObject("DataSourceParameters", m_dataSourceParameters.Jsonize());

  }

  if(m_vpcConnectionPropertiesHasBeenSet)
  {
   payload.WithObject("VpcConnectionProperties", m_vpcConnectionProperties.Jsonize());

  }

  if(m_sslPropertiesHasBeenSet)
  {
   payload.WithObject("SslProperties", m_sslProperties.Jsonize());

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
