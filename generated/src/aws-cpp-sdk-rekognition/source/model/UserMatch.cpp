/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UserMatch.h>
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

UserMatch::UserMatch() : 
    m_similarity(0.0),
    m_similarityHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

UserMatch::UserMatch(JsonView jsonValue) : 
    m_similarity(0.0),
    m_similarityHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

UserMatch& UserMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Similarity"))
  {
    m_similarity = jsonValue.GetDouble("Similarity");

    m_similarityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetObject("User");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue UserMatch::Jsonize() const
{
  JsonValue payload;

  if(m_similarityHasBeenSet)
  {
   payload.WithDouble("Similarity", m_similarity);

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("User", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
