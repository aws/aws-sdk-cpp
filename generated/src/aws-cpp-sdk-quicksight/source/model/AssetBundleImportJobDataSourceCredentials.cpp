/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSourceCredentials.h>
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

AssetBundleImportJobDataSourceCredentials::AssetBundleImportJobDataSourceCredentials() : 
    m_credentialPairHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

AssetBundleImportJobDataSourceCredentials::AssetBundleImportJobDataSourceCredentials(JsonView jsonValue) : 
    m_credentialPairHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSourceCredentials& AssetBundleImportJobDataSourceCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CredentialPair"))
  {
    m_credentialPair = jsonValue.GetObject("CredentialPair");

    m_credentialPairHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDataSourceCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_credentialPairHasBeenSet)
  {
   payload.WithObject("CredentialPair", m_credentialPair.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
