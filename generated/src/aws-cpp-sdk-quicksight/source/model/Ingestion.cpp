/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Ingestion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Ingestion::Ingestion() : 
    m_arnHasBeenSet(false),
    m_ingestionIdHasBeenSet(false),
    m_ingestionStatus(IngestionStatus::NOT_SET),
    m_ingestionStatusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_rowInfoHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ingestionTimeInSeconds(0),
    m_ingestionTimeInSecondsHasBeenSet(false),
    m_ingestionSizeInBytes(0),
    m_ingestionSizeInBytesHasBeenSet(false),
    m_requestSource(IngestionRequestSource::NOT_SET),
    m_requestSourceHasBeenSet(false),
    m_requestType(IngestionRequestType::NOT_SET),
    m_requestTypeHasBeenSet(false)
{
}

Ingestion::Ingestion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_ingestionIdHasBeenSet(false),
    m_ingestionStatus(IngestionStatus::NOT_SET),
    m_ingestionStatusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_rowInfoHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ingestionTimeInSeconds(0),
    m_ingestionTimeInSecondsHasBeenSet(false),
    m_ingestionSizeInBytes(0),
    m_ingestionSizeInBytesHasBeenSet(false),
    m_requestSource(IngestionRequestSource::NOT_SET),
    m_requestSourceHasBeenSet(false),
    m_requestType(IngestionRequestType::NOT_SET),
    m_requestTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Ingestion& Ingestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestionId"))
  {
    m_ingestionId = jsonValue.GetString("IngestionId");

    m_ingestionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestionStatus"))
  {
    m_ingestionStatus = IngestionStatusMapper::GetIngestionStatusForName(jsonValue.GetString("IngestionStatus"));

    m_ingestionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("ErrorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowInfo"))
  {
    m_rowInfo = jsonValue.GetObject("RowInfo");

    m_rowInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueInfo"))
  {
    m_queueInfo = jsonValue.GetObject("QueueInfo");

    m_queueInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestionTimeInSeconds"))
  {
    m_ingestionTimeInSeconds = jsonValue.GetInt64("IngestionTimeInSeconds");

    m_ingestionTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestionSizeInBytes"))
  {
    m_ingestionSizeInBytes = jsonValue.GetInt64("IngestionSizeInBytes");

    m_ingestionSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestSource"))
  {
    m_requestSource = IngestionRequestSourceMapper::GetIngestionRequestSourceForName(jsonValue.GetString("RequestSource"));

    m_requestSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestType"))
  {
    m_requestType = IngestionRequestTypeMapper::GetIngestionRequestTypeForName(jsonValue.GetString("RequestType"));

    m_requestTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Ingestion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_ingestionIdHasBeenSet)
  {
   payload.WithString("IngestionId", m_ingestionId);

  }

  if(m_ingestionStatusHasBeenSet)
  {
   payload.WithString("IngestionStatus", IngestionStatusMapper::GetNameForIngestionStatus(m_ingestionStatus));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("ErrorInfo", m_errorInfo.Jsonize());

  }

  if(m_rowInfoHasBeenSet)
  {
   payload.WithObject("RowInfo", m_rowInfo.Jsonize());

  }

  if(m_queueInfoHasBeenSet)
  {
   payload.WithObject("QueueInfo", m_queueInfo.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_ingestionTimeInSecondsHasBeenSet)
  {
   payload.WithInt64("IngestionTimeInSeconds", m_ingestionTimeInSeconds);

  }

  if(m_ingestionSizeInBytesHasBeenSet)
  {
   payload.WithInt64("IngestionSizeInBytes", m_ingestionSizeInBytes);

  }

  if(m_requestSourceHasBeenSet)
  {
   payload.WithString("RequestSource", IngestionRequestSourceMapper::GetNameForIngestionRequestSource(m_requestSource));
  }

  if(m_requestTypeHasBeenSet)
  {
   payload.WithString("RequestType", IngestionRequestTypeMapper::GetNameForIngestionRequestType(m_requestType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
