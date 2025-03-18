/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Configures inspection of the response status code. This is part of the
   * <code>ResponseInspection</code> configuration for
   * <code>AWSManagedRulesATPRuleSet</code> and
   * <code>AWSManagedRulesACFPRuleSet</code>. </p>  <p>Response inspection is
   * available only in web ACLs that protect Amazon CloudFront distributions.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ResponseInspectionStatusCode">AWS
   * API Reference</a></p>
   */
  class ResponseInspectionStatusCode
  {
  public:
    AWS_WAFV2_API ResponseInspectionStatusCode() = default;
    AWS_WAFV2_API ResponseInspectionStatusCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionStatusCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status codes in the response that indicate a successful login or account
     * creation attempt. To be counted as a success, the response status code must
     * match one of these. Each code must be unique among the success and failure
     * status codes. </p> <p>JSON example: <code>"SuccessCodes": [ 200, 201 ]</code>
     * </p>
     */
    inline const Aws::Vector<int>& GetSuccessCodes() const { return m_successCodes; }
    inline bool SuccessCodesHasBeenSet() const { return m_successCodesHasBeenSet; }
    template<typename SuccessCodesT = Aws::Vector<int>>
    void SetSuccessCodes(SuccessCodesT&& value) { m_successCodesHasBeenSet = true; m_successCodes = std::forward<SuccessCodesT>(value); }
    template<typename SuccessCodesT = Aws::Vector<int>>
    ResponseInspectionStatusCode& WithSuccessCodes(SuccessCodesT&& value) { SetSuccessCodes(std::forward<SuccessCodesT>(value)); return *this;}
    inline ResponseInspectionStatusCode& AddSuccessCodes(int value) { m_successCodesHasBeenSet = true; m_successCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status codes in the response that indicate a failed login or account creation
     * attempt. To be counted as a failure, the response status code must match one of
     * these. Each code must be unique among the success and failure status codes. </p>
     * <p>JSON example: <code>"FailureCodes": [ 400, 404 ]</code> </p>
     */
    inline const Aws::Vector<int>& GetFailureCodes() const { return m_failureCodes; }
    inline bool FailureCodesHasBeenSet() const { return m_failureCodesHasBeenSet; }
    template<typename FailureCodesT = Aws::Vector<int>>
    void SetFailureCodes(FailureCodesT&& value) { m_failureCodesHasBeenSet = true; m_failureCodes = std::forward<FailureCodesT>(value); }
    template<typename FailureCodesT = Aws::Vector<int>>
    ResponseInspectionStatusCode& WithFailureCodes(FailureCodesT&& value) { SetFailureCodes(std::forward<FailureCodesT>(value)); return *this;}
    inline ResponseInspectionStatusCode& AddFailureCodes(int value) { m_failureCodesHasBeenSet = true; m_failureCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<int> m_successCodes;
    bool m_successCodesHasBeenSet = false;

    Aws::Vector<int> m_failureCodes;
    bool m_failureCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
