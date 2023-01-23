/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/Operation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

Operation::Operation() : 
    m_idHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Operation::Operation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
  *this = jsonValue;
}

Operation& Operation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDate"))
  {
    m_updateDate = jsonValue.GetDouble("UpdateDate");

    m_updateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Map<Aws::String, JsonView> targetsJsonMap = jsonValue.GetObject("Targets").GetAllObjects();
    for(auto& targetsItem : targetsJsonMap)
    {
      m_targets[OperationTargetTypeMapper::GetOperationTargetTypeForName(targetsItem.first)] = targetsItem.second.AsString();
    }
    m_targetsHasBeenSet = true;
  }

  return *this;
}

JsonValue Operation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OperationTypeMapper::GetNameForOperationType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_updateDateHasBeenSet)
  {
   payload.WithDouble("UpdateDate", m_updateDate.SecondsWithMSPrecision());
  }

  if(m_targetsHasBeenSet)
  {
   JsonValue targetsJsonMap;
   for(auto& targetsItem : m_targets)
   {
     targetsJsonMap.WithString(OperationTargetTypeMapper::GetNameForOperationTargetType(targetsItem.first), targetsItem.second);
   }
   payload.WithObject("Targets", std::move(targetsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
