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
  class CreateAutomationRuleResult
  {
  public:
    AWS_SECURITYHUB_API CreateAutomationRuleResult();
    AWS_SECURITYHUB_API CreateAutomationRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateAutomationRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline CreateAutomationRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline CreateAutomationRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the automation rule that you created. </p>
     */
    inline CreateAutomationRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAutomationRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAutomationRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAutomationRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_ruleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
