/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/AnalyzeIDDetections.h>
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
   * <p>Structure containing both the normalized type of the extracted information
   * and the text associated with it. These are extracted as Type and Value
   * respectively.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/IdentityDocumentField">AWS
   * API Reference</a></p>
   */
  class IdentityDocumentField
  {
  public:
    AWS_TEXTRACT_API IdentityDocumentField() = default;
    AWS_TEXTRACT_API IdentityDocumentField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API IdentityDocumentField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AnalyzeIDDetections& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = AnalyzeIDDetections>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = AnalyzeIDDetections>
    IdentityDocumentField& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnalyzeIDDetections& GetValueDetection() const { return m_valueDetection; }
    inline bool ValueDetectionHasBeenSet() const { return m_valueDetectionHasBeenSet; }
    template<typename ValueDetectionT = AnalyzeIDDetections>
    void SetValueDetection(ValueDetectionT&& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = std::forward<ValueDetectionT>(value); }
    template<typename ValueDetectionT = AnalyzeIDDetections>
    IdentityDocumentField& WithValueDetection(ValueDetectionT&& value) { SetValueDetection(std::forward<ValueDetectionT>(value)); return *this;}
    ///@}
  private:

    AnalyzeIDDetections m_type;
    bool m_typeHasBeenSet = false;

    AnalyzeIDDetections m_valueDetection;
    bool m_valueDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
