/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Contains the name and value of a message header that you add to an
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MessageHeader">AWS
   * API Reference</a></p>
   */
  class MessageHeader
  {
  public:
    AWS_SESV2_API MessageHeader();
    AWS_SESV2_API MessageHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MessageHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline MessageHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline MessageHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the message header. The message header name has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII character
     * (33 - 126) except for colon (:).</p> </li> <li> <p>Can contain no more than 126
     * characters.</p> </li> </ul>
     */
    inline MessageHeader& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline MessageHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline MessageHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the message header. The message header value has to meet the
     * following criteria:</p> <ul> <li> <p>Can contain any printable ASCII
     * character.</p> </li> <li> <p>Can contain no more than 870 characters.</p> </li>
     * </ul>
     */
    inline MessageHeader& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
