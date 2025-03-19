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
   * <p>Configures inspection of the response header. This is part of the
   * <code>ResponseInspection</code> configuration for
   * <code>AWSManagedRulesATPRuleSet</code> and
   * <code>AWSManagedRulesACFPRuleSet</code>. </p>  <p>Response inspection is
   * available only in web ACLs that protect Amazon CloudFront distributions.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ResponseInspectionHeader">AWS
   * API Reference</a></p>
   */
  class ResponseInspectionHeader
  {
  public:
    AWS_WAFV2_API ResponseInspectionHeader() = default;
    AWS_WAFV2_API ResponseInspectionHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResponseInspectionHeader& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessValues() const { return m_successValues; }
    inline bool SuccessValuesHasBeenSet() const { return m_successValuesHasBeenSet; }
    template<typename SuccessValuesT = Aws::Vector<Aws::String>>
    void SetSuccessValues(SuccessValuesT&& value) { m_successValuesHasBeenSet = true; m_successValues = std::forward<SuccessValuesT>(value); }
    template<typename SuccessValuesT = Aws::Vector<Aws::String>>
    ResponseInspectionHeader& WithSuccessValues(SuccessValuesT&& value) { SetSuccessValues(std::forward<SuccessValuesT>(value)); return *this;}
    template<typename SuccessValuesT = Aws::String>
    ResponseInspectionHeader& AddSuccessValues(SuccessValuesT&& value) { m_successValuesHasBeenSet = true; m_successValues.emplace_back(std::forward<SuccessValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureValues() const { return m_failureValues; }
    inline bool FailureValuesHasBeenSet() const { return m_failureValuesHasBeenSet; }
    template<typename FailureValuesT = Aws::Vector<Aws::String>>
    void SetFailureValues(FailureValuesT&& value) { m_failureValuesHasBeenSet = true; m_failureValues = std::forward<FailureValuesT>(value); }
    template<typename FailureValuesT = Aws::Vector<Aws::String>>
    ResponseInspectionHeader& WithFailureValues(FailureValuesT&& value) { SetFailureValues(std::forward<FailureValuesT>(value)); return *this;}
    template<typename FailureValuesT = Aws::String>
    ResponseInspectionHeader& AddFailureValues(FailureValuesT&& value) { m_failureValuesHasBeenSet = true; m_failureValues.emplace_back(std::forward<FailureValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_successValues;
    bool m_successValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureValues;
    bool m_failureValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
