﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CommandPlugin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CommandPlugin::CommandPlugin(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandPlugin& CommandPlugin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandPluginStatusMapper::GetCommandPluginStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");
    m_responseCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseStartDateTime"))
  {
    m_responseStartDateTime = jsonValue.GetDouble("ResponseStartDateTime");
    m_responseStartDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseFinishDateTime"))
  {
    m_responseFinishDateTime = jsonValue.GetDouble("ResponseFinishDateTime");
    m_responseFinishDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetString("Output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardOutputUrl"))
  {
    m_standardOutputUrl = jsonValue.GetString("StandardOutputUrl");
    m_standardOutputUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardErrorUrl"))
  {
    m_standardErrorUrl = jsonValue.GetString("StandardErrorUrl");
    m_standardErrorUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputS3Region"))
  {
    m_outputS3Region = jsonValue.GetString("OutputS3Region");
    m_outputS3RegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("OutputS3BucketName");
    m_outputS3BucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputS3KeyPrefix"))
  {
    m_outputS3KeyPrefix = jsonValue.GetString("OutputS3KeyPrefix");
    m_outputS3KeyPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandPlugin::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommandPluginStatusMapper::GetNameForCommandPluginStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_responseCodeHasBeenSet)
  {
   payload.WithInteger("ResponseCode", m_responseCode);

  }

  if(m_responseStartDateTimeHasBeenSet)
  {
   payload.WithDouble("ResponseStartDateTime", m_responseStartDateTime.SecondsWithMSPrecision());
  }

  if(m_responseFinishDateTimeHasBeenSet)
  {
   payload.WithDouble("ResponseFinishDateTime", m_responseFinishDateTime.SecondsWithMSPrecision());
  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("Output", m_output);

  }

  if(m_standardOutputUrlHasBeenSet)
  {
   payload.WithString("StandardOutputUrl", m_standardOutputUrl);

  }

  if(m_standardErrorUrlHasBeenSet)
  {
   payload.WithString("StandardErrorUrl", m_standardErrorUrl);

  }

  if(m_outputS3RegionHasBeenSet)
  {
   payload.WithString("OutputS3Region", m_outputS3Region);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
