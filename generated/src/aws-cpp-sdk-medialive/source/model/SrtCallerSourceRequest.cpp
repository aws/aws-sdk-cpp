/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtCallerSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

SrtCallerSourceRequest::SrtCallerSourceRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

SrtCallerSourceRequest& SrtCallerSourceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decryption"))
  {
    m_decryption = jsonValue.GetObject("decryption");
    m_decryptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumLatency"))
  {
    m_minimumLatency = jsonValue.GetInteger("minimumLatency");
    m_minimumLatencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srtListenerAddress"))
  {
    m_srtListenerAddress = jsonValue.GetString("srtListenerAddress");
    m_srtListenerAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srtListenerPort"))
  {
    m_srtListenerPort = jsonValue.GetString("srtListenerPort");
    m_srtListenerPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtCallerSourceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_decryptionHasBeenSet)
  {
   payload.WithObject("decryption", m_decryption.Jsonize());

  }

  if(m_minimumLatencyHasBeenSet)
  {
   payload.WithInteger("minimumLatency", m_minimumLatency);

  }

  if(m_srtListenerAddressHasBeenSet)
  {
   payload.WithString("srtListenerAddress", m_srtListenerAddress);

  }

  if(m_srtListenerPortHasBeenSet)
  {
   payload.WithString("srtListenerPort", m_srtListenerPort);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
