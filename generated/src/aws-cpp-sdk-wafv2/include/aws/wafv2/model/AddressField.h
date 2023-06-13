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
   * <p>The name of a field in the request payload that contains part or all of your
   * customer's primary physical address. </p> <p>This data type is used in the
   * <code>RequestInspectionACFP</code> data type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AddressField">AWS
   * API Reference</a></p>
   */
  class AddressField
  {
  public:
    AWS_WAFV2_API AddressField();
    AWS_WAFV2_API AddressField(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AddressField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline AddressField& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline AddressField& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of a single primary address field. </p> <p>How you specify the
     * address fields depends on the request inspection payload type.</p> <ul> <li>
     * <p>For JSON payloads, specify the field identifiers in JSON pointer syntax. For
     * information about the JSON Pointer syntax, see the Internet Engineering Task
     * Force (IETF) documentation <a
     * href="https://tools.ietf.org/html/rfc6901">JavaScript Object Notation (JSON)
     * Pointer</a>. </p> <p>For example, for the JSON payload <code>{ "form": {
     * "primaryaddressline1": "THE_ADDRESS1", "primaryaddressline2": "THE_ADDRESS2",
     * "primaryaddressline3": "THE_ADDRESS3" } }</code>, the address field idenfiers
     * are <code>/form/primaryaddressline1</code>,
     * <code>/form/primaryaddressline2</code>, and
     * <code>/form/primaryaddressline3</code>.</p> </li> <li> <p>For form encoded
     * payload types, use the HTML form names.</p> <p>For example, for an HTML form
     * with input elements named <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>, the
     * address fields identifiers are <code>primaryaddressline1</code>,
     * <code>primaryaddressline2</code>, and <code>primaryaddressline3</code>. </p>
     * </li> </ul>
     */
    inline AddressField& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
