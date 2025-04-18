﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Returns the kind of currency detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseCurrency">AWS
   * API Reference</a></p>
   */
  class ExpenseCurrency
  {
  public:
    AWS_TEXTRACT_API ExpenseCurrency() = default;
    AWS_TEXTRACT_API ExpenseCurrency(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseCurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Currency code for detected currency. the current supported codes are:</p>
     * <ul> <li> <p>USD</p> </li> <li> <p>EUR</p> </li> <li> <p>GBP</p> </li> <li>
     * <p>CAD</p> </li> <li> <p>INR</p> </li> <li> <p>JPY</p> </li> <li> <p>CHF</p>
     * </li> <li> <p>AUD</p> </li> <li> <p>CNY</p> </li> <li> <p>BZR</p> </li> <li>
     * <p>SEK</p> </li> <li> <p>HKD</p> </li> </ul>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    ExpenseCurrency& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percentage confideence in the detected currency.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ExpenseCurrency& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
