/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationStatus.h>
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

AssociationStatus::AssociationStatus() : 
    m_dateHasBeenSet(false),
    m_name(AssociationStatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
}

AssociationStatus::AssociationStatus(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_name(AssociationStatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationStatus& AssociationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = AssociationStatusNameMapper::GetAssociationStatusNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalInfo"))
  {
    m_additionalInfo = jsonValue.GetString("AdditionalInfo");

    m_additionalInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", AssociationStatusNameMapper::GetNameForAssociationStatusName(m_name));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_additionalInfoHasBeenSet)
  {
   payload.WithString("AdditionalInfo", m_additionalInfo);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
