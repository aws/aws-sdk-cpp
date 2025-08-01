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
   * <p> The requested operation would exceed the allowed quota for the specified
   * resource type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException() = default;
    AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceQuotaExceededException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the exception. </p>
     */
    inline const Aws::String& GetAmznErrorType() const { return m_amznErrorType; }
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
    template<typename AmznErrorTypeT = Aws::String>
    void SetAmznErrorType(AmznErrorTypeT&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::forward<AmznErrorTypeT>(value); }
    template<typename AmznErrorTypeT = Aws::String>
    ServiceQuotaExceededException& WithAmznErrorType(AmznErrorTypeT&& value) { SetAmznErrorType(std::forward<AmznErrorTypeT>(value)); return *this;}
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
