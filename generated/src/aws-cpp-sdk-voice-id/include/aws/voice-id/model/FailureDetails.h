/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains error details for a failed batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FailureDetails">AWS
   * API Reference</a></p>
   */
  class FailureDetails
  {
  public:
    AWS_VOICEID_API FailureDetails();
    AWS_VOICEID_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline FailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline FailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the error that caused the batch job failure.</p>
     */
    inline FailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>An HTTP status code representing the nature of the error.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>An HTTP status code representing the nature of the error.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>An HTTP status code representing the nature of the error.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>An HTTP status code representing the nature of the error.</p>
     */
    inline FailureDetails& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
