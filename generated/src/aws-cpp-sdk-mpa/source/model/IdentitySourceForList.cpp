/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IdentitySourceForList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

IdentitySourceForList::IdentitySourceForList(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentitySourceForList& IdentitySourceForList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentitySourceType"))
  {
    m_identitySourceType = IdentitySourceTypeMapper::GetIdentitySourceTypeForName(jsonValue.GetString("IdentitySourceType"));
    m_identitySourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentitySourceParameters"))
  {
    m_identitySourceParameters = jsonValue.GetObject("IdentitySourceParameters");
    m_identitySourceParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentitySourceArn"))
  {
    m_identitySourceArn = jsonValue.GetString("IdentitySourceArn");
    m_identitySourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IdentitySourceStatusMapper::GetIdentitySourceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = IdentitySourceStatusCodeMapper::GetIdentitySourceStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentitySourceForList::Jsonize() const
{
  JsonValue payload;

  if(m_identitySourceTypeHasBeenSet)
  {
   payload.WithString("IdentitySourceType", IdentitySourceTypeMapper::GetNameForIdentitySourceType(m_identitySourceType));
  }

  if(m_identitySourceParametersHasBeenSet)
  {
   payload.WithObject("IdentitySourceParameters", m_identitySourceParameters.Jsonize());

  }

  if(m_identitySourceArnHasBeenSet)
  {
   payload.WithString("IdentitySourceArn", m_identitySourceArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IdentitySourceStatusMapper::GetNameForIdentitySourceStatus(m_status));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", IdentitySourceStatusCodeMapper::GetNameForIdentitySourceStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
