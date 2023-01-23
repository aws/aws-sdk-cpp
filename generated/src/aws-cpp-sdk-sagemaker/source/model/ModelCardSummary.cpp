/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardSummary.h>
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

ModelCardSummary::ModelCardSummary() : 
    m_modelCardNameHasBeenSet(false),
    m_modelCardArnHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ModelCardSummary::ModelCardSummary(JsonView jsonValue) : 
    m_modelCardNameHasBeenSet(false),
    m_modelCardArnHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCardSummary& ModelCardSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");

    m_modelCardNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardArn"))
  {
    m_modelCardArn = jsonValue.GetString("ModelCardArn");

    m_modelCardArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardStatus"))
  {
    m_modelCardStatus = ModelCardStatusMapper::GetModelCardStatusForName(jsonValue.GetString("ModelCardStatus"));

    m_modelCardStatusHasBeenSet = true;
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

JsonValue ModelCardSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardArnHasBeenSet)
  {
   payload.WithString("ModelCardArn", m_modelCardArn);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
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
