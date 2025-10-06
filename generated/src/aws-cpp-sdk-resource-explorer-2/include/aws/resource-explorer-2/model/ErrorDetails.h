/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>Contains information about an error that occurred during a Resource Explorer
   * setup operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_RESOURCEEXPLORER2_API ErrorDetails() = default;
    AWS_RESOURCEEXPLORER2_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code that identifies the type of error that occurred.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    ErrorDetails& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the error that occurred.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ErrorDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
