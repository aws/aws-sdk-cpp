/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>An error from a batch read set operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadSetBatchError">AWS
   * API Reference</a></p>
   */
  class ReadSetBatchError
  {
  public:
    AWS_OMICS_API ReadSetBatchError();
    AWS_OMICS_API ReadSetBatchError(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetBatchError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error's code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error's code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error's code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error's code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error's code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error's code.</p>
     */
    inline ReadSetBatchError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error's code.</p>
     */
    inline ReadSetBatchError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error's code.</p>
     */
    inline ReadSetBatchError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The error's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The error's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The error's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The error's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The error's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The error's ID.</p>
     */
    inline ReadSetBatchError& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The error's ID.</p>
     */
    inline ReadSetBatchError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The error's ID.</p>
     */
    inline ReadSetBatchError& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The error's message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error's message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error's message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error's message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error's message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error's message.</p>
     */
    inline ReadSetBatchError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error's message.</p>
     */
    inline ReadSetBatchError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error's message.</p>
     */
    inline ReadSetBatchError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
