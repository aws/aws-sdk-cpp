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
   * <p>Information about the field values that an end user can use to provide to
   * Amazon Q Business for Amazon Q Business to perform the requested plugin
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionReviewPayloadFieldAllowedValue">AWS
   * API Reference</a></p>
   */
  class ActionReviewPayloadFieldAllowedValue
  {
  public:
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue() = default;
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field value.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    ActionReviewPayloadFieldAllowedValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline Aws::Utils::DocumentView GetDisplayValue() const { return m_displayValue; }
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }
    template<typename DisplayValueT = Aws::Utils::Document>
    void SetDisplayValue(DisplayValueT&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::forward<DisplayValueT>(value); }
    template<typename DisplayValueT = Aws::Utils::Document>
    ActionReviewPayloadFieldAllowedValue& WithDisplayValue(DisplayValueT&& value) { SetDisplayValue(std::forward<DisplayValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::Document m_displayValue;
    bool m_displayValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
