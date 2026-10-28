/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MulticastSourceCreateRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MulticastSourceCreateRequest::MulticastSourceCreateRequest(JsonView jsonValue) { *this = jsonValue; }

MulticastSourceCreateRequest& MulticastSourceCreateRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceIp")) {
    m_sourceIp = jsonValue.GetString("sourceIp");
    m_sourceIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secondarySourceIp")) {
    m_secondarySourceIp = jsonValue.GetString("secondarySourceIp");
    m_secondarySourceIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secondaryUrl")) {
    m_secondaryUrl = jsonValue.GetString("secondaryUrl");
    m_secondaryUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue MulticastSourceCreateRequest::Jsonize() const {
  JsonValue payload;

  if (m_sourceIpHasBeenSet) {
    payload.WithString("sourceIp", m_sourceIp);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_secondarySourceIpHasBeenSet) {
    payload.WithString("secondarySourceIp", m_secondarySourceIp);
  }

  if (m_secondaryUrlHasBeenSet) {
    payload.WithString("secondaryUrl", m_secondaryUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
