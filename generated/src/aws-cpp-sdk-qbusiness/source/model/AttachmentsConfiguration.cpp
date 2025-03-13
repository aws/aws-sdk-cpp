/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttachmentsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AttachmentsConfiguration::AttachmentsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachmentsConfiguration& AttachmentsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentsControlMode"))
  {
    m_attachmentsControlMode = AttachmentsControlModeMapper::GetAttachmentsControlModeForName(jsonValue.GetString("attachmentsControlMode"));
    m_attachmentsControlModeHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentsControlModeHasBeenSet)
  {
   payload.WithString("attachmentsControlMode", AttachmentsControlModeMapper::GetNameForAttachmentsControlMode(m_attachmentsControlMode));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
