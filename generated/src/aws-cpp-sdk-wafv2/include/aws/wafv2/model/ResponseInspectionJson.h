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
    AWS_WAFV2_API ResponseInspectionJson();
    AWS_WAFV2_API ResponseInspectionJson(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspectionJson& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline ResponseInspectionJson& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline ResponseInspectionJson& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the value to match against in the JSON. The identifier
     * must be an exact match, including case.</p> <p>JSON examples:
     * <code>"Identifier": [ "/login/success" ]</code> and <code>"Identifier": [
     * "/sign-up/success" ]</code> </p>
     */
    inline ResponseInspectionJson& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessValues() const{ return m_successValues; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline bool SuccessValuesHasBeenSet() const { return m_successValuesHasBeenSet; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline void SetSuccessValues(const Aws::Vector<Aws::String>& value) { m_successValuesHasBeenSet = true; m_successValues = value; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline void SetSuccessValues(Aws::Vector<Aws::String>&& value) { m_successValuesHasBeenSet = true; m_successValues = std::move(value); }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline ResponseInspectionJson& WithSuccessValues(const Aws::Vector<Aws::String>& value) { SetSuccessValues(value); return *this;}

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline ResponseInspectionJson& WithSuccessValues(Aws::Vector<Aws::String>&& value) { SetSuccessValues(std::move(value)); return *this;}

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline ResponseInspectionJson& AddSuccessValues(const Aws::String& value) { m_successValuesHasBeenSet = true; m_successValues.push_back(value); return *this; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline ResponseInspectionJson& AddSuccessValues(Aws::String&& value) { m_successValuesHasBeenSet = true; m_successValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * successful login or account creation attempt. To be counted as a success, the
     * value must be an exact match, including case. Each value must be unique among
     * the success and failure values. </p> <p>JSON example: <code>"SuccessValues": [
     * "True", "Succeeded" ]</code> </p>
     */
    inline ResponseInspectionJson& AddSuccessValues(const char* value) { m_successValuesHasBeenSet = true; m_successValues.push_back(value); return *this; }


    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureValues() const{ return m_failureValues; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline bool FailureValuesHasBeenSet() const { return m_failureValuesHasBeenSet; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline void SetFailureValues(const Aws::Vector<Aws::String>& value) { m_failureValuesHasBeenSet = true; m_failureValues = value; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline void SetFailureValues(Aws::Vector<Aws::String>&& value) { m_failureValuesHasBeenSet = true; m_failureValues = std::move(value); }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline ResponseInspectionJson& WithFailureValues(const Aws::Vector<Aws::String>& value) { SetFailureValues(value); return *this;}

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline ResponseInspectionJson& WithFailureValues(Aws::Vector<Aws::String>&& value) { SetFailureValues(std::move(value)); return *this;}

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline ResponseInspectionJson& AddFailureValues(const Aws::String& value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(value); return *this; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline ResponseInspectionJson& AddFailureValues(Aws::String&& value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Values for the specified identifier in the response JSON that indicate a
     * failed login or account creation attempt. To be counted as a failure, the value
     * must be an exact match, including case. Each value must be unique among the
     * success and failure values. </p> <p>JSON example: <code>"FailureValues": [
     * "False", "Failed" ]</code> </p>
     */
    inline ResponseInspectionJson& AddFailureValues(const char* value) { m_failureValuesHasBeenSet = true; m_failureValues.push_back(value); return *this; }

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
