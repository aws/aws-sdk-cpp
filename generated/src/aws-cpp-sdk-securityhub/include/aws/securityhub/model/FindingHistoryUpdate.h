/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An array of objects that provides details about a change to a finding,
   * including the Amazon Web Services Security Finding Format (ASFF) field that
   * changed, the value of the field before the change, and the value of the field
   * after the change. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingHistoryUpdate">AWS
   * API Reference</a></p>
   */
  class FindingHistoryUpdate
  {
  public:
    AWS_SECURITYHUB_API FindingHistoryUpdate();
    AWS_SECURITYHUB_API FindingHistoryUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline const Aws::String& GetUpdatedField() const{ return m_updatedField; }

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline bool UpdatedFieldHasBeenSet() const { return m_updatedFieldHasBeenSet; }

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline void SetUpdatedField(const Aws::String& value) { m_updatedFieldHasBeenSet = true; m_updatedField = value; }

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline void SetUpdatedField(Aws::String&& value) { m_updatedFieldHasBeenSet = true; m_updatedField = std::move(value); }

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline void SetUpdatedField(const char* value) { m_updatedFieldHasBeenSet = true; m_updatedField.assign(value); }

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithUpdatedField(const Aws::String& value) { SetUpdatedField(value); return *this;}

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithUpdatedField(Aws::String&& value) { SetUpdatedField(std::move(value)); return *this;}

    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithUpdatedField(const char* value) { SetUpdatedField(value); return *this;}


    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline const Aws::String& GetOldValue() const{ return m_oldValue; }

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline bool OldValueHasBeenSet() const { return m_oldValueHasBeenSet; }

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline void SetOldValue(const Aws::String& value) { m_oldValueHasBeenSet = true; m_oldValue = value; }

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline void SetOldValue(Aws::String&& value) { m_oldValueHasBeenSet = true; m_oldValue = std::move(value); }

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline void SetOldValue(const char* value) { m_oldValueHasBeenSet = true; m_oldValue.assign(value); }

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithOldValue(const Aws::String& value) { SetOldValue(value); return *this;}

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithOldValue(Aws::String&& value) { SetOldValue(std::move(value)); return *this;}

    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline FindingHistoryUpdate& WithOldValue(const char* value) { SetOldValue(value); return *this;}


    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline const Aws::String& GetNewValue() const{ return m_newValue; }

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline void SetNewValue(const Aws::String& value) { m_newValueHasBeenSet = true; m_newValue = value; }

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline void SetNewValue(Aws::String&& value) { m_newValueHasBeenSet = true; m_newValue = std::move(value); }

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline void SetNewValue(const char* value) { m_newValueHasBeenSet = true; m_newValue.assign(value); }

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline FindingHistoryUpdate& WithNewValue(const Aws::String& value) { SetNewValue(value); return *this;}

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline FindingHistoryUpdate& WithNewValue(Aws::String&& value) { SetNewValue(std::move(value)); return *this;}

    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline FindingHistoryUpdate& WithNewValue(const char* value) { SetNewValue(value); return *this;}

  private:

    Aws::String m_updatedField;
    bool m_updatedFieldHasBeenSet = false;

    Aws::String m_oldValue;
    bool m_oldValueHasBeenSet = false;

    Aws::String m_newValue;
    bool m_newValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
