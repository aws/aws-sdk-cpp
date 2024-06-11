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
   * <p> The Amazon Resource Name (ARN) and other details of the Amazon CloudWatch
   * Logs log group that Amazon Route 53 is publishing logs to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CloudWatchLogsLogGroupArnConfigDetails">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogGroupArnConfigDetails
  {
  public:
    AWS_SECURITYHUB_API CloudWatchLogsLogGroupArnConfigDetails();
    AWS_SECURITYHUB_API CloudWatchLogsLogGroupArnConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CloudWatchLogsLogGroupArnConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the CloudWatch Logs log group that Route 53 is publishing logs
     * to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }
    inline CloudWatchLogsLogGroupArnConfigDetails& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline CloudWatchLogsLogGroupArnConfigDetails& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for a DNS query logging configuration. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CloudWatchLogsLogGroupArnConfigDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CloudWatchLogsLogGroupArnConfigDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
