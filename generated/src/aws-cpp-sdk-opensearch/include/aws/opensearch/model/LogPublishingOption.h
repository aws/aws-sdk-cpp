/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies whether the Amazon OpenSearch Service domain publishes the
   * OpenSearch application and slow logs to Amazon CloudWatch. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createdomain-configure-slow-logs.html">Monitoring
   * OpenSearch logs with Amazon CloudWatch Logs</a>.</p>  <p>After you enable
   * log publishing, you still have to enable the collection of slow logs using the
   * OpenSearch REST API.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/LogPublishingOption">AWS
   * API Reference</a></p>
   */
  class LogPublishingOption
  {
  public:
    AWS_OPENSEARCHSERVICE_API LogPublishingOption() = default;
    AWS_OPENSEARCHSERVICE_API LogPublishingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API LogPublishingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs group to publish logs
     * to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const { return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    void SetCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::forward<CloudWatchLogsLogGroupArnT>(value); }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    LogPublishingOption& WithCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { SetCloudWatchLogsLogGroupArn(std::forward<CloudWatchLogsLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the log should be published.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline LogPublishingOption& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
