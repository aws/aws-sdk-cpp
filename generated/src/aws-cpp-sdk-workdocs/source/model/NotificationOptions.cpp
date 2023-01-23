/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/NotificationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

NotificationOptions::NotificationOptions() : 
    m_sendEmail(false),
    m_sendEmailHasBeenSet(false),
    m_emailMessageHasBeenSet(false)
{
}

NotificationOptions::NotificationOptions(JsonView jsonValue) : 
    m_sendEmail(false),
    m_sendEmailHasBeenSet(false),
    m_emailMessageHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationOptions& NotificationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SendEmail"))
  {
    m_sendEmail = jsonValue.GetBool("SendEmail");

    m_sendEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailMessage"))
  {
    m_emailMessage = jsonValue.GetString("EmailMessage");

    m_emailMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_sendEmailHasBeenSet)
  {
   payload.WithBool("SendEmail", m_sendEmail);

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithString("EmailMessage", m_emailMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
