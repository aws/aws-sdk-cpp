/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/ExecuteStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

ExecuteStatementResult::ExecuteStatementResult() : 
    m_firstPageHasBeenSet(false),
    m_timingInformationHasBeenSet(false),
    m_consumedIOsHasBeenSet(false)
{
}

ExecuteStatementResult::ExecuteStatementResult(JsonView jsonValue) : 
    m_firstPageHasBeenSet(false),
    m_timingInformationHasBeenSet(false),
    m_consumedIOsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecuteStatementResult& ExecuteStatementResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirstPage"))
  {
    m_firstPage = jsonValue.GetObject("FirstPage");

    m_firstPageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimingInformation"))
  {
    m_timingInformation = jsonValue.GetObject("TimingInformation");

    m_timingInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedIOs"))
  {
    m_consumedIOs = jsonValue.GetObject("ConsumedIOs");

    m_consumedIOsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecuteStatementResult::Jsonize() const
{
  JsonValue payload;

  if(m_firstPageHasBeenSet)
  {
   payload.WithObject("FirstPage", m_firstPage.Jsonize());

  }

  if(m_timingInformationHasBeenSet)
  {
   payload.WithObject("TimingInformation", m_timingInformation.Jsonize());

  }

  if(m_consumedIOsHasBeenSet)
  {
   payload.WithObject("ConsumedIOs", m_consumedIOs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
