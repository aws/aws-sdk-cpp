/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/InstructionCollection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

InstructionCollection::InstructionCollection(JsonView jsonValue)
{
  *this = jsonValue;
}

InstructionCollection& InstructionCollection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("responseLength"))
  {
    m_responseLength = jsonValue.GetString("responseLength");
    m_responseLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetAudience"))
  {
    m_targetAudience = jsonValue.GetString("targetAudience");
    m_targetAudienceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("perspective"))
  {
    m_perspective = jsonValue.GetString("perspective");
    m_perspectiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputStyle"))
  {
    m_outputStyle = jsonValue.GetString("outputStyle");
    m_outputStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetString("identity");
    m_identityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tone"))
  {
    m_tone = jsonValue.GetString("tone");
    m_toneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customInstructions"))
  {
    m_customInstructions = jsonValue.GetString("customInstructions");
    m_customInstructionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("examples"))
  {
    m_examples = jsonValue.GetString("examples");
    m_examplesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstructionCollection::Jsonize() const
{
  JsonValue payload;

  if(m_responseLengthHasBeenSet)
  {
   payload.WithString("responseLength", m_responseLength);

  }

  if(m_targetAudienceHasBeenSet)
  {
   payload.WithString("targetAudience", m_targetAudience);

  }

  if(m_perspectiveHasBeenSet)
  {
   payload.WithString("perspective", m_perspective);

  }

  if(m_outputStyleHasBeenSet)
  {
   payload.WithString("outputStyle", m_outputStyle);

  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("identity", m_identity);

  }

  if(m_toneHasBeenSet)
  {
   payload.WithString("tone", m_tone);

  }

  if(m_customInstructionsHasBeenSet)
  {
   payload.WithString("customInstructions", m_customInstructions);

  }

  if(m_examplesHasBeenSet)
  {
   payload.WithString("examples", m_examples);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
