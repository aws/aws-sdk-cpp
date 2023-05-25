/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsControlAssociationId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsControlAssociationId::StandardsControlAssociationId() : 
    m_securityControlIdHasBeenSet(false),
    m_standardsArnHasBeenSet(false)
{
}

StandardsControlAssociationId::StandardsControlAssociationId(JsonView jsonValue) : 
    m_securityControlIdHasBeenSet(false),
    m_standardsArnHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsControlAssociationId& StandardsControlAssociationId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsArn"))
  {
    m_standardsArn = jsonValue.GetString("StandardsArn");

    m_standardsArnHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsControlAssociationId::Jsonize() const
{
  JsonValue payload;

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_standardsArnHasBeenSet)
  {
   payload.WithString("StandardsArn", m_standardsArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
