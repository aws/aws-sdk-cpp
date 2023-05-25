/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestination.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class PutRumMetricsDestinationRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API PutRumMetricsDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRumMetricsDestination"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}


    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline PutRumMetricsDestinationRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline PutRumMetricsDestinationRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline PutRumMetricsDestinationRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of an IAM
     * role that RUM will assume to write to the Evidently experiment that you are
     * sending metrics to. This role must have permission to write to that
     * experiment.</p>
     */
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
