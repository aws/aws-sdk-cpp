/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialSummary::TrialSummary() : 
    m_trialArnHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_trialSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

TrialSummary::TrialSummary(JsonView jsonValue) : 
    m_trialArnHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_trialSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TrialSummary& TrialSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrialArn"))
  {
    m_trialArn = jsonValue.GetString("TrialArn");

    m_trialArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialSource"))
  {
    m_trialSource = jsonValue.GetObject("TrialSource");

    m_trialSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trialArnHasBeenSet)
  {
   payload.WithString("TrialArn", m_trialArn);

  }

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_trialSourceHasBeenSet)
  {
   payload.WithObject("TrialSource", m_trialSource.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
