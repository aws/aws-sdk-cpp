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
   * <p>Unexpected error while processing the request. Retry the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/InternalServiceFault">AWS
   * API Reference</a></p>
   */
  class InternalServiceFault
  {
  public:
    AWS_OAM_API InternalServiceFault() = default;
    AWS_OAM_API InternalServiceFault(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API InternalServiceFault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InternalServiceFault& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetAmznErrorType() const { return m_amznErrorType; }
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
    template<typename AmznErrorTypeT = Aws::String>
    void SetAmznErrorType(AmznErrorTypeT&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::forward<AmznErrorTypeT>(value); }
    template<typename AmznErrorTypeT = Aws::String>
    InternalServiceFault& WithAmznErrorType(AmznErrorTypeT&& value) { SetAmznErrorType(std::forward<AmznErrorTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_amznErrorType;
    bool m_amznErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
