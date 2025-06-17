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
   * <p>Represents individual aggregated results when grouping security findings for
   * each <code>GroupByField</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GroupByValue">AWS
   * API Reference</a></p>
   */
  class GroupByValue
  {
  public:
    AWS_SECURITYHUB_API GroupByValue() = default;
    AWS_SECURITYHUB_API GroupByValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API GroupByValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the field by which findings are grouped.</p>
     */
    inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    template<typename FieldValueT = Aws::String>
    void SetFieldValue(FieldValueT&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::forward<FieldValueT>(value); }
    template<typename FieldValueT = Aws::String>
    GroupByValue& WithFieldValue(FieldValueT&& value) { SetFieldValue(std::forward<FieldValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings for a specific <code>FieldValue</code> and
     * <code>GroupByField</code>.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline GroupByValue& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
