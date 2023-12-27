/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/IdentityProviderOAuthSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

IdentityProviderOAuthSetting::IdentityProviderOAuthSetting() : 
    m_dataSourceName(DataSourceName::NOT_SET),
    m_dataSourceNameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

IdentityProviderOAuthSetting::IdentityProviderOAuthSetting(JsonView jsonValue) : 
    m_dataSourceName(DataSourceName::NOT_SET),
    m_dataSourceNameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderOAuthSetting& IdentityProviderOAuthSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceName"))
  {
    m_dataSourceName = DataSourceNameMapper::GetDataSourceNameForName(jsonValue.GetString("DataSourceName"));

    m_dataSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderOAuthSetting::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("DataSourceName", DataSourceNameMapper::GetNameForDataSourceName(m_dataSourceName));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
