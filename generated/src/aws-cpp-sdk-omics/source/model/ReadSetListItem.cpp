﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ReadSetListItem::ReadSetListItem() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_status(ReadSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_fileType(FileType::NOT_SET),
    m_fileTypeHasBeenSet(false),
    m_sequenceInformationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationType(CreationType::NOT_SET),
    m_creationTypeHasBeenSet(false),
    m_etagHasBeenSet(false)
{
}

ReadSetListItem::ReadSetListItem(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_status(ReadSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_fileType(FileType::NOT_SET),
    m_fileTypeHasBeenSet(false),
    m_sequenceInformationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationType(CreationType::NOT_SET),
    m_creationTypeHasBeenSet(false),
    m_etagHasBeenSet(false)
{
  *this = jsonValue;
}

ReadSetListItem& ReadSetListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

    m_sequenceStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

    m_subjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");

    m_sampleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetStatusMapper::GetReadSetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

    m_referenceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("fileType"));

    m_fileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sequenceInformation"))
  {
    m_sequenceInformation = jsonValue.GetObject("sequenceInformation");

    m_sequenceInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationType"))
  {
    m_creationType = CreationTypeMapper::GetCreationTypeForName(jsonValue.GetString("creationType"));

    m_creationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etag"))
  {
    m_etag = jsonValue.GetObject("etag");

    m_etagHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadSetListItem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_sequenceStoreIdHasBeenSet)
  {
   payload.WithString("sequenceStoreId", m_sequenceStoreId);

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

  }

  if(m_sampleIdHasBeenSet)
  {
   payload.WithString("sampleId", m_sampleId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetStatusMapper::GetNameForReadSetStatus(m_status));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  if(m_fileTypeHasBeenSet)
  {
   payload.WithString("fileType", FileTypeMapper::GetNameForFileType(m_fileType));
  }

  if(m_sequenceInformationHasBeenSet)
  {
   payload.WithObject("sequenceInformation", m_sequenceInformation.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_creationTypeHasBeenSet)
  {
   payload.WithString("creationType", CreationTypeMapper::GetNameForCreationType(m_creationType));
  }

  if(m_etagHasBeenSet)
  {
   payload.WithObject("etag", m_etag.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
