﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArn = value; }
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArn = std::move(value); }
    inline void SetLogGroupArn(const char* value) { m_logGroupArn.assign(value); }
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEmailMonitoringConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEmailMonitoringConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;

    Aws::String m_logGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
