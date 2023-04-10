/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateFaceLivenessSessionRequestSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

CreateFaceLivenessSessionRequestSettings::CreateFaceLivenessSessionRequestSettings() : 
    m_outputConfigHasBeenSet(false),
    m_auditImagesLimit(0),
    m_auditImagesLimitHasBeenSet(false)
{
}

CreateFaceLivenessSessionRequestSettings::CreateFaceLivenessSessionRequestSettings(JsonView jsonValue) : 
    m_outputConfigHasBeenSet(false),
    m_auditImagesLimit(0),
    m_auditImagesLimitHasBeenSet(false)
{
  *this = jsonValue;
}

CreateFaceLivenessSessionRequestSettings& CreateFaceLivenessSessionRequestSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

    m_outputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditImagesLimit"))
  {
    m_auditImagesLimit = jsonValue.GetInteger("AuditImagesLimit");

    m_auditImagesLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateFaceLivenessSessionRequestSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_auditImagesLimitHasBeenSet)
  {
   payload.WithInteger("AuditImagesLimit", m_auditImagesLimit);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
