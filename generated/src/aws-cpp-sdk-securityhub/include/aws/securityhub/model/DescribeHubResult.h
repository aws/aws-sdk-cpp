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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class DescribeHubResult
  {
  public:
    AWS_SECURITYHUB_API DescribeHubResult();
    AWS_SECURITYHUB_API DescribeHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}


    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline const Aws::String& GetSubscribedAt() const{ return m_subscribedAt; }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(const Aws::String& value) { m_subscribedAt = value; }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(Aws::String&& value) { m_subscribedAt = std::move(value); }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(const char* value) { m_subscribedAt.assign(value); }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(const Aws::String& value) { SetSubscribedAt(value); return *this;}

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(Aws::String&& value) { SetSubscribedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(const char* value) { SetSubscribedAt(value); return *this;}


    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>If set to <code>true</code>, then new controls for
     * enabled standards are enabled automatically. If set to <code>false</code>, then
     * new controls are not enabled.</p>
     */
    inline bool GetAutoEnableControls() const{ return m_autoEnableControls; }

    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>If set to <code>true</code>, then new controls for
     * enabled standards are enabled automatically. If set to <code>false</code>, then
     * new controls are not enabled.</p>
     */
    inline void SetAutoEnableControls(bool value) { m_autoEnableControls = value; }

    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>If set to <code>true</code>, then new controls for
     * enabled standards are enabled automatically. If set to <code>false</code>, then
     * new controls are not enabled.</p>
     */
    inline DescribeHubResult& WithAutoEnableControls(bool value) { SetAutoEnableControls(value); return *this;}

  private:

    Aws::String m_hubArn;

    Aws::String m_subscribedAt;

    bool m_autoEnableControls;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
