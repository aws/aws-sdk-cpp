/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

Certificate::Certificate(JsonView jsonValue)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thumbprint"))
  {
    m_thumbprint = jsonValue.GetString("thumbprint");
    m_thumbprintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notValidBefore"))
  {
    m_notValidBefore = jsonValue.GetDouble("notValidBefore");
    m_notValidBeforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notValidAfter"))
  {
    m_notValidAfter = jsonValue.GetDouble("notValidAfter");
    m_notValidAfterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("body"))
  {
    m_body = HashingUtils::Base64Decode(jsonValue.GetString("body"));
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_thumbprintHasBeenSet)
  {
   payload.WithString("thumbprint", m_thumbprint);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_notValidBeforeHasBeenSet)
  {
   payload.WithDouble("notValidBefore", m_notValidBefore.SecondsWithMSPrecision());
  }

  if(m_notValidAfterHasBeenSet)
  {
   payload.WithDouble("notValidAfter", m_notValidAfter.SecondsWithMSPrecision());
  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", HashingUtils::Base64Encode(m_body));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
