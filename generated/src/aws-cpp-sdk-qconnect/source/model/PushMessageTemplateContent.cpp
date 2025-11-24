/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/PushMessageTemplateContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

PushMessageTemplateContent::PushMessageTemplateContent(JsonView jsonValue) { *this = jsonValue; }

PushMessageTemplateContent& PushMessageTemplateContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("adm")) {
    m_adm = jsonValue.GetObject("adm");
    m_admHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apns")) {
    m_apns = jsonValue.GetObject("apns");
    m_apnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fcm")) {
    m_fcm = jsonValue.GetObject("fcm");
    m_fcmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baidu")) {
    m_baidu = jsonValue.GetObject("baidu");
    m_baiduHasBeenSet = true;
  }
  return *this;
}

JsonValue PushMessageTemplateContent::Jsonize() const {
  JsonValue payload;

  if (m_admHasBeenSet) {
    payload.WithObject("adm", m_adm.Jsonize());
  }

  if (m_apnsHasBeenSet) {
    payload.WithObject("apns", m_apns.Jsonize());
  }

  if (m_fcmHasBeenSet) {
    payload.WithObject("fcm", m_fcm.Jsonize());
  }

  if (m_baiduHasBeenSet) {
    payload.WithObject("baidu", m_baidu.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
