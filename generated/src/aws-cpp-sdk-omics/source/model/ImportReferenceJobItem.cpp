/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ImportReferenceJobItem.h>
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

ImportReferenceJobItem::ImportReferenceJobItem() : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ReferenceImportJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ImportReferenceJobItem::ImportReferenceJobItem(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ReferenceImportJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ImportReferenceJobItem& ImportReferenceJobItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceStoreId"))
  {
    m_referenceStoreId = jsonValue.GetString("referenceStoreId");

    m_referenceStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReferenceImportJobStatusMapper::GetReferenceImportJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportReferenceJobItem::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("completionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_referenceStoreIdHasBeenSet)
  {
   payload.WithString("referenceStoreId", m_referenceStoreId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
