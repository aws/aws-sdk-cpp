/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>An infrastructure as code defined resource output.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_PROTON_API Output() = default;
    AWS_PROTON_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Output& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output value.</p>
     */
    inline const Aws::String& GetValueString() const { return m_valueString; }
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }
    template<typename ValueStringT = Aws::String>
    void SetValueString(ValueStringT&& value) { m_valueStringHasBeenSet = true; m_valueString = std::forward<ValueStringT>(value); }
    template<typename ValueStringT = Aws::String>
    Output& WithValueString(ValueStringT&& value) { SetValueString(std::forward<ValueStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
