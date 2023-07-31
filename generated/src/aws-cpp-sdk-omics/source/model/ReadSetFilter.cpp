/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetFilter.h>
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

ReadSetFilter::ReadSetFilter() : 
    m_nameHasBeenSet(false),
    m_status(ReadSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_creationType(CreationType::NOT_SET),
    m_creationTypeHasBeenSet(false)
{
}

ReadSetFilter::ReadSetFilter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(ReadSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_creationType(CreationType::NOT_SET),
    m_creationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ReadSetFilter& ReadSetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetStatusMapper::GetReadSetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

    m_referenceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAfter"))
  {
    m_createdAfter = jsonValue.GetString("createdAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBefore"))
  {
    m_createdBefore = jsonValue.GetString("createdBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");

    m_sampleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

    m_subjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generatedFrom"))
  {
    m_generatedFrom = jsonValue.GetString("generatedFrom");

    m_generatedFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationType"))
  {
    m_creationType = CreationTypeMapper::GetCreationTypeForName(jsonValue.GetString("creationType"));

    m_creationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadSetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetStatusMapper::GetNameForReadSetStatus(m_status));
  }

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sampleIdHasBeenSet)
  {
   payload.WithString("sampleId", m_sampleId);

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

  }

  if(m_generatedFromHasBeenSet)
  {
   payload.WithString("generatedFrom", m_generatedFrom);

  }

  if(m_creationTypeHasBeenSet)
  {
   payload.WithString("creationType", CreationTypeMapper::GetNameForCreationType(m_creationType));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
