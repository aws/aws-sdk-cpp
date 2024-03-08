/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SourceServerConnectorAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

SourceServerConnectorAction::SourceServerConnectorAction() : 
    m_connectorArnHasBeenSet(false),
    m_credentialsSecretArnHasBeenSet(false)
{
}

SourceServerConnectorAction::SourceServerConnectorAction(JsonView jsonValue) : 
    m_connectorArnHasBeenSet(false),
    m_credentialsSecretArnHasBeenSet(false)
{
  *this = jsonValue;
}

SourceServerConnectorAction& SourceServerConnectorAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

    m_connectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");

    m_credentialsSecretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceServerConnectorAction::Jsonize() const
{
  JsonValue payload;

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("connectorArn", m_connectorArn);

  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
