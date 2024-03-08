/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ModerationLabel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ModerationLabel::ModerationLabel() : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNameHasBeenSet(false),
    m_taxonomyLevel(0),
    m_taxonomyLevelHasBeenSet(false)
{
}

ModerationLabel::ModerationLabel(JsonView jsonValue) : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNameHasBeenSet(false),
    m_taxonomyLevel(0),
    m_taxonomyLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ModerationLabel& ModerationLabel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentName"))
  {
    m_parentName = jsonValue.GetString("ParentName");

    m_parentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaxonomyLevel"))
  {
    m_taxonomyLevel = jsonValue.GetInteger("TaxonomyLevel");

    m_taxonomyLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue ModerationLabel::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parentNameHasBeenSet)
  {
   payload.WithString("ParentName", m_parentName);

  }

  if(m_taxonomyLevelHasBeenSet)
  {
   payload.WithInteger("TaxonomyLevel", m_taxonomyLevel);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
