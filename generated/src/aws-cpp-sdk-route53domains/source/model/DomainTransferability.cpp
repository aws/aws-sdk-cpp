/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DomainTransferability.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DomainTransferability::DomainTransferability() : 
    m_transferable(Transferable::NOT_SET),
    m_transferableHasBeenSet(false)
{
}

DomainTransferability::DomainTransferability(JsonView jsonValue) : 
    m_transferable(Transferable::NOT_SET),
    m_transferableHasBeenSet(false)
{
  *this = jsonValue;
}

DomainTransferability& DomainTransferability::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transferable"))
  {
    m_transferable = TransferableMapper::GetTransferableForName(jsonValue.GetString("Transferable"));

    m_transferableHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainTransferability::Jsonize() const
{
  JsonValue payload;

  if(m_transferableHasBeenSet)
  {
   payload.WithString("Transferable", TransferableMapper::GetNameForTransferable(m_transferable));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
