/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

BatchGetRecordError::BatchGetRecordError() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchGetRecordError::BatchGetRecordError(JsonView jsonValue) : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetRecordError& BatchGetRecordError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordIdentifierValueAsString"))
  {
    m_recordIdentifierValueAsString = jsonValue.GetString("RecordIdentifierValueAsString");

    m_recordIdentifierValueAsStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetRecordError::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_recordIdentifierValueAsStringHasBeenSet)
  {
   payload.WithString("RecordIdentifierValueAsString", m_recordIdentifierValueAsString);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
