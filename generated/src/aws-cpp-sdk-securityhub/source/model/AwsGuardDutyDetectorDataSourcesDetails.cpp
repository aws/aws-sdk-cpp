/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsGuardDutyDetectorDataSourcesDetails::AwsGuardDutyDetectorDataSourcesDetails() : 
    m_cloudTrailHasBeenSet(false),
    m_dnsLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false),
    m_malwareProtectionHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
}

AwsGuardDutyDetectorDataSourcesDetails::AwsGuardDutyDetectorDataSourcesDetails(JsonView jsonValue) : 
    m_cloudTrailHasBeenSet(false),
    m_dnsLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false),
    m_malwareProtectionHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsGuardDutyDetectorDataSourcesDetails& AwsGuardDutyDetectorDataSourcesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudTrail"))
  {
    m_cloudTrail = jsonValue.GetObject("CloudTrail");

    m_cloudTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsLogs"))
  {
    m_dnsLogs = jsonValue.GetObject("DnsLogs");

    m_dnsLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowLogs"))
  {
    m_flowLogs = jsonValue.GetObject("FlowLogs");

    m_flowLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Kubernetes"))
  {
    m_kubernetes = jsonValue.GetObject("Kubernetes");

    m_kubernetesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MalwareProtection"))
  {
    m_malwareProtection = jsonValue.GetObject("MalwareProtection");

    m_malwareProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("S3Logs");

    m_s3LogsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsGuardDutyDetectorDataSourcesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudTrailHasBeenSet)
  {
   payload.WithObject("CloudTrail", m_cloudTrail.Jsonize());

  }

  if(m_dnsLogsHasBeenSet)
  {
   payload.WithObject("DnsLogs", m_dnsLogs.Jsonize());

  }

  if(m_flowLogsHasBeenSet)
  {
   payload.WithObject("FlowLogs", m_flowLogs.Jsonize());

  }

  if(m_kubernetesHasBeenSet)
  {
   payload.WithObject("Kubernetes", m_kubernetes.Jsonize());

  }

  if(m_malwareProtectionHasBeenSet)
  {
   payload.WithObject("MalwareProtection", m_malwareProtection.Jsonize());

  }

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("S3Logs", m_s3Logs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
