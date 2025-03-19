/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>CollectiveConstantEntry</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CollectiveConstantEntry">AWS
   * API Reference</a></p>
   */
  class CollectiveConstantEntry
  {
  public:
    AWS_QUICKSIGHT_API CollectiveConstantEntry() = default;
    AWS_QUICKSIGHT_API CollectiveConstantEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CollectiveConstantEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ConstantType</code> of a <code>CollectiveConstantEntry</code>.</p>
     */
    inline ConstantType GetConstantType() const { return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(ConstantType value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline CollectiveConstantEntry& WithConstantType(ConstantType value) { SetConstantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a <code>CollectiveConstantEntry</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CollectiveConstantEntry& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ConstantType m_constantType{ConstantType::NOT_SET};
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
