﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/QualificationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

QualificationType::QualificationType(JsonView jsonValue)
{
  *this = jsonValue;
}

QualificationType& QualificationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QualificationTypeId"))
  {
    m_qualificationTypeId = jsonValue.GetString("QualificationTypeId");
    m_qualificationTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Keywords"))
  {
    m_keywords = jsonValue.GetString("Keywords");
    m_keywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QualificationTypeStatus"))
  {
    m_qualificationTypeStatus = QualificationTypeStatusMapper::GetQualificationTypeStatusForName(jsonValue.GetString("QualificationTypeStatus"));
    m_qualificationTypeStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Test"))
  {
    m_test = jsonValue.GetString("Test");
    m_testHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TestDurationInSeconds"))
  {
    m_testDurationInSeconds = jsonValue.GetInt64("TestDurationInSeconds");
    m_testDurationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnswerKey"))
  {
    m_answerKey = jsonValue.GetString("AnswerKey");
    m_answerKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryDelayInSeconds"))
  {
    m_retryDelayInSeconds = jsonValue.GetInt64("RetryDelayInSeconds");
    m_retryDelayInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsRequestable"))
  {
    m_isRequestable = jsonValue.GetBool("IsRequestable");
    m_isRequestableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoGranted"))
  {
    m_autoGranted = jsonValue.GetBool("AutoGranted");
    m_autoGrantedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoGrantedValue"))
  {
    m_autoGrantedValue = jsonValue.GetInteger("AutoGrantedValue");
    m_autoGrantedValueHasBeenSet = true;
  }
  return *this;
}

JsonValue QualificationType::Jsonize() const
{
  JsonValue payload;

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_keywordsHasBeenSet)
  {
   payload.WithString("Keywords", m_keywords);

  }

  if(m_qualificationTypeStatusHasBeenSet)
  {
   payload.WithString("QualificationTypeStatus", QualificationTypeStatusMapper::GetNameForQualificationTypeStatus(m_qualificationTypeStatus));
  }

  if(m_testHasBeenSet)
  {
   payload.WithString("Test", m_test);

  }

  if(m_testDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("TestDurationInSeconds", m_testDurationInSeconds);

  }

  if(m_answerKeyHasBeenSet)
  {
   payload.WithString("AnswerKey", m_answerKey);

  }

  if(m_retryDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("RetryDelayInSeconds", m_retryDelayInSeconds);

  }

  if(m_isRequestableHasBeenSet)
  {
   payload.WithBool("IsRequestable", m_isRequestable);

  }

  if(m_autoGrantedHasBeenSet)
  {
   payload.WithBool("AutoGranted", m_autoGranted);

  }

  if(m_autoGrantedValueHasBeenSet)
  {
   payload.WithInteger("AutoGrantedValue", m_autoGrantedValue);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
