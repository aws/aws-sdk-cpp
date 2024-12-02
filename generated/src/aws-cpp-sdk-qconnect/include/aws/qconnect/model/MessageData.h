/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TextMessage.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The message data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageData">AWS
   * API Reference</a></p>
   */
  class MessageData
  {
  public:
    AWS_QCONNECT_API MessageData();
    AWS_QCONNECT_API MessageData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message data in text type.</p>
     */
    inline const TextMessage& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const TextMessage& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(TextMessage&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline MessageData& WithText(const TextMessage& value) { SetText(value); return *this;}
    inline MessageData& WithText(TextMessage&& value) { SetText(std::move(value)); return *this;}
    ///@}
  private:

    TextMessage m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
