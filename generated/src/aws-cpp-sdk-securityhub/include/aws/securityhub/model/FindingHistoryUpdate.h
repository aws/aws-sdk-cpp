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
    AWS_SECURITYHUB_API FindingHistoryUpdate() = default;
    AWS_SECURITYHUB_API FindingHistoryUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ASFF field that changed during the finding change event. </p>
     */
    inline const Aws::String& GetUpdatedField() const { return m_updatedField; }
    inline bool UpdatedFieldHasBeenSet() const { return m_updatedFieldHasBeenSet; }
    template<typename UpdatedFieldT = Aws::String>
    void SetUpdatedField(UpdatedFieldT&& value) { m_updatedFieldHasBeenSet = true; m_updatedField = std::forward<UpdatedFieldT>(value); }
    template<typename UpdatedFieldT = Aws::String>
    FindingHistoryUpdate& WithUpdatedField(UpdatedFieldT&& value) { SetUpdatedField(std::forward<UpdatedFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the ASFF field before the finding change event. </p>
     */
    inline const Aws::String& GetOldValue() const { return m_oldValue; }
    inline bool OldValueHasBeenSet() const { return m_oldValueHasBeenSet; }
    template<typename OldValueT = Aws::String>
    void SetOldValue(OldValueT&& value) { m_oldValueHasBeenSet = true; m_oldValue = std::forward<OldValueT>(value); }
    template<typename OldValueT = Aws::String>
    FindingHistoryUpdate& WithOldValue(OldValueT&& value) { SetOldValue(std::forward<OldValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the ASFF field after the finding change event. To preserve
     * storage and readability, Security Hub omits this value if <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_FindingHistoryRecord.html">
     * <code>FindingHistoryRecord</code> </a> exceeds database limits. </p>
     */
    inline const Aws::String& GetNewValue() const { return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    template<typename NewValueT = Aws::String>
    void SetNewValue(NewValueT&& value) { m_newValueHasBeenSet = true; m_newValue = std::forward<NewValueT>(value); }
    template<typename NewValueT = Aws::String>
    FindingHistoryUpdate& WithNewValue(NewValueT&& value) { SetNewValue(std::forward<NewValueT>(value)); return *this;}
    ///@}
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
