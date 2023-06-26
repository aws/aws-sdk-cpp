/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/AcceptPageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptPageRequest::AcceptPageRequest() : 
    m_pageIdHasBeenSet(false),
    m_contactChannelIdHasBeenSet(false),
    m_acceptType(AcceptType::NOT_SET),
    m_acceptTypeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_acceptCodeHasBeenSet(false),
    m_acceptCodeValidation(AcceptCodeValidation::NOT_SET),
    m_acceptCodeValidationHasBeenSet(false)
{
}

Aws::String AcceptPageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pageIdHasBeenSet)
  {
   payload.WithString("PageId", m_pageId);

  }

  if(m_contactChannelIdHasBeenSet)
  {
   payload.WithString("ContactChannelId", m_contactChannelId);

  }

  if(m_acceptTypeHasBeenSet)
  {
   payload.WithString("AcceptType", AcceptTypeMapper::GetNameForAcceptType(m_acceptType));
  }

  if(m_noteHasBeenSet)
  {
   payload.WithString("Note", m_note);

  }

  if(m_acceptCodeHasBeenSet)
  {
   payload.WithString("AcceptCode", m_acceptCode);

  }

  if(m_acceptCodeValidationHasBeenSet)
  {
   payload.WithString("AcceptCodeValidation", AcceptCodeValidationMapper::GetNameForAcceptCodeValidation(m_acceptCodeValidation));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptPageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.AcceptPage"));
  return headers;

}




