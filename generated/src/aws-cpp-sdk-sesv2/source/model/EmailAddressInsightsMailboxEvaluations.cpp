/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/EmailAddressInsightsMailboxEvaluations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

EmailAddressInsightsMailboxEvaluations::EmailAddressInsightsMailboxEvaluations(JsonView jsonValue) { *this = jsonValue; }

EmailAddressInsightsMailboxEvaluations& EmailAddressInsightsMailboxEvaluations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HasValidSyntax")) {
    m_hasValidSyntax = jsonValue.GetObject("HasValidSyntax");
    m_hasValidSyntaxHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HasValidDnsRecords")) {
    m_hasValidDnsRecords = jsonValue.GetObject("HasValidDnsRecords");
    m_hasValidDnsRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MailboxExists")) {
    m_mailboxExists = jsonValue.GetObject("MailboxExists");
    m_mailboxExistsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsRoleAddress")) {
    m_isRoleAddress = jsonValue.GetObject("IsRoleAddress");
    m_isRoleAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsDisposable")) {
    m_isDisposable = jsonValue.GetObject("IsDisposable");
    m_isDisposableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsRandomInput")) {
    m_isRandomInput = jsonValue.GetObject("IsRandomInput");
    m_isRandomInputHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAddressInsightsMailboxEvaluations::Jsonize() const {
  JsonValue payload;

  if (m_hasValidSyntaxHasBeenSet) {
    payload.WithObject("HasValidSyntax", m_hasValidSyntax.Jsonize());
  }

  if (m_hasValidDnsRecordsHasBeenSet) {
    payload.WithObject("HasValidDnsRecords", m_hasValidDnsRecords.Jsonize());
  }

  if (m_mailboxExistsHasBeenSet) {
    payload.WithObject("MailboxExists", m_mailboxExists.Jsonize());
  }

  if (m_isRoleAddressHasBeenSet) {
    payload.WithObject("IsRoleAddress", m_isRoleAddress.Jsonize());
  }

  if (m_isDisposableHasBeenSet) {
    payload.WithObject("IsDisposable", m_isDisposable.Jsonize());
  }

  if (m_isRandomInputHasBeenSet) {
    payload.WithObject("IsRandomInput", m_isRandomInput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
