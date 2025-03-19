/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Configures inspection of the response body. WAF can inspect the first 65,536
   * bytes (64 KB) of the response body. This is part of the
   * <code>ResponseInspection</code> configuration for
   * <code>AWSManagedRulesATPRuleSet</code> and
   * <code>AWSManagedRulesACFPRuleSet</code>. </p>  <p>Response inspection is
   * available only in web ACLs that protect Amazon CloudFront distributions.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ResponseInspectionBodyContains">AWS
   * API Reference</a></p>
   */
  class ResponseInspectionBodyContains
  {
  public:
    AWS_WAFV2_API ResponseInspectionBodyContains() = default;
    AWS_WAFV2_API ResponseInspectionBodyContains(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionBodyContains& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Strings in the body of the response that indicate a successful login or
     * account creation attempt. To be counted as a success, the string can be anywhere
     * in the body and must be an exact match, including case. Each string must be
     * unique among the success and failure strings. </p> <p>JSON examples:
     * <code>"SuccessStrings": [ "Login successful" ]</code> and
     * <code>"SuccessStrings": [ "Account creation successful", "Welcome to our site!"
     * ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessStrings() const { return m_successStrings; }
    inline bool SuccessStringsHasBeenSet() const { return m_successStringsHasBeenSet; }
    template<typename SuccessStringsT = Aws::Vector<Aws::String>>
    void SetSuccessStrings(SuccessStringsT&& value) { m_successStringsHasBeenSet = true; m_successStrings = std::forward<SuccessStringsT>(value); }
    template<typename SuccessStringsT = Aws::Vector<Aws::String>>
    ResponseInspectionBodyContains& WithSuccessStrings(SuccessStringsT&& value) { SetSuccessStrings(std::forward<SuccessStringsT>(value)); return *this;}
    template<typename SuccessStringsT = Aws::String>
    ResponseInspectionBodyContains& AddSuccessStrings(SuccessStringsT&& value) { m_successStringsHasBeenSet = true; m_successStrings.emplace_back(std::forward<SuccessStringsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Strings in the body of the response that indicate a failed login or account
     * creation attempt. To be counted as a failure, the string can be anywhere in the
     * body and must be an exact match, including case. Each string must be unique
     * among the success and failure strings. </p> <p>JSON example:
     * <code>"FailureStrings": [ "Request failed" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureStrings() const { return m_failureStrings; }
    inline bool FailureStringsHasBeenSet() const { return m_failureStringsHasBeenSet; }
    template<typename FailureStringsT = Aws::Vector<Aws::String>>
    void SetFailureStrings(FailureStringsT&& value) { m_failureStringsHasBeenSet = true; m_failureStrings = std::forward<FailureStringsT>(value); }
    template<typename FailureStringsT = Aws::Vector<Aws::String>>
    ResponseInspectionBodyContains& WithFailureStrings(FailureStringsT&& value) { SetFailureStrings(std::forward<FailureStringsT>(value)); return *this;}
    template<typename FailureStringsT = Aws::String>
    ResponseInspectionBodyContains& AddFailureStrings(FailureStringsT&& value) { m_failureStringsHasBeenSet = true; m_failureStrings.emplace_back(std::forward<FailureStringsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_successStrings;
    bool m_successStringsHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureStrings;
    bool m_failureStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
