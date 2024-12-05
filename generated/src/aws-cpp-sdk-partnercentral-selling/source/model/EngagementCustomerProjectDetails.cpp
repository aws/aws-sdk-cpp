/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementCustomerProjectDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

EngagementCustomerProjectDetails::EngagementCustomerProjectDetails() : 
    m_businessProblemHasBeenSet(false),
    m_targetCompletionDateHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

EngagementCustomerProjectDetails::EngagementCustomerProjectDetails(JsonView jsonValue)
  : EngagementCustomerProjectDetails()
{
  *this = jsonValue;
}

EngagementCustomerProjectDetails& EngagementCustomerProjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BusinessProblem"))
  {
    m_businessProblem = jsonValue.GetString("BusinessProblem");

    m_businessProblemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetCompletionDate"))
  {
    m_targetCompletionDate = jsonValue.GetString("TargetCompletionDate");

    m_targetCompletionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue EngagementCustomerProjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_businessProblemHasBeenSet)
  {
   payload.WithString("BusinessProblem", m_businessProblem);

  }

  if(m_targetCompletionDateHasBeenSet)
  {
   payload.WithString("TargetCompletionDate", m_targetCompletionDate);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
