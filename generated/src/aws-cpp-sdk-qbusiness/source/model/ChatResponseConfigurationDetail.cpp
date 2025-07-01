/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatResponseConfigurationDetail.h>
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

ChatResponseConfigurationDetail::ChatResponseConfigurationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatResponseConfigurationDetail& ChatResponseConfigurationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("responseConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> responseConfigurationsJsonMap = jsonValue.GetObject("responseConfigurations").GetAllObjects();
    for(auto& responseConfigurationsItem : responseConfigurationsJsonMap)
    {
      m_responseConfigurations[ResponseConfigurationTypeMapper::GetResponseConfigurationTypeForName(responseConfigurationsItem.first)] = responseConfigurationsItem.second.AsObject();
    }
    m_responseConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseConfigurationSummary"))
  {
    m_responseConfigurationSummary = jsonValue.GetString("responseConfigurationSummary");
    m_responseConfigurationSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ChatResponseConfigurationStatusMapper::GetChatResponseConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatResponseConfigurationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_responseConfigurationsHasBeenSet)
  {
   JsonValue responseConfigurationsJsonMap;
   for(auto& responseConfigurationsItem : m_responseConfigurations)
   {
     responseConfigurationsJsonMap.WithObject(ResponseConfigurationTypeMapper::GetNameForResponseConfigurationType(responseConfigurationsItem.first), responseConfigurationsItem.second.Jsonize());
   }
   payload.WithObject("responseConfigurations", std::move(responseConfigurationsJsonMap));

  }

  if(m_responseConfigurationSummaryHasBeenSet)
  {
   payload.WithString("responseConfigurationSummary", m_responseConfigurationSummary);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChatResponseConfigurationStatusMapper::GetNameForChatResponseConfigurationStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
