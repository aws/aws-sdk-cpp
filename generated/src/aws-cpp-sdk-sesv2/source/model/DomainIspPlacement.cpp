/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DomainIspPlacement.h>
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

DomainIspPlacement::DomainIspPlacement() : 
    m_ispNameHasBeenSet(false),
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_inboxPercentage(0.0),
    m_inboxPercentageHasBeenSet(false),
    m_spamPercentage(0.0),
    m_spamPercentageHasBeenSet(false)
{
}

DomainIspPlacement::DomainIspPlacement(JsonView jsonValue) : 
    m_ispNameHasBeenSet(false),
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_inboxPercentage(0.0),
    m_inboxPercentageHasBeenSet(false),
    m_spamPercentage(0.0),
    m_spamPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

DomainIspPlacement& DomainIspPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IspName"))
  {
    m_ispName = jsonValue.GetString("IspName");

    m_ispNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboxRawCount"))
  {
    m_inboxRawCount = jsonValue.GetInt64("InboxRawCount");

    m_inboxRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamRawCount"))
  {
    m_spamRawCount = jsonValue.GetInt64("SpamRawCount");

    m_spamRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboxPercentage"))
  {
    m_inboxPercentage = jsonValue.GetDouble("InboxPercentage");

    m_inboxPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamPercentage"))
  {
    m_spamPercentage = jsonValue.GetDouble("SpamPercentage");

    m_spamPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainIspPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_ispNameHasBeenSet)
  {
   payload.WithString("IspName", m_ispName);

  }

  if(m_inboxRawCountHasBeenSet)
  {
   payload.WithInt64("InboxRawCount", m_inboxRawCount);

  }

  if(m_spamRawCountHasBeenSet)
  {
   payload.WithInt64("SpamRawCount", m_spamRawCount);

  }

  if(m_inboxPercentageHasBeenSet)
  {
   payload.WithDouble("InboxPercentage", m_inboxPercentage);

  }

  if(m_spamPercentageHasBeenSet)
  {
   payload.WithDouble("SpamPercentage", m_spamPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
