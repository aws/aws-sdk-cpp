/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ResourceNotFoundExceptionReason.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Indicates that a requested resource is not found.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_SSOADMIN_API ResourceNotFoundException() = default;
    AWS_SSOADMIN_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourceNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource not found exception.</p>
     */
    inline ResourceNotFoundExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ResourceNotFoundExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ResourceNotFoundException& WithReason(ResourceNotFoundExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceNotFoundExceptionReason m_reason{ResourceNotFoundExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
