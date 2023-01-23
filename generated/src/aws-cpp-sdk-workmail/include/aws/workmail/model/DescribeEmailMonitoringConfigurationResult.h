/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class DescribeEmailMonitoringConfigurationResult
  {
  public:
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult();
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_roleArn;

    Aws::String m_logGroupArn;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
