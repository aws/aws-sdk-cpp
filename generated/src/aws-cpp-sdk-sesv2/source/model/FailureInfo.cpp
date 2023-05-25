/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/FailureInfo.h>
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

FailureInfo::FailureInfo() : 
    m_failedRecordsS3UrlHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailureInfo::FailureInfo(JsonView jsonValue) : 
    m_failedRecordsS3UrlHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailureInfo& FailureInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailedRecordsS3Url"))
  {
    m_failedRecordsS3Url = jsonValue.GetString("FailedRecordsS3Url");

    m_failedRecordsS3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureInfo::Jsonize() const
{
  JsonValue payload;

  if(m_failedRecordsS3UrlHasBeenSet)
  {
   payload.WithString("FailedRecordsS3Url", m_failedRecordsS3Url);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
