/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRayRequest.h>
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/CloudWatchLogsConfiguration.h>
#include <aws/xray/model/TraceSegmentDestination.h>

#include <utility>

namespace Aws {
namespace XRay {
namespace Model {

/**
 */
class UpdateTraceSegmentDestinationRequest : public XRayRequest {
 public:
  AWS_XRAY_API UpdateTraceSegmentDestinationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTraceSegmentDestination"; }

  AWS_XRAY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The configured destination of trace segments. </p>
   */
  inline TraceSegmentDestination GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  inline void SetDestination(TraceSegmentDestination value) {
    m_destinationHasBeenSet = true;
    m_destination = value;
  }
  inline UpdateTraceSegmentDestinationRequest& WithDestination(TraceSegmentDestination value) {
    SetDestination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies settings for the CloudWatch Logs log groups that X-Ray creates for
   * Transaction Search. Specify this only when <code>Destination</code> is
   * <code>CloudWatchLogs</code>. </p>
   */
  inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const { return m_cloudWatchLogsConfiguration; }
  inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
  template <typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
  void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) {
    m_cloudWatchLogsConfigurationHasBeenSet = true;
    m_cloudWatchLogsConfiguration = std::forward<CloudWatchLogsConfigurationT>(value);
  }
  template <typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
  UpdateTraceSegmentDestinationRequest& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) {
    SetCloudWatchLogsConfiguration(std::forward<CloudWatchLogsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TraceSegmentDestination m_destination{TraceSegmentDestination::NOT_SET};

  CloudWatchLogsConfiguration m_cloudWatchLogsConfiguration;
  bool m_destinationHasBeenSet = false;
  bool m_cloudWatchLogsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace XRay
}  // namespace Aws
