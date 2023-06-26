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
    AWS_WAFV2_API ResponseInspectionHeader();
    AWS_WAFV2_API ResponseInspectionHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline ResponseInspectionHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline ResponseInspectionHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the header to match against. The name must be an exact match,
     * including case.</p> <p>JSON example: <code>"Name": [ "RequestResult" ]</code>
     * </p>
     */
    inline ResponseInspectionHeader& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessValues() const{ return m_successValues; }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline bool SuccessValuesHasBeenSet() const { return m_successValuesHasBeenSet; }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline void SetSuccessValues(const Aws::Vector<Aws::String>& value) { m_successValuesHasBeenSet = true; m_successValues = value; }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline void SetSuccessValues(Aws::Vector<Aws::String>&& value) { m_successValuesHasBeenSet = true; m_successValues = std::move(value); }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline ResponseInspectionHeader& WithSuccessValues(const Aws::Vector<Aws::String>& value) { SetSuccessValues(value); return *this;}

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline ResponseInspectionHeader& WithSuccessValues(Aws::Vector<Aws::String>&& value) { SetSuccessValues(std::move(value)); return *this;}

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline ResponseInspectionHeader& AddSuccessValues(const Aws::String& value) { m_successValuesHasBeenSet = true; m_successValues.push_back(value); return *this; }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline ResponseInspectionHeader& AddSuccessValues(Aws::String&& value) { m_successValuesHasBeenSet = true; m_successValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Values in the response header with the specified name that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON examples: <code>"SuccessValues": [
     * "LoginPassed", "Successful login" ]</code> and <code>"SuccessValues": [
     * "AccountCreated", "Successful account creation" ]</code> </p>
     */
    inline ResponseInspectionHeader& AddSuccessValues(const char* value) { m_successValuesHasBeenSet = true; m_successValues.push_back(value); return *this; }


    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureValues() const{ return m_failureValues; }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline bool FailureValuesHasBeenSet() const { return m_failureValuesHasBeenSet; }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline void SetFailureValues(const Aws::Vector<Aws::String>& value) { m_failureValuesHasBeenSet = true; m_failureValues = value; }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline void SetFailureValues(Aws::Vector<Aws::String>&& value) { m_failureValuesHasBeenSet = true; m_failureValues = std::move(value); }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline ResponseInspectionHeader& WithFailureValues(const Aws::Vector<Aws::String>& value) { SetFailureValues(value); return *this;}

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline ResponseInspectionHeader& WithFailureValues(Aws::Vector<Aws::String>&& value) { SetFailureValues(std::move(value)); return *this;}

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline ResponseInspectionHeader& AddFailureValues(const Aws::String& value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(value); return *this; }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline ResponseInspectionHeader& AddFailureValues(Aws::String&& value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Values in the response header with the specified name that indicate a failed
     * login or account creation attempt. To be counted as a failure, the value must be
     * an exact match, including case. Each value must be unique among the success and
     * failure values. </p> <p>JSON examples: <code>"FailureValues": [ "LoginFailed",
     * "Failed login" ]</code> and <code>"FailureValues": [ "AccountCreationFailed"
     * ]</code> </p>
     */
    inline ResponseInspectionHeader& AddFailureValues(const char* value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(value); return *this; }

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
