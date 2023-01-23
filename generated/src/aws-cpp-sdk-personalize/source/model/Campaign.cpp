﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/Campaign.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

Campaign::Campaign() : 
    m_nameHasBeenSet(false),
    m_campaignArnHasBeenSet(false),
    m_solutionVersionArnHasBeenSet(false),
    m_minProvisionedTPS(0),
    m_minProvisionedTPSHasBeenSet(false),
    m_campaignConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_latestCampaignUpdateHasBeenSet(false)
{
}

Campaign::Campaign(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_campaignArnHasBeenSet(false),
    m_solutionVersionArnHasBeenSet(false),
    m_minProvisionedTPS(0),
    m_minProvisionedTPSHasBeenSet(false),
    m_campaignConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_latestCampaignUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

Campaign& Campaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("campaignArn"))
  {
    m_campaignArn = jsonValue.GetString("campaignArn");

    m_campaignArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");

    m_solutionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minProvisionedTPS"))
  {
    m_minProvisionedTPS = jsonValue.GetInteger("minProvisionedTPS");

    m_minProvisionedTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("campaignConfig"))
  {
    m_campaignConfig = jsonValue.GetObject("campaignConfig");

    m_campaignConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestCampaignUpdate"))
  {
    m_latestCampaignUpdate = jsonValue.GetObject("latestCampaignUpdate");

    m_latestCampaignUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue Campaign::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_minProvisionedTPSHasBeenSet)
  {
   payload.WithInteger("minProvisionedTPS", m_minProvisionedTPS);

  }

  if(m_campaignConfigHasBeenSet)
  {
   payload.WithObject("campaignConfig", m_campaignConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_latestCampaignUpdateHasBeenSet)
  {
   payload.WithObject("latestCampaignUpdate", m_latestCampaignUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
