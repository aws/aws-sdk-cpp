/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
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
namespace SageMakerRuntime
{
namespace Model
{

  /**
   * <p> Model (owned by the customer in the container) returned 4xx or 5xx error
   * code. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/ModelError">AWS
   * API Reference</a></p>
   */
  class ModelError
  {
  public:
    AWS_SAGEMAKERRUNTIME_API ModelError();
    AWS_SAGEMAKERRUNTIME_API ModelError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API ModelError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ModelError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ModelError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ModelError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> Original status code. </p>
     */
    inline int GetOriginalStatusCode() const{ return m_originalStatusCode; }

    /**
     * <p> Original status code. </p>
     */
    inline bool OriginalStatusCodeHasBeenSet() const { return m_originalStatusCodeHasBeenSet; }

    /**
     * <p> Original status code. </p>
     */
    inline void SetOriginalStatusCode(int value) { m_originalStatusCodeHasBeenSet = true; m_originalStatusCode = value; }

    /**
     * <p> Original status code. </p>
     */
    inline ModelError& WithOriginalStatusCode(int value) { SetOriginalStatusCode(value); return *this;}


    /**
     * <p> Original message. </p>
     */
    inline const Aws::String& GetOriginalMessage() const{ return m_originalMessage; }

    /**
     * <p> Original message. </p>
     */
    inline bool OriginalMessageHasBeenSet() const { return m_originalMessageHasBeenSet; }

    /**
     * <p> Original message. </p>
     */
    inline void SetOriginalMessage(const Aws::String& value) { m_originalMessageHasBeenSet = true; m_originalMessage = value; }

    /**
     * <p> Original message. </p>
     */
    inline void SetOriginalMessage(Aws::String&& value) { m_originalMessageHasBeenSet = true; m_originalMessage = std::move(value); }

    /**
     * <p> Original message. </p>
     */
    inline void SetOriginalMessage(const char* value) { m_originalMessageHasBeenSet = true; m_originalMessage.assign(value); }

    /**
     * <p> Original message. </p>
     */
    inline ModelError& WithOriginalMessage(const Aws::String& value) { SetOriginalMessage(value); return *this;}

    /**
     * <p> Original message. </p>
     */
    inline ModelError& WithOriginalMessage(Aws::String&& value) { SetOriginalMessage(std::move(value)); return *this;}

    /**
     * <p> Original message. </p>
     */
    inline ModelError& WithOriginalMessage(const char* value) { SetOriginalMessage(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline const Aws::String& GetLogStreamArn() const{ return m_logStreamArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline bool LogStreamArnHasBeenSet() const { return m_logStreamArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline void SetLogStreamArn(const Aws::String& value) { m_logStreamArnHasBeenSet = true; m_logStreamArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline void SetLogStreamArn(Aws::String&& value) { m_logStreamArnHasBeenSet = true; m_logStreamArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline void SetLogStreamArn(const char* value) { m_logStreamArnHasBeenSet = true; m_logStreamArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline ModelError& WithLogStreamArn(const Aws::String& value) { SetLogStreamArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline ModelError& WithLogStreamArn(Aws::String&& value) { SetLogStreamArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the log stream. </p>
     */
    inline ModelError& WithLogStreamArn(const char* value) { SetLogStreamArn(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_originalStatusCode;
    bool m_originalStatusCodeHasBeenSet = false;

    Aws::String m_originalMessage;
    bool m_originalMessageHasBeenSet = false;

    Aws::String m_logStreamArn;
    bool m_logStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
