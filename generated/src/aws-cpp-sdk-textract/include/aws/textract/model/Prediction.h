/**
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
   * <p>Contains information regarding predicted values returned by Amazon Textract
   * operations, including the predicted value and the confidence in the predicted
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Prediction">AWS
   * API Reference</a></p>
   */
  class Prediction
  {
  public:
    AWS_TEXTRACT_API Prediction();
    AWS_TEXTRACT_API Prediction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Prediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline Prediction& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline Prediction& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The predicted value of a detected object.</p>
     */
    inline Prediction& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Amazon Textract's confidence in its predicted value.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Amazon Textract's confidence in its predicted value.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Amazon Textract's confidence in its predicted value.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Amazon Textract's confidence in its predicted value.</p>
     */
    inline Prediction& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
