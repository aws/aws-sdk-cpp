/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The request isn't valid. Verify that you entered valid contents for the
   * command and try again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_SSM_API ValidationException();
    AWS_SSM_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the invalid request.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }
    inline ValidationException& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}
    inline ValidationException& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}
    inline ValidationException& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
