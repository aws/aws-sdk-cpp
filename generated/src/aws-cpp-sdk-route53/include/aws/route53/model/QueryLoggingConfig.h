/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a configuration for DNS query
   * logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/QueryLoggingConfig">AWS
   * API Reference</a></p>
   */
  class QueryLoggingConfig
  {
  public:
    AWS_ROUTE53_API QueryLoggingConfig() = default;
    AWS_ROUTE53_API QueryLoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API QueryLoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QueryLoggingConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    QueryLoggingConfig& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const { return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    void SetCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::forward<CloudWatchLogsLogGroupArnT>(value); }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    QueryLoggingConfig& WithCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { SetCloudWatchLogsLogGroupArn(std::forward<CloudWatchLogsLogGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
