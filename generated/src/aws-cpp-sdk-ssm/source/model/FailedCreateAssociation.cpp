/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/FailedCreateAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

FailedCreateAssociation::FailedCreateAssociation() : 
    m_entryHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fault(Fault::NOT_SET),
    m_faultHasBeenSet(false)
{
}

FailedCreateAssociation::FailedCreateAssociation(JsonView jsonValue) : 
    m_entryHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fault(Fault::NOT_SET),
    m_faultHasBeenSet(false)
{
  *this = jsonValue;
}

FailedCreateAssociation& FailedCreateAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Entry"))
  {
    m_entry = jsonValue.GetObject("Entry");

    m_entryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fault"))
  {
    m_fault = FaultMapper::GetFaultForName(jsonValue.GetString("Fault"));

    m_faultHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedCreateAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_entryHasBeenSet)
  {
   payload.WithObject("Entry", m_entry.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_faultHasBeenSet)
  {
   payload.WithString("Fault", FaultMapper::GetNameForFault(m_fault));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
