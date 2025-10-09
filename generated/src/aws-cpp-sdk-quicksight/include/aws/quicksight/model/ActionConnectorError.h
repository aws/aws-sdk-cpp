/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ActionConnectorErrorType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Contains error information for an action connector that is in an error
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ActionConnectorError">AWS
   * API Reference</a></p>
   */
  class ActionConnectorError
  {
  public:
    AWS_QUICKSIGHT_API ActionConnectorError() = default;
    AWS_QUICKSIGHT_API ActionConnectorError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ActionConnectorError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message describing what went wrong with the action connector.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ActionConnectorError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type or category of the error.</p>
     */
    inline ActionConnectorErrorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionConnectorErrorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActionConnectorError& WithType(ActionConnectorErrorType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ActionConnectorErrorType m_type{ActionConnectorErrorType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
