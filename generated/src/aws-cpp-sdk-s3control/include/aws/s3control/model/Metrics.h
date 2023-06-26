﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MetricsStatus.h>
#include <aws/s3control/model/ReplicationTimeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container that specifies replication metrics-related
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Metrics">AWS
   * API Reference</a></p>
   */
  class Metrics
  {
  public:
    AWS_S3CONTROL_API Metrics();
    AWS_S3CONTROL_API Metrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Metrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline const MetricsStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline void SetStatus(const MetricsStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline void SetStatus(MetricsStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline Metrics& WithStatus(const MetricsStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether replication metrics are enabled. </p>
     */
    inline Metrics& WithStatus(MetricsStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const ReplicationTimeValue& GetEventThreshold() const{ return m_eventThreshold; }

    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline bool EventThresholdHasBeenSet() const { return m_eventThresholdHasBeenSet; }

    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetEventThreshold(const ReplicationTimeValue& value) { m_eventThresholdHasBeenSet = true; m_eventThreshold = value; }

    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetEventThreshold(ReplicationTimeValue&& value) { m_eventThresholdHasBeenSet = true; m_eventThreshold = std::move(value); }

    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline Metrics& WithEventThreshold(const ReplicationTimeValue& value) { SetEventThreshold(value); return *this;}

    /**
     * <p>A container that specifies the time threshold for emitting the
     * <code>s3:Replication:OperationMissedThreshold</code> event. </p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline Metrics& WithEventThreshold(ReplicationTimeValue&& value) { SetEventThreshold(std::move(value)); return *this;}

  private:

    MetricsStatus m_status;
    bool m_statusHasBeenSet = false;

    ReplicationTimeValue m_eventThreshold;
    bool m_eventThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
