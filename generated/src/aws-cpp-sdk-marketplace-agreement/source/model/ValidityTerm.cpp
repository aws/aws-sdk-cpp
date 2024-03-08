/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ValidityTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

ValidityTerm::ValidityTerm() : 
    m_agreementDurationHasBeenSet(false),
    m_agreementEndDateHasBeenSet(false),
    m_agreementStartDateHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ValidityTerm::ValidityTerm(JsonView jsonValue) : 
    m_agreementDurationHasBeenSet(false),
    m_agreementEndDateHasBeenSet(false),
    m_agreementStartDateHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidityTerm& ValidityTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agreementDuration"))
  {
    m_agreementDuration = jsonValue.GetString("agreementDuration");

    m_agreementDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agreementEndDate"))
  {
    m_agreementEndDate = jsonValue.GetDouble("agreementEndDate");

    m_agreementEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agreementStartDate"))
  {
    m_agreementStartDate = jsonValue.GetDouble("agreementStartDate");

    m_agreementStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidityTerm::Jsonize() const
{
  JsonValue payload;

  if(m_agreementDurationHasBeenSet)
  {
   payload.WithString("agreementDuration", m_agreementDuration);

  }

  if(m_agreementEndDateHasBeenSet)
  {
   payload.WithDouble("agreementEndDate", m_agreementEndDate.SecondsWithMSPrecision());
  }

  if(m_agreementStartDateHasBeenSet)
  {
   payload.WithDouble("agreementStartDate", m_agreementStartDate.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
