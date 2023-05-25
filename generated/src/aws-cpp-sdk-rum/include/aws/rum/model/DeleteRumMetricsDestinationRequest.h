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
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class DeleteRumMetricsDestinationRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API DeleteRumMetricsDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRumMetricsDestination"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the app monitor that is sending metrics to the destination that
     * you want to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}


    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The type of destination to delete. Valid values are <code>CloudWatch</code>
     * and <code>Evidently</code>.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. This parameter specifies the ARN of the Evidently
     * experiment that corresponds to the destination to delete.</p>
     */
    inline DeleteRumMetricsDestinationRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
