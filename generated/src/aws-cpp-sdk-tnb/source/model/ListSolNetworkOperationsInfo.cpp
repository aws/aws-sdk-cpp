/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolNetworkOperationsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ListSolNetworkOperationsInfo::ListSolNetworkOperationsInfo() : 
    m_arnHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lcmOperationType(LcmOperationType::NOT_SET),
    m_lcmOperationTypeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceIdHasBeenSet(false),
    m_operationState(NsLcmOperationState::NOT_SET),
    m_operationStateHasBeenSet(false)
{
}

ListSolNetworkOperationsInfo::ListSolNetworkOperationsInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lcmOperationType(LcmOperationType::NOT_SET),
    m_lcmOperationTypeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceIdHasBeenSet(false),
    m_operationState(NsLcmOperationState::NOT_SET),
    m_operationStateHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolNetworkOperationsInfo& ListSolNetworkOperationsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lcmOperationType"))
  {
    m_lcmOperationType = LcmOperationTypeMapper::GetLcmOperationTypeForName(jsonValue.GetString("lcmOperationType"));

    m_lcmOperationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsInstanceId"))
  {
    m_nsInstanceId = jsonValue.GetString("nsInstanceId");

    m_nsInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationState"))
  {
    m_operationState = NsLcmOperationStateMapper::GetNsLcmOperationStateForName(jsonValue.GetString("operationState"));

    m_operationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSolNetworkOperationsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lcmOperationTypeHasBeenSet)
  {
   payload.WithString("lcmOperationType", LcmOperationTypeMapper::GetNameForLcmOperationType(m_lcmOperationType));
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_nsInstanceIdHasBeenSet)
  {
   payload.WithString("nsInstanceId", m_nsInstanceId);

  }

  if(m_operationStateHasBeenSet)
  {
   payload.WithString("operationState", NsLcmOperationStateMapper::GetNameForNsLcmOperationState(m_operationState));
  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
