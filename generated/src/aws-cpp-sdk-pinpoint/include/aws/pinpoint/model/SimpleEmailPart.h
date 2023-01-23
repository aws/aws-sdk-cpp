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
   * <p>Specifies the subject or body of an email message, represented as textual
   * email data and the applicable character set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SimpleEmailPart">AWS
   * API Reference</a></p>
   */
  class SimpleEmailPart
  {
  public:
    AWS_PINPOINT_API SimpleEmailPart();
    AWS_PINPOINT_API SimpleEmailPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SimpleEmailPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline SimpleEmailPart& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline SimpleEmailPart& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * <p>The applicable character set for the message content.</p>
     */
    inline SimpleEmailPart& WithCharset(const char* value) { SetCharset(value); return *this;}


    /**
     * <p>The textual data of the message content.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The textual data of the message content.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The textual data of the message content.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The textual data of the message content.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The textual data of the message content.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The textual data of the message content.</p>
     */
    inline SimpleEmailPart& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The textual data of the message content.</p>
     */
    inline SimpleEmailPart& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The textual data of the message content.</p>
     */
    inline SimpleEmailPart& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
