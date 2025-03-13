/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A user input field in an plugin action execution payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionExecutionPayloadField">AWS
   * API Reference</a></p>
   */
  class ActionExecutionPayloadField
  {
  public:
    AWS_QBUSINESS_API ActionExecutionPayloadField() = default;
    AWS_QBUSINESS_API ActionExecutionPayloadField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionExecutionPayloadField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of a user input field in an plugin action execution payload.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    ActionExecutionPayloadField& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
