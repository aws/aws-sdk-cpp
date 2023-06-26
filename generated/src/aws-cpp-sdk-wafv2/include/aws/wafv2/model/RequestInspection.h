/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/PayloadType.h>
#include <aws/wafv2/model/UsernameField.h>
#include <aws/wafv2/model/PasswordField.h>
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
   * <p>The criteria for inspecting login requests, used by the ATP rule group to
   * validate credentials usage. </p> <p>This is part of the
   * <code>AWSManagedRulesATPRuleSet</code> configuration in
   * <code>ManagedRuleGroupConfig</code>.</p> <p>In these settings, you specify how
   * your application accepts login attempts by providing the request payload type
   * and the names of the fields within the request body where the username and
   * password are provided. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RequestInspection">AWS
   * API Reference</a></p>
   */
  class RequestInspection
  {
  public:
    AWS_WAFV2_API RequestInspection();
    AWS_WAFV2_API RequestInspection(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RequestInspection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline const PayloadType& GetPayloadType() const{ return m_payloadType; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline void SetPayloadType(const PayloadType& value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline void SetPayloadType(PayloadType&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::move(value); }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline RequestInspection& WithPayloadType(const PayloadType& value) { SetPayloadType(value); return *this;}

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline RequestInspection& WithPayloadType(PayloadType&& value) { SetPayloadType(std::move(value)); return *this;}


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
    inline RequestInspection& WithUsernameField(const UsernameField& value) { SetUsernameField(value); return *this;}

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
    inline RequestInspection& WithUsernameField(UsernameField&& value) { SetUsernameField(std::move(value)); return *this;}


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
    inline RequestInspection& WithPasswordField(const PasswordField& value) { SetPasswordField(value); return *this;}

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
    inline RequestInspection& WithPasswordField(PasswordField&& value) { SetPasswordField(std::move(value)); return *this;}

  private:

    PayloadType m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    UsernameField m_usernameField;
    bool m_usernameFieldHasBeenSet = false;

    PasswordField m_passwordField;
    bool m_passwordFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
