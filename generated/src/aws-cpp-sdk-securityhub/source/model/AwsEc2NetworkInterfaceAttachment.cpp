/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfaceAttachment.h>
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

AwsEc2NetworkInterfaceAttachment::AwsEc2NetworkInterfaceAttachment() : 
    m_attachTimeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceAttachment::AwsEc2NetworkInterfaceAttachment(JsonView jsonValue) : 
    m_attachTimeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceAttachment& AwsEc2NetworkInterfaceAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachTime"))
  {
    m_attachTime = jsonValue.GetString("AttachTime");

    m_attachTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");

    m_attachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("DeleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceIndex"))
  {
    m_deviceIndex = jsonValue.GetInteger("DeviceIndex");

    m_deviceIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceOwnerId"))
  {
    m_instanceOwnerId = jsonValue.GetString("InstanceOwnerId");

    m_instanceOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfaceAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachTimeHasBeenSet)
  {
   payload.WithString("AttachTime", m_attachTime);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("DeleteOnTermination", m_deleteOnTermination);

  }

  if(m_deviceIndexHasBeenSet)
  {
   payload.WithInteger("DeviceIndex", m_deviceIndex);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceOwnerIdHasBeenSet)
  {
   payload.WithString("InstanceOwnerId", m_instanceOwnerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
