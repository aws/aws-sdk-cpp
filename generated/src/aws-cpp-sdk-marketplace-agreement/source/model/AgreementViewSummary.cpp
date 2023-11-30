/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/AgreementViewSummary.h>
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

AgreementViewSummary::AgreementViewSummary() : 
    m_acceptanceTimeHasBeenSet(false),
    m_acceptorHasBeenSet(false),
    m_agreementIdHasBeenSet(false),
    m_agreementTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_proposalSummaryHasBeenSet(false),
    m_proposerHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AgreementStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AgreementViewSummary::AgreementViewSummary(JsonView jsonValue) : 
    m_acceptanceTimeHasBeenSet(false),
    m_acceptorHasBeenSet(false),
    m_agreementIdHasBeenSet(false),
    m_agreementTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_proposalSummaryHasBeenSet(false),
    m_proposerHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AgreementStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AgreementViewSummary& AgreementViewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceptanceTime"))
  {
    m_acceptanceTime = jsonValue.GetDouble("acceptanceTime");

    m_acceptanceTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceptor"))
  {
    m_acceptor = jsonValue.GetObject("acceptor");

    m_acceptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agreementId"))
  {
    m_agreementId = jsonValue.GetString("agreementId");

    m_agreementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agreementType"))
  {
    m_agreementType = jsonValue.GetString("agreementType");

    m_agreementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("proposalSummary"))
  {
    m_proposalSummary = jsonValue.GetObject("proposalSummary");

    m_proposalSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("proposer"))
  {
    m_proposer = jsonValue.GetObject("proposer");

    m_proposerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AgreementStatusMapper::GetAgreementStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AgreementViewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_acceptanceTimeHasBeenSet)
  {
   payload.WithDouble("acceptanceTime", m_acceptanceTime.SecondsWithMSPrecision());
  }

  if(m_acceptorHasBeenSet)
  {
   payload.WithObject("acceptor", m_acceptor.Jsonize());

  }

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("agreementId", m_agreementId);

  }

  if(m_agreementTypeHasBeenSet)
  {
   payload.WithString("agreementType", m_agreementType);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_proposalSummaryHasBeenSet)
  {
   payload.WithObject("proposalSummary", m_proposalSummary.Jsonize());

  }

  if(m_proposerHasBeenSet)
  {
   payload.WithObject("proposer", m_proposer.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AgreementStatusMapper::GetNameForAgreementStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
