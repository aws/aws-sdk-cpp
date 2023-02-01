/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Another operation is in progress. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_NIMBLESTUDIO_API ConflictException();
    AWS_NIMBLESTUDIO_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A more specific error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>A more specific error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A more specific error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A more specific error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A more specific error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>A more specific error code.</p>
     */
    inline ConflictException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>A more specific error code.</p>
     */
    inline ConflictException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>A more specific error code.</p>
     */
    inline ConflictException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The exception context.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>The exception context.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The exception context.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The exception context.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The exception context.</p>
     */
    inline ConflictException& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>A human-readable description of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the error.</p>
     */
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
