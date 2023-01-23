/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/JobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

JobDetails::JobDetails() : 
    m_translatedDocumentsCount(0),
    m_translatedDocumentsCountHasBeenSet(false),
    m_documentsWithErrorsCount(0),
    m_documentsWithErrorsCountHasBeenSet(false),
    m_inputDocumentsCount(0),
    m_inputDocumentsCountHasBeenSet(false)
{
}

JobDetails::JobDetails(JsonView jsonValue) : 
    m_translatedDocumentsCount(0),
    m_translatedDocumentsCountHasBeenSet(false),
    m_documentsWithErrorsCount(0),
    m_documentsWithErrorsCountHasBeenSet(false),
    m_inputDocumentsCount(0),
    m_inputDocumentsCountHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetails& JobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranslatedDocumentsCount"))
  {
    m_translatedDocumentsCount = jsonValue.GetInteger("TranslatedDocumentsCount");

    m_translatedDocumentsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsWithErrorsCount"))
  {
    m_documentsWithErrorsCount = jsonValue.GetInteger("DocumentsWithErrorsCount");

    m_documentsWithErrorsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDocumentsCount"))
  {
    m_inputDocumentsCount = jsonValue.GetInteger("InputDocumentsCount");

    m_inputDocumentsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_translatedDocumentsCountHasBeenSet)
  {
   payload.WithInteger("TranslatedDocumentsCount", m_translatedDocumentsCount);

  }

  if(m_documentsWithErrorsCountHasBeenSet)
  {
   payload.WithInteger("DocumentsWithErrorsCount", m_documentsWithErrorsCount);

  }

  if(m_inputDocumentsCountHasBeenSet)
  {
   payload.WithInteger("InputDocumentsCount", m_inputDocumentsCount);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
