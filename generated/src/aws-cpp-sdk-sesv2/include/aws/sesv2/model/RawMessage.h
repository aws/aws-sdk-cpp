﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>Represents the raw content of an email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/RawMessage">AWS
   * API Reference</a></p>
   */
  class RawMessage
  {
  public:
    AWS_SESV2_API RawMessage() = default;
    AWS_SESV2_API RawMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API RawMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * the Amazon SES supports.</p> </li> <li> <p>The raw data of the message needs to
     * base64-encoded if you are accessing Amazon SES directly through the HTTPS
     * interface. If you are accessing Amazon SES using an Amazon Web Services SDK, the
     * SDK takes care of the base 64-encoding for you.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, you should encode that content to ensure that recipients' email
     * clients render the message properly.</p> </li> <li> <p>The length of any single
     * line of text in the message can't exceed 1,000 characters. This restriction is
     * defined in <a href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li>
     * </ul>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    RawMessage& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
