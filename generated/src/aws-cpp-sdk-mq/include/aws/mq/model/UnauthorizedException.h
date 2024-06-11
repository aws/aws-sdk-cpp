/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about an error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UnauthorizedException">AWS
   * API Reference</a></p>
   */
  class UnauthorizedException
  {
  public:
    AWS_MQ_API UnauthorizedException();
    AWS_MQ_API UnauthorizedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API UnauthorizedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute which caused the error.</p>
     */
    inline const Aws::String& GetErrorAttribute() const{ return m_errorAttribute; }
    inline bool ErrorAttributeHasBeenSet() const { return m_errorAttributeHasBeenSet; }
    inline void SetErrorAttribute(const Aws::String& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = value; }
    inline void SetErrorAttribute(Aws::String&& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = std::move(value); }
    inline void SetErrorAttribute(const char* value) { m_errorAttributeHasBeenSet = true; m_errorAttribute.assign(value); }
    inline UnauthorizedException& WithErrorAttribute(const Aws::String& value) { SetErrorAttribute(value); return *this;}
    inline UnauthorizedException& WithErrorAttribute(Aws::String&& value) { SetErrorAttribute(std::move(value)); return *this;}
    inline UnauthorizedException& WithErrorAttribute(const char* value) { SetErrorAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline UnauthorizedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline UnauthorizedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline UnauthorizedException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_errorAttribute;
    bool m_errorAttributeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
