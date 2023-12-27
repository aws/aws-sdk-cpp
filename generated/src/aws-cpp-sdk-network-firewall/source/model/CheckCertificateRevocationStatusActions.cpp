/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CheckCertificateRevocationStatusActions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

CheckCertificateRevocationStatusActions::CheckCertificateRevocationStatusActions() : 
    m_revokedStatusAction(RevocationCheckAction::NOT_SET),
    m_revokedStatusActionHasBeenSet(false),
    m_unknownStatusAction(RevocationCheckAction::NOT_SET),
    m_unknownStatusActionHasBeenSet(false)
{
}

CheckCertificateRevocationStatusActions::CheckCertificateRevocationStatusActions(JsonView jsonValue) : 
    m_revokedStatusAction(RevocationCheckAction::NOT_SET),
    m_revokedStatusActionHasBeenSet(false),
    m_unknownStatusAction(RevocationCheckAction::NOT_SET),
    m_unknownStatusActionHasBeenSet(false)
{
  *this = jsonValue;
}

CheckCertificateRevocationStatusActions& CheckCertificateRevocationStatusActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RevokedStatusAction"))
  {
    m_revokedStatusAction = RevocationCheckActionMapper::GetRevocationCheckActionForName(jsonValue.GetString("RevokedStatusAction"));

    m_revokedStatusActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnknownStatusAction"))
  {
    m_unknownStatusAction = RevocationCheckActionMapper::GetRevocationCheckActionForName(jsonValue.GetString("UnknownStatusAction"));

    m_unknownStatusActionHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckCertificateRevocationStatusActions::Jsonize() const
{
  JsonValue payload;

  if(m_revokedStatusActionHasBeenSet)
  {
   payload.WithString("RevokedStatusAction", RevocationCheckActionMapper::GetNameForRevocationCheckAction(m_revokedStatusAction));
  }

  if(m_unknownStatusActionHasBeenSet)
  {
   payload.WithString("UnknownStatusAction", RevocationCheckActionMapper::GetNameForRevocationCheckAction(m_unknownStatusAction));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
