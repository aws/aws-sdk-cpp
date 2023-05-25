/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ControlFindingGenerator.h>
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


    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline const ControlFindingGenerator& GetControlFindingGenerator() const{ return m_controlFindingGenerator; }

    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline void SetControlFindingGenerator(const ControlFindingGenerator& value) { m_controlFindingGenerator = value; }

    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline void SetControlFindingGenerator(ControlFindingGenerator&& value) { m_controlFindingGenerator = std::move(value); }

    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline DescribeHubResult& WithControlFindingGenerator(const ControlFindingGenerator& value) { SetControlFindingGenerator(value); return *this;}

    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline DescribeHubResult& WithControlFindingGenerator(ControlFindingGenerator&& value) { SetControlFindingGenerator(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeHubResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeHubResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeHubResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_hubArn;

    Aws::String m_subscribedAt;

    bool m_autoEnableControls;

    ControlFindingGenerator m_controlFindingGenerator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
