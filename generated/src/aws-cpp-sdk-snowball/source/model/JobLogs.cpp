/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/JobLogs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobLogs::JobLogs() : 
    m_jobCompletionReportURIHasBeenSet(false),
    m_jobSuccessLogURIHasBeenSet(false),
    m_jobFailureLogURIHasBeenSet(false)
{
}

JobLogs::JobLogs(JsonView jsonValue) : 
    m_jobCompletionReportURIHasBeenSet(false),
    m_jobSuccessLogURIHasBeenSet(false),
    m_jobFailureLogURIHasBeenSet(false)
{
  *this = jsonValue;
}

JobLogs& JobLogs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobCompletionReportURI"))
  {
    m_jobCompletionReportURI = jsonValue.GetString("JobCompletionReportURI");

    m_jobCompletionReportURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobSuccessLogURI"))
  {
    m_jobSuccessLogURI = jsonValue.GetString("JobSuccessLogURI");

    m_jobSuccessLogURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobFailureLogURI"))
  {
    m_jobFailureLogURI = jsonValue.GetString("JobFailureLogURI");

    m_jobFailureLogURIHasBeenSet = true;
  }

  return *this;
}

JsonValue JobLogs::Jsonize() const
{
  JsonValue payload;

  if(m_jobCompletionReportURIHasBeenSet)
  {
   payload.WithString("JobCompletionReportURI", m_jobCompletionReportURI);

  }

  if(m_jobSuccessLogURIHasBeenSet)
  {
   payload.WithString("JobSuccessLogURI", m_jobSuccessLogURI);

  }

  if(m_jobFailureLogURIHasBeenSet)
  {
   payload.WithString("JobFailureLogURI", m_jobFailureLogURI);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
