/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Summary information about the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SessionSummary">AWS
   * API Reference</a></p>
   */
  class SessionSummary
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SessionSummary();
    AWS_CONNECTWISDOMSERVICE_API SessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API SessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArnHasBeenSet = true; m_assistantArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(const char* value) { m_assistantArnHasBeenSet = true; m_assistantArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}


    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline SessionSummary& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline SessionSummary& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline SessionSummary& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline SessionSummary& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}


    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSummary& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSummary& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSummary& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
