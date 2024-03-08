/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/BillOfMaterialsImportJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

BillOfMaterialsImportJob::BillOfMaterialsImportJob() : 
    m_instanceIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_status(ConfigurationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_s3uriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BillOfMaterialsImportJob::BillOfMaterialsImportJob(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_status(ConfigurationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_s3uriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

BillOfMaterialsImportJob& BillOfMaterialsImportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ConfigurationJobStatusMapper::GetConfigurationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3uri"))
  {
    m_s3uri = jsonValue.GetString("s3uri");

    m_s3uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BillOfMaterialsImportJob::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConfigurationJobStatusMapper::GetNameForConfigurationJobStatus(m_status));
  }

  if(m_s3uriHasBeenSet)
  {
   payload.WithString("s3uri", m_s3uri);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
