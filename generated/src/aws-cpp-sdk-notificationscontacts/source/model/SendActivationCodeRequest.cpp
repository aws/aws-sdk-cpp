/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/notificationscontacts/model/SendActivationCodeRequest.h>

#include <utility>

using namespace Aws::NotificationsContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendActivationCodeRequest::SerializePayload() const { return {}; }
