/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>An input event for a end user message in an Amazon Q Business web experience.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TextInputEvent">AWS
   * API Reference</a></p>
   */
  class TextInputEvent
  {
  public:
    AWS_QBUSINESS_API TextInputEvent();
    AWS_QBUSINESS_API TextInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TextInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A user message in a text message input event.</p>
     */
    inline const Aws::String& GetUserMessage() const{ return m_userMessage; }

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline bool UserMessageHasBeenSet() const { return m_userMessageHasBeenSet; }

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline void SetUserMessage(const Aws::String& value) { m_userMessageHasBeenSet = true; m_userMessage = value; }

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline void SetUserMessage(Aws::String&& value) { m_userMessageHasBeenSet = true; m_userMessage = std::move(value); }

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline void SetUserMessage(const char* value) { m_userMessageHasBeenSet = true; m_userMessage.assign(value); }

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline TextInputEvent& WithUserMessage(const Aws::String& value) { SetUserMessage(value); return *this;}

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline TextInputEvent& WithUserMessage(Aws::String&& value) { SetUserMessage(std::move(value)); return *this;}

    /**
     * <p>A user message in a text message input event.</p>
     */
    inline TextInputEvent& WithUserMessage(const char* value) { SetUserMessage(value); return *this;}

  private:

    Aws::String m_userMessage;
    bool m_userMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
