/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimSigningAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DkimSigningAttributes::DkimSigningAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DkimSigningAttributes& DkimSigningAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainSigningSelector"))
  {
    m_domainSigningSelector = jsonValue.GetString("DomainSigningSelector");
    m_domainSigningSelectorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainSigningPrivateKey"))
  {
    m_domainSigningPrivateKey = jsonValue.GetString("DomainSigningPrivateKey");
    m_domainSigningPrivateKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextSigningKeyLength"))
  {
    m_nextSigningKeyLength = DkimSigningKeyLengthMapper::GetDkimSigningKeyLengthForName(jsonValue.GetString("NextSigningKeyLength"));
    m_nextSigningKeyLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainSigningAttributesOrigin"))
  {
    m_domainSigningAttributesOrigin = DkimSigningAttributesOriginMapper::GetDkimSigningAttributesOriginForName(jsonValue.GetString("DomainSigningAttributesOrigin"));
    m_domainSigningAttributesOriginHasBeenSet = true;
  }
  return *this;
}

JsonValue DkimSigningAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_domainSigningSelectorHasBeenSet)
  {
   payload.WithString("DomainSigningSelector", m_domainSigningSelector);

  }

  if(m_domainSigningPrivateKeyHasBeenSet)
  {
   payload.WithString("DomainSigningPrivateKey", m_domainSigningPrivateKey);

  }

  if(m_nextSigningKeyLengthHasBeenSet)
  {
   payload.WithString("NextSigningKeyLength", DkimSigningKeyLengthMapper::GetNameForDkimSigningKeyLength(m_nextSigningKeyLength));
  }

  if(m_domainSigningAttributesOriginHasBeenSet)
  {
   payload.WithString("DomainSigningAttributesOrigin", DkimSigningAttributesOriginMapper::GetNameForDkimSigningAttributesOrigin(m_domainSigningAttributesOrigin));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
