/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/PayloadType.h>
#include <aws/wafv2/model/UsernameField.h>
#include <aws/wafv2/model/PasswordField.h>
#include <aws/wafv2/model/EmailField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/PhoneNumberField.h>
#include <aws/wafv2/model/AddressField.h>
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
   * <p>The criteria for inspecting account creation requests, used by the ACFP rule
   * group to validate and track account creation attempts. </p> <p>This is part of
   * the <code>AWSManagedRulesACFPRuleSet</code> configuration in
   * <code>ManagedRuleGroupConfig</code>.</p> <p>In these settings, you specify how
   * your application accepts account creation attempts by providing the request
   * payload type and the names of the fields within the request body where the
   * username, password, email, and primary address and phone number fields are
   * provided. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RequestInspectionACFP">AWS
   * API Reference</a></p>
   */
  class RequestInspectionACFP
  {
  public:
    AWS_WAFV2_API RequestInspectionACFP();
    AWS_WAFV2_API RequestInspectionACFP(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RequestInspectionACFP& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline const PayloadType& GetPayloadType() const{ return m_payloadType; }

    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }

    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline void SetPayloadType(const PayloadType& value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }

    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline void SetPayloadType(PayloadType&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::move(value); }

    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline RequestInspectionACFP& WithPayloadType(const PayloadType& value) { SetPayloadType(value); return *this;}

    /**
     * <p>The payload type for your account creation endpoint, either JSON or form
     * encoded.</p>
     */
    inline RequestInspectionACFP& WithPayloadType(PayloadType&& value) { SetPayloadType(std::move(value)); return *this;}


    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline const UsernameField& GetUsernameField() const{ return m_usernameField; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline bool UsernameFieldHasBeenSet() const { return m_usernameFieldHasBeenSet; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline void SetUsernameField(const UsernameField& value) { m_usernameFieldHasBeenSet = true; m_usernameField = value; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline void SetUsernameField(UsernameField&& value) { m_usernameFieldHasBeenSet = true; m_usernameField = std::move(value); }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline RequestInspectionACFP& WithUsernameField(const UsernameField& value) { SetUsernameField(value); return *this;}

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * username. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline RequestInspectionACFP& WithUsernameField(UsernameField&& value) { SetUsernameField(std::move(value)); return *this;}


    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline const PasswordField& GetPasswordField() const{ return m_passwordField; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline bool PasswordFieldHasBeenSet() const { return m_passwordFieldHasBeenSet; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline void SetPasswordField(const PasswordField& value) { m_passwordFieldHasBeenSet = true; m_passwordField = value; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline void SetPasswordField(PasswordField&& value) { m_passwordFieldHasBeenSet = true; m_passwordField = std::move(value); }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline RequestInspectionACFP& WithPasswordField(const PasswordField& value) { SetPasswordField(value); return *this;}

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * password. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "password": "THE_PASSWORD" } }</code>, the password field specification is
     * <code>/form/password</code>.</p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>password1</code>, the password field specification is
     * <code>password1</code>.</p> </li> </ul>
     */
    inline RequestInspectionACFP& WithPasswordField(PasswordField&& value) { SetPasswordField(std::move(value)); return *this;}


    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline const EmailField& GetEmailField() const{ return m_emailField; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline bool EmailFieldHasBeenSet() const { return m_emailFieldHasBeenSet; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline void SetEmailField(const EmailField& value) { m_emailFieldHasBeenSet = true; m_emailField = value; }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline void SetEmailField(EmailField&& value) { m_emailFieldHasBeenSet = true; m_emailField = std::move(value); }

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline RequestInspectionACFP& WithEmailField(const EmailField& value) { SetEmailField(value); return *this;}

    /**
     * <p>The name of the field in the request payload that contains your customer's
     * email. </p> <p>How you specify this depends on the request inspection payload
     * type.</p> <ul> <li> <p>For JSON payloads, specify the field name in JSON pointer
     * syntax. For information about the JSON Pointer syntax, see the Internet
     * Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "email": "THE_EMAIL" } }</code>, the email field specification is
     * <code>/form/email</code>.</p> </li> <li> <p>For form encoded payload types, use
     * the HTML form names.</p> <p>For example, for an HTML form with the input element
     * named <code>email1</code>, the email field specification is
     * <code>email1</code>.</p> </li> </ul>
     */
    inline RequestInspectionACFP& WithEmailField(EmailField&& value) { SetEmailField(std::move(value)); return *this;}


    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline const Aws::Vector<PhoneNumberField>& GetPhoneNumberFields() const{ return m_phoneNumberFields; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline bool PhoneNumberFieldsHasBeenSet() const { return m_phoneNumberFieldsHasBeenSet; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline void SetPhoneNumberFields(const Aws::Vector<PhoneNumberField>& value) { m_phoneNumberFieldsHasBeenSet = true; m_phoneNumberFields = value; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline void SetPhoneNumberFields(Aws::Vector<PhoneNumberField>&& value) { m_phoneNumberFieldsHasBeenSet = true; m_phoneNumberFields = std::move(value); }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline RequestInspectionACFP& WithPhoneNumberFields(const Aws::Vector<PhoneNumberField>& value) { SetPhoneNumberFields(value); return *this;}

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline RequestInspectionACFP& WithPhoneNumberFields(Aws::Vector<PhoneNumberField>&& value) { SetPhoneNumberFields(std::move(value)); return *this;}

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline RequestInspectionACFP& AddPhoneNumberFields(const PhoneNumberField& value) { m_phoneNumberFieldsHasBeenSet = true; m_phoneNumberFields.push_back(value); return *this; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary phone number. </p> <p>Order the phone number fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the phone
     * number fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryphoneline1": "THE_PHONE1", "primaryphoneline2": "THE_PHONE2",
     * "primaryphoneline3": "THE_PHONE3" } }</code>, the phone number field identifiers
     * are <code>/form/primaryphoneline1</code>, <code>/form/primaryphoneline2</code>,
     * and <code>/form/primaryphoneline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>, the phone
     * number field identifiers are <code>primaryphoneline1</code>,
     * <code>primaryphoneline2</code>, and <code>primaryphoneline3</code>. </p> </li>
     * </ul>
     */
    inline RequestInspectionACFP& AddPhoneNumberFields(PhoneNumberField&& value) { m_phoneNumberFieldsHasBeenSet = true; m_phoneNumberFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline const Aws::Vector<AddressField>& GetAddressFields() const{ return m_addressFields; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline bool AddressFieldsHasBeenSet() const { return m_addressFieldsHasBeenSet; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline void SetAddressFields(const Aws::Vector<AddressField>& value) { m_addressFieldsHasBeenSet = true; m_addressFields = value; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline void SetAddressFields(Aws::Vector<AddressField>&& value) { m_addressFieldsHasBeenSet = true; m_addressFields = std::move(value); }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline RequestInspectionACFP& WithAddressFields(const Aws::Vector<AddressField>& value) { SetAddressFields(value); return *this;}

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline RequestInspectionACFP& WithAddressFields(Aws::Vector<AddressField>&& value) { SetAddressFields(std::move(value)); return *this;}

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline RequestInspectionACFP& AddAddressFields(const AddressField& value) { m_addressFieldsHasBeenSet = true; m_addressFields.push_back(value); return *this; }

    /**
     * <p>The names of the fields in the request payload that contain your customer's
     * primary physical address. </p> <p>Order the address fields in the array exactly
     * as they are ordered in the request payload. </p> <p>How you specify the address
     * fields depends on the request inspection payload type.</p> <ul> <li> <p>For JSON
     * payloads, specify the field identifiers in JSON pointer syntax. For information
     * about the JSON Pointer syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>For example, for the JSON payload <code>{
     * "form": { "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2":
     * "THE_ADDRESS2", "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address
     * field idenfiers are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline RequestInspectionACFP& AddAddressFields(AddressField&& value) { m_addressFieldsHasBeenSet = true; m_addressFields.push_back(std::move(value)); return *this; }

  private:

    PayloadType m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    UsernameField m_usernameField;
    bool m_usernameFieldHasBeenSet = false;

    PasswordField m_passwordField;
    bool m_passwordFieldHasBeenSet = false;

    EmailField m_emailField;
    bool m_emailFieldHasBeenSet = false;

    Aws::Vector<PhoneNumberField> m_phoneNumberFields;
    bool m_phoneNumberFieldsHasBeenSet = false;

    Aws::Vector<AddressField> m_addressFields;
    bool m_addressFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
