/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Contains the name and value pair of an email header to add to your email. You
   * can have up to 15 MessageHeaders. A header can contain information such as the
   * sender, receiver, route, or timestamp.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageHeader">AWS
   * API Reference</a></p>
   */
  class MessageHeader
  {
  public:
    AWS_PINPOINT_API MessageHeader();
    AWS_PINPOINT_API MessageHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline MessageHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline MessageHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the message header. The header name can contain up to 126
     * characters.</p>
     */
    inline MessageHeader& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline MessageHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline MessageHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the message header. The header value can contain up to 870
     * characters, including the length of any rendered attributes. For example if you
     * add the {CreationDate} attribute, it renders as YYYY-MM-DDTHH:MM:SS.SSSZ and is
     * 24 characters in length.</p>
     */
    inline MessageHeader& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
