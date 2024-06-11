﻿/**
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


    ///@{
    /**
     * <p>The name of the CloudWatch RUM app monitor that will send the metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}
    inline PutRumMetricsDestinationRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that is to be the destination and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline PutRumMetricsDestinationRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}
    inline PutRumMetricsDestinationRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter only if <code>Destination</code> is
     * <code>Evidently</code>. This parameter specifies the ARN of the Evidently
     * experiment that will receive the extended metrics.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline PutRumMetricsDestinationRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline PutRumMetricsDestinationRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline PutRumMetricsDestinationRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * don't use this parameter.</p> <p>This parameter specifies the ARN of an IAM role
     * that RUM will assume to write to the Evidently experiment that you are sending
     * metrics to. This role must have permission to write to that experiment.</p>
     * <p>If you specify this parameter, you must be signed on to a role that has <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">PassRole</a>
     * permissions attached to it, to allow the role to be passed. The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/auth-and-access-control-cw.html#managed-policies-cloudwatch-RUM">
     * CloudWatchAmazonCloudWatchRUMFullAccess</a> policy doesn't include
     * <code>PassRole</code> permissions.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline PutRumMetricsDestinationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}
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
