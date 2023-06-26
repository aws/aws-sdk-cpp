/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
   * <p>The name of the field in the request payload that contains your customer's
   * username. </p> <p>This data type is used in the <code>RequestInspection</code>
   * and <code>RequestInspectionACFP</code> data types. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UsernameField">AWS
   * API Reference</a></p>
   */
  class UsernameField
  {
  public:
    AWS_WAFV2_API UsernameField();
    AWS_WAFV2_API UsernameField(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API UsernameField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline UsernameField& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline UsernameField& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the username field. </p> <p>How you specify this depends on the
     * request inspection payload type.</p> <ul> <li> <p>For JSON payloads, specify the
     * field name in JSON pointer syntax. For information about the JSON Pointer
     * syntax, see the Internet Engineering Task Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "username": "THE_USERNAME" } }</code>, the username field specification is
     * <code>/form/username</code>. </p> </li> <li> <p>For form encoded payload types,
     * use the HTML form names.</p> <p>For example, for an HTML form with the input
     * element named <code>username1</code>, the username field specification is
     * <code>username1</code> </p> </li> </ul>
     */
    inline UsernameField& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
