/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentReviewCommentSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentReviewCommentSource::DocumentReviewCommentSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentReviewCommentSource& DocumentReviewCommentSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DocumentReviewCommentTypeMapper::GetDocumentReviewCommentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentReviewCommentSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DocumentReviewCommentTypeMapper::GetNameForDocumentReviewCommentType(m_type));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
