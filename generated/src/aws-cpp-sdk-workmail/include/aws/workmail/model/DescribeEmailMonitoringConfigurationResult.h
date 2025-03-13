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
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult() = default;
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeEmailMonitoringConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role associated with the email
     * monitoring configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeEmailMonitoringConfigurationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Log group associated with
     * the email monitoring configuration.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    DescribeEmailMonitoringConfigurationResult& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEmailMonitoringConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
