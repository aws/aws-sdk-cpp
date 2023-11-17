/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/Pipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

Pipeline::Pipeline() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineArnHasBeenSet(false),
    m_minUnits(0),
    m_minUnitsHasBeenSet(false),
    m_maxUnits(0),
    m_maxUnitsHasBeenSet(false),
    m_status(PipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_pipelineConfigurationBodyHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_ingestEndpointUrlsHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false),
    m_bufferOptionsHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_serviceVpcEndpointsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Pipeline::Pipeline(JsonView jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineArnHasBeenSet(false),
    m_minUnits(0),
    m_minUnitsHasBeenSet(false),
    m_maxUnits(0),
    m_maxUnitsHasBeenSet(false),
    m_status(PipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_pipelineConfigurationBodyHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_ingestEndpointUrlsHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false),
    m_bufferOptionsHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_serviceVpcEndpointsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Pipeline& Pipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineName"))
  {
    m_pipelineName = jsonValue.GetString("PipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");

    m_pipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinUnits"))
  {
    m_minUnits = jsonValue.GetInteger("MinUnits");

    m_minUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxUnits"))
  {
    m_maxUnits = jsonValue.GetInteger("MaxUnits");

    m_maxUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PipelineStatusMapper::GetPipelineStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetObject("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineConfigurationBody"))
  {
    m_pipelineConfigurationBody = jsonValue.GetString("PipelineConfigurationBody");

    m_pipelineConfigurationBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngestEndpointUrls"))
  {
    Aws::Utils::Array<JsonView> ingestEndpointUrlsJsonList = jsonValue.GetArray("IngestEndpointUrls");
    for(unsigned ingestEndpointUrlsIndex = 0; ingestEndpointUrlsIndex < ingestEndpointUrlsJsonList.GetLength(); ++ingestEndpointUrlsIndex)
    {
      m_ingestEndpointUrls.push_back(ingestEndpointUrlsJsonList[ingestEndpointUrlsIndex].AsString());
    }
    m_ingestEndpointUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingOptions"))
  {
    m_logPublishingOptions = jsonValue.GetObject("LogPublishingOptions");

    m_logPublishingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpoints"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointsJsonList = jsonValue.GetArray("VpcEndpoints");
    for(unsigned vpcEndpointsIndex = 0; vpcEndpointsIndex < vpcEndpointsJsonList.GetLength(); ++vpcEndpointsIndex)
    {
      m_vpcEndpoints.push_back(vpcEndpointsJsonList[vpcEndpointsIndex].AsObject());
    }
    m_vpcEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BufferOptions"))
  {
    m_bufferOptions = jsonValue.GetObject("BufferOptions");

    m_bufferOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionAtRestOptions"))
  {
    m_encryptionAtRestOptions = jsonValue.GetObject("EncryptionAtRestOptions");

    m_encryptionAtRestOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceVpcEndpoints"))
  {
    Aws::Utils::Array<JsonView> serviceVpcEndpointsJsonList = jsonValue.GetArray("ServiceVpcEndpoints");
    for(unsigned serviceVpcEndpointsIndex = 0; serviceVpcEndpointsIndex < serviceVpcEndpointsJsonList.GetLength(); ++serviceVpcEndpointsIndex)
    {
      m_serviceVpcEndpoints.push_back(serviceVpcEndpointsJsonList[serviceVpcEndpointsIndex].AsObject());
    }
    m_serviceVpcEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Pipeline::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("PipelineName", m_pipelineName);

  }

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_minUnitsHasBeenSet)
  {
   payload.WithInteger("MinUnits", m_minUnits);

  }

  if(m_maxUnitsHasBeenSet)
  {
   payload.WithInteger("MaxUnits", m_maxUnits);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PipelineStatusMapper::GetNameForPipelineStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithObject("StatusReason", m_statusReason.Jsonize());

  }

  if(m_pipelineConfigurationBodyHasBeenSet)
  {
   payload.WithString("PipelineConfigurationBody", m_pipelineConfigurationBody);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_ingestEndpointUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ingestEndpointUrlsJsonList(m_ingestEndpointUrls.size());
   for(unsigned ingestEndpointUrlsIndex = 0; ingestEndpointUrlsIndex < ingestEndpointUrlsJsonList.GetLength(); ++ingestEndpointUrlsIndex)
   {
     ingestEndpointUrlsJsonList[ingestEndpointUrlsIndex].AsString(m_ingestEndpointUrls[ingestEndpointUrlsIndex]);
   }
   payload.WithArray("IngestEndpointUrls", std::move(ingestEndpointUrlsJsonList));

  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   payload.WithObject("LogPublishingOptions", m_logPublishingOptions.Jsonize());

  }

  if(m_vpcEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcEndpointsJsonList(m_vpcEndpoints.size());
   for(unsigned vpcEndpointsIndex = 0; vpcEndpointsIndex < vpcEndpointsJsonList.GetLength(); ++vpcEndpointsIndex)
   {
     vpcEndpointsJsonList[vpcEndpointsIndex].AsObject(m_vpcEndpoints[vpcEndpointsIndex].Jsonize());
   }
   payload.WithArray("VpcEndpoints", std::move(vpcEndpointsJsonList));

  }

  if(m_bufferOptionsHasBeenSet)
  {
   payload.WithObject("BufferOptions", m_bufferOptions.Jsonize());

  }

  if(m_encryptionAtRestOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionAtRestOptions", m_encryptionAtRestOptions.Jsonize());

  }

  if(m_serviceVpcEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceVpcEndpointsJsonList(m_serviceVpcEndpoints.size());
   for(unsigned serviceVpcEndpointsIndex = 0; serviceVpcEndpointsIndex < serviceVpcEndpointsJsonList.GetLength(); ++serviceVpcEndpointsIndex)
   {
     serviceVpcEndpointsJsonList[serviceVpcEndpointsIndex].AsObject(m_serviceVpcEndpoints[serviceVpcEndpointsIndex].Jsonize());
   }
   payload.WithArray("ServiceVpcEndpoints", std::move(serviceVpcEndpointsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
