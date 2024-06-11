﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorCheckDescription.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>Information about the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorChecks</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecksResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrustedAdvisorChecksResult
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult();
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckDescription>& GetChecks() const{ return m_checks; }
    inline void SetChecks(const Aws::Vector<TrustedAdvisorCheckDescription>& value) { m_checks = value; }
    inline void SetChecks(Aws::Vector<TrustedAdvisorCheckDescription>&& value) { m_checks = std::move(value); }
    inline DescribeTrustedAdvisorChecksResult& WithChecks(const Aws::Vector<TrustedAdvisorCheckDescription>& value) { SetChecks(value); return *this;}
    inline DescribeTrustedAdvisorChecksResult& WithChecks(Aws::Vector<TrustedAdvisorCheckDescription>&& value) { SetChecks(std::move(value)); return *this;}
    inline DescribeTrustedAdvisorChecksResult& AddChecks(const TrustedAdvisorCheckDescription& value) { m_checks.push_back(value); return *this; }
    inline DescribeTrustedAdvisorChecksResult& AddChecks(TrustedAdvisorCheckDescription&& value) { m_checks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrustedAdvisorChecksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrustedAdvisorChecksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrustedAdvisorChecksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrustedAdvisorCheckDescription> m_checks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
