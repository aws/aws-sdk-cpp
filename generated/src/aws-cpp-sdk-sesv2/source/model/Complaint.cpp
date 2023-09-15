/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Complaint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Complaint::Complaint() : 
    m_complaintSubTypeHasBeenSet(false),
    m_complaintFeedbackTypeHasBeenSet(false)
{
}

Complaint::Complaint(JsonView jsonValue) : 
    m_complaintSubTypeHasBeenSet(false),
    m_complaintFeedbackTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Complaint& Complaint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplaintSubType"))
  {
    m_complaintSubType = jsonValue.GetString("ComplaintSubType");

    m_complaintSubTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplaintFeedbackType"))
  {
    m_complaintFeedbackType = jsonValue.GetString("ComplaintFeedbackType");

    m_complaintFeedbackTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Complaint::Jsonize() const
{
  JsonValue payload;

  if(m_complaintSubTypeHasBeenSet)
  {
   payload.WithString("ComplaintSubType", m_complaintSubType);

  }

  if(m_complaintFeedbackTypeHasBeenSet)
  {
   payload.WithString("ComplaintFeedbackType", m_complaintFeedbackType);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
