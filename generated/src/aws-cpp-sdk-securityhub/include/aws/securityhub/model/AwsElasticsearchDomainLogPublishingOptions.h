/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsElasticsearchDomainLogPublishingOptionsLogConfig.h>
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
   * <p>configures the CloudWatch Logs to publish for the Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainLogPublishingOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainLogPublishingOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions() = default;
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetIndexSlowLogs() const { return m_indexSlowLogs; }
    inline bool IndexSlowLogsHasBeenSet() const { return m_indexSlowLogsHasBeenSet; }
    template<typename IndexSlowLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    void SetIndexSlowLogs(IndexSlowLogsT&& value) { m_indexSlowLogsHasBeenSet = true; m_indexSlowLogs = std::forward<IndexSlowLogsT>(value); }
    template<typename IndexSlowLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    AwsElasticsearchDomainLogPublishingOptions& WithIndexSlowLogs(IndexSlowLogsT&& value) { SetIndexSlowLogs(std::forward<IndexSlowLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetSearchSlowLogs() const { return m_searchSlowLogs; }
    inline bool SearchSlowLogsHasBeenSet() const { return m_searchSlowLogsHasBeenSet; }
    template<typename SearchSlowLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    void SetSearchSlowLogs(SearchSlowLogsT&& value) { m_searchSlowLogsHasBeenSet = true; m_searchSlowLogs = std::forward<SearchSlowLogsT>(value); }
    template<typename SearchSlowLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    AwsElasticsearchDomainLogPublishingOptions& WithSearchSlowLogs(SearchSlowLogsT&& value) { SetSearchSlowLogs(std::forward<SearchSlowLogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetAuditLogs() const { return m_auditLogs; }
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }
    template<typename AuditLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    void SetAuditLogs(AuditLogsT&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::forward<AuditLogsT>(value); }
    template<typename AuditLogsT = AwsElasticsearchDomainLogPublishingOptionsLogConfig>
    AwsElasticsearchDomainLogPublishingOptions& WithAuditLogs(AuditLogsT&& value) { SetAuditLogs(std::forward<AuditLogsT>(value)); return *this;}
    ///@}
  private:

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_indexSlowLogs;
    bool m_indexSlowLogsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_searchSlowLogs;
    bool m_searchSlowLogsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
