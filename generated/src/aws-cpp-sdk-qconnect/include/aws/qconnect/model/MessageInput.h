/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageData.h>
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
   * <p>The message input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageInput">AWS
   * API Reference</a></p>
   */
  class MessageInput
  {
  public:
    AWS_QCONNECT_API MessageInput();
    AWS_QCONNECT_API MessageInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message input value.</p>
     */
    inline const MessageData& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MessageData& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MessageData&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline MessageInput& WithValue(const MessageData& value) { SetValue(value); return *this;}
    inline MessageInput& WithValue(MessageData&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    MessageData m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
