/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace NotificationsContacts {
class NotificationsContactsEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace NotificationsContacts
}  // namespace Aws
