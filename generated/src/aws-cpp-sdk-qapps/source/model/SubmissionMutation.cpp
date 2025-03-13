/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/SubmissionMutation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

SubmissionMutation::SubmissionMutation(JsonView jsonValue)
{
  *this = jsonValue;
}

SubmissionMutation& SubmissionMutation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("submissionId"))
  {
    m_submissionId = jsonValue.GetString("submissionId");
    m_submissionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mutationType"))
  {
    m_mutationType = SubmissionMutationKindMapper::GetSubmissionMutationKindForName(jsonValue.GetString("mutationType"));
    m_mutationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SubmissionMutation::Jsonize() const
{
  JsonValue payload;

  if(m_submissionIdHasBeenSet)
  {
   payload.WithString("submissionId", m_submissionId);

  }

  if(m_mutationTypeHasBeenSet)
  {
   payload.WithString("mutationType", SubmissionMutationKindMapper::GetNameForSubmissionMutationKind(m_mutationType));
  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
