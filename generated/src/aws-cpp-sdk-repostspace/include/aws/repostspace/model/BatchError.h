/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
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
namespace repostspace
{
namespace Model
{

  /**
   * <p>An error that occurred during a batch operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/BatchError">AWS
   * API Reference</a></p>
   */
  class BatchError
  {
  public:
    AWS_REPOSTSPACE_API BatchError() = default;
    AWS_REPOSTSPACE_API BatchError(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API BatchError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The accessor identifier that's related to the error.</p>
     */
    inline const Aws::String& GetAccessorId() const { return m_accessorId; }
    inline bool AccessorIdHasBeenSet() const { return m_accessorIdHasBeenSet; }
    template<typename AccessorIdT = Aws::String>
    void SetAccessorId(AccessorIdT&& value) { m_accessorIdHasBeenSet = true; m_accessorId = std::forward<AccessorIdT>(value); }
    template<typename AccessorIdT = Aws::String>
    BatchError& WithAccessorId(AccessorIdT&& value) { SetAccessorId(std::forward<AccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline int GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(int value) { m_errorHasBeenSet = true; m_error = value; }
    inline BatchError& WithError(int value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessorId;
    bool m_accessorIdHasBeenSet = false;

    int m_error{0};
    bool m_errorHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
