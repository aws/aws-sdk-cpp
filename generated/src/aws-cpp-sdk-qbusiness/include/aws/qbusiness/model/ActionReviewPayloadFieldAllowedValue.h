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
   * Amazon Q for Amazon Q to perform the requested plugin action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionReviewPayloadFieldAllowedValue">AWS
   * API Reference</a></p>
   */
  class ActionReviewPayloadFieldAllowedValue
  {
  public:
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue();
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewPayloadFieldAllowedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field.</p>
     */
    inline Aws::Utils::DocumentView GetDisplayValue() const{ return m_displayValue; }

    /**
     * <p>The name of the field.</p>
     */
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }

    /**
     * <p>The name of the field.</p>
     */
    inline void SetDisplayValue(const Aws::Utils::Document& value) { m_displayValueHasBeenSet = true; m_displayValue = value; }

    /**
     * <p>The name of the field.</p>
     */
    inline void SetDisplayValue(Aws::Utils::Document&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::move(value); }

    /**
     * <p>The name of the field.</p>
     */
    inline ActionReviewPayloadFieldAllowedValue& WithDisplayValue(const Aws::Utils::Document& value) { SetDisplayValue(value); return *this;}

    /**
     * <p>The name of the field.</p>
     */
    inline ActionReviewPayloadFieldAllowedValue& WithDisplayValue(Aws::Utils::Document&& value) { SetDisplayValue(std::move(value)); return *this;}


    /**
     * <p>The field value.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>The field value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The field value.</p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The field value.</p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The field value.</p>
     */
    inline ActionReviewPayloadFieldAllowedValue& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>The field value.</p>
     */
    inline ActionReviewPayloadFieldAllowedValue& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::Utils::Document m_displayValue;
    bool m_displayValueHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
