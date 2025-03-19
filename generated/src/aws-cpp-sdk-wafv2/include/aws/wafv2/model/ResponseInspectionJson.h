/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configures inspection of the response JSON. WAF can inspect the first 65,536
   * bytes (64 KB) of the response JSON. This is part of the
   * <code>ResponseInspection</code> configuration for
   * <code>AWSManagedRulesATPRuleSet</code> and
   * <code>AWSManagedRulesACFPRuleSet</code>. </p>  <p>Response inspection is
   * available only in web ACLs that protect Amazon CloudFront distributions.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ResponseInspectionJson">AWS
   * API Reference</a></p>
   */
  class ResponseInspectionJson
  {
  public:
    AWS_WAFV2_API ResponseInspectionJson() = default;
    AWS_WAFV2_API ResponseInspectionJson(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionJson& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ResponseInspectionJson& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessValues() const { return m_successValues; }
    inline bool SuccessValuesHasBeenSet() const { return m_successValuesHasBeenSet; }
    template<typename SuccessValuesT = Aws::Vector<Aws::String>>
    void SetSuccessValues(SuccessValuesT&& value) { m_successValuesHasBeenSet = true; m_successValues = std::forward<SuccessValuesT>(value); }
    template<typename SuccessValuesT = Aws::Vector<Aws::String>>
    ResponseInspectionJson& WithSuccessValues(SuccessValuesT&& value) { SetSuccessValues(std::forward<SuccessValuesT>(value)); return *this;}
    template<typename SuccessValuesT = Aws::String>
    ResponseInspectionJson& AddSuccessValues(SuccessValuesT&& value) { m_successValuesHasBeenSet = true; m_successValues.emplace_back(std::forward<SuccessValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureValues() const { return m_failureValues; }
    inline bool FailureValuesHasBeenSet() const { return m_failureValuesHasBeenSet; }
    template<typename FailureValuesT = Aws::Vector<Aws::String>>
    void SetFailureValues(FailureValuesT&& value) { m_failureValuesHasBeenSet = true; m_failureValues = std::forward<FailureValuesT>(value); }
    template<typename FailureValuesT = Aws::Vector<Aws::String>>
    ResponseInspectionJson& WithFailureValues(FailureValuesT&& value) { SetFailureValues(std::forward<FailureValuesT>(value)); return *this;}
    template<typename FailureValuesT = Aws::String>
    ResponseInspectionJson& AddFailureValues(FailureValuesT&& value) { m_failureValuesHasBeenSet = true; m_failureValues.emplace_back(std::forward<FailureValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_successValues;
    bool m_successValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureValues;
    bool m_failureValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
