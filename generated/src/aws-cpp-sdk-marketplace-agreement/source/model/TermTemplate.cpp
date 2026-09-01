/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/TermTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

TermTemplate::TermTemplate(JsonView jsonValue) { *this = jsonValue; }

TermTemplate& TermTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentScheduleTermTemplate")) {
    m_paymentScheduleTermTemplate = jsonValue.GetObject("paymentScheduleTermTemplate");
    m_paymentScheduleTermTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue TermTemplate::Jsonize() const {
  JsonValue payload;

  if (m_paymentScheduleTermTemplateHasBeenSet) {
    payload.WithObject("paymentScheduleTermTemplate", m_paymentScheduleTermTemplate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
