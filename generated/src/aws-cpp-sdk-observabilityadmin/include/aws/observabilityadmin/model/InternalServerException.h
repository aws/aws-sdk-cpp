/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p> Indicates the request has failed to process because of an unknown server
   * error, exception, or failure. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_OBSERVABILITYADMIN_API InternalServerException();
    AWS_OBSERVABILITYADMIN_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InternalServerException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InternalServerException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InternalServerException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the exception. </p>
     */
    inline const Aws::String& GetAmznErrorType() const{ return m_amznErrorType; }
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
    inline void SetAmznErrorType(const Aws::String& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = value; }
    inline void SetAmznErrorType(Aws::String&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::move(value); }
    inline void SetAmznErrorType(const char* value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType.assign(value); }
    inline InternalServerException& WithAmznErrorType(const Aws::String& value) { SetAmznErrorType(value); return *this;}
    inline InternalServerException& WithAmznErrorType(Aws::String&& value) { SetAmznErrorType(std::move(value)); return *this;}
    inline InternalServerException& WithAmznErrorType(const char* value) { SetAmznErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_amznErrorType;
    bool m_amznErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
