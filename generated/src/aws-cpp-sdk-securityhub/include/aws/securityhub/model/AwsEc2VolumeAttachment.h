/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An attachment to an Amazon EC2 volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VolumeAttachment">AWS
   * API Reference</a></p>
   */
  class AwsEc2VolumeAttachment
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VolumeAttachment();
    AWS_SECURITYHUB_API AwsEc2VolumeAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VolumeAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline const Aws::String& GetAttachTime() const{ return m_attachTime; }

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline void SetAttachTime(const Aws::String& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline void SetAttachTime(Aws::String&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline void SetAttachTime(const char* value) { m_attachTimeHasBeenSet = true; m_attachTime.assign(value); }

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline AwsEc2VolumeAttachment& WithAttachTime(const Aws::String& value) { SetAttachTime(value); return *this;}

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline AwsEc2VolumeAttachment& WithAttachTime(Aws::String&& value) { SetAttachTime(std::move(value)); return *this;}

    /**
     * <p>The datetime when the attachment initiated.</p>
     */
    inline AwsEc2VolumeAttachment& WithAttachTime(const char* value) { SetAttachTime(value); return *this;}


    /**
     * <p>Whether the EBS volume is deleted when the EC2 instance is terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Whether the EBS volume is deleted when the EC2 instance is terminated.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Whether the EBS volume is deleted when the EC2 instance is terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Whether the EBS volume is deleted when the EC2 instance is terminated.</p>
     */
    inline AwsEc2VolumeAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline AwsEc2VolumeAttachment& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline AwsEc2VolumeAttachment& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline AwsEc2VolumeAttachment& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline AwsEc2VolumeAttachment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline AwsEc2VolumeAttachment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The attachment state of the volume. Valid values are as follows:</p> <ul>
     * <li> <p> <code>attaching</code> </p> </li> <li> <p> <code>attached</code> </p>
     * </li> <li> <p> <code>busy</code> </p> </li> <li> <p> <code>detaching</code> </p>
     * </li> <li> <p> <code>detached</code> </p> </li> </ul>
     */
    inline AwsEc2VolumeAttachment& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
