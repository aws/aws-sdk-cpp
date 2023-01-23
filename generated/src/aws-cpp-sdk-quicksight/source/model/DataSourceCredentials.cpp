/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceCredentials.h>
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

DataSourceCredentials::DataSourceCredentials() : 
    m_credentialPairHasBeenSet(false),
    m_copySourceArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

DataSourceCredentials::DataSourceCredentials(JsonView jsonValue) : 
    m_credentialPairHasBeenSet(false),
    m_copySourceArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceCredentials& DataSourceCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CredentialPair"))
  {
    m_credentialPair = jsonValue.GetObject("CredentialPair");

    m_credentialPairHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopySourceArn"))
  {
    m_copySourceArn = jsonValue.GetString("CopySourceArn");

    m_copySourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_credentialPairHasBeenSet)
  {
   payload.WithObject("CredentialPair", m_credentialPair.Jsonize());

  }

  if(m_copySourceArnHasBeenSet)
  {
   payload.WithString("CopySourceArn", m_copySourceArn);

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
