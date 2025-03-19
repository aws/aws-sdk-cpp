/**
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
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult() = default;
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckDescription>& GetChecks() const { return m_checks; }
    template<typename ChecksT = Aws::Vector<TrustedAdvisorCheckDescription>>
    void SetChecks(ChecksT&& value) { m_checksHasBeenSet = true; m_checks = std::forward<ChecksT>(value); }
    template<typename ChecksT = Aws::Vector<TrustedAdvisorCheckDescription>>
    DescribeTrustedAdvisorChecksResult& WithChecks(ChecksT&& value) { SetChecks(std::forward<ChecksT>(value)); return *this;}
    template<typename ChecksT = TrustedAdvisorCheckDescription>
    DescribeTrustedAdvisorChecksResult& AddChecks(ChecksT&& value) { m_checksHasBeenSet = true; m_checks.emplace_back(std::forward<ChecksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrustedAdvisorChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustedAdvisorCheckDescription> m_checks;
    bool m_checksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
