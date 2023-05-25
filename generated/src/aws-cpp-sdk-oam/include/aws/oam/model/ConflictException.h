/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>A resource was in an inconsistent state during an update or a
   * deletion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_OAM_API ConflictException();
    AWS_OAM_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetAmznErrorType() const{ return m_amznErrorType; }

    /**
     * <p>The name of the exception.</p>
     */
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetAmznErrorType(const Aws::String& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = value; }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetAmznErrorType(Aws::String&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::move(value); }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetAmznErrorType(const char* value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType.assign(value); }

    /**
     * <p>The name of the exception.</p>
     */
    inline ConflictException& WithAmznErrorType(const Aws::String& value) { SetAmznErrorType(value); return *this;}

    /**
     * <p>The name of the exception.</p>
     */
    inline ConflictException& WithAmznErrorType(Aws::String&& value) { SetAmznErrorType(std::move(value)); return *this;}

    /**
     * <p>The name of the exception.</p>
     */
    inline ConflictException& WithAmznErrorType(const char* value) { SetAmznErrorType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_amznErrorType;
    bool m_amznErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
