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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/InternalServerErrorException">AWS
   * API Reference</a></p>
   */
  class InternalServerErrorException
  {
  public:
    AWS_MQ_API InternalServerErrorException() = default;
    AWS_MQ_API InternalServerErrorException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API InternalServerErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute which caused the error.</p>
     */
    inline const Aws::String& GetErrorAttribute() const { return m_errorAttribute; }
    inline bool ErrorAttributeHasBeenSet() const { return m_errorAttributeHasBeenSet; }
    template<typename ErrorAttributeT = Aws::String>
    void SetErrorAttribute(ErrorAttributeT&& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = std::forward<ErrorAttributeT>(value); }
    template<typename ErrorAttributeT = Aws::String>
    InternalServerErrorException& WithErrorAttribute(ErrorAttributeT&& value) { SetErrorAttribute(std::forward<ErrorAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation of the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InternalServerErrorException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
