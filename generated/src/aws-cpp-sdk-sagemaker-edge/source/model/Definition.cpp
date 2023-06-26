/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/Definition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

Definition::Definition() : 
    m_modelHandleHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_state(ModelState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Definition::Definition(JsonView jsonValue) : 
    m_modelHandleHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_state(ModelState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Definition& Definition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelHandle"))
  {
    m_modelHandle = jsonValue.GetString("ModelHandle");

    m_modelHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Checksum"))
  {
    m_checksum = jsonValue.GetObject("Checksum");

    m_checksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ModelStateMapper::GetModelStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Definition::Jsonize() const
{
  JsonValue payload;

  if(m_modelHandleHasBeenSet)
  {
   payload.WithString("ModelHandle", m_modelHandle);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithObject("Checksum", m_checksum.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ModelStateMapper::GetNameForModelState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
