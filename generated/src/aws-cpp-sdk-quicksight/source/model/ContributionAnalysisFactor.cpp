/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ContributionAnalysisFactor.h>
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

ContributionAnalysisFactor::ContributionAnalysisFactor(JsonView jsonValue)
{
  *this = jsonValue;
}

ContributionAnalysisFactor& ContributionAnalysisFactor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ContributionAnalysisFactor::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
