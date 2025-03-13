/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/LendingDetection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Holds the normalized key-value pairs returned by AnalyzeDocument, including
   * the document type, detected text, and geometry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingField">AWS
   * API Reference</a></p>
   */
  class LendingField
  {
  public:
    AWS_TEXTRACT_API LendingField() = default;
    AWS_TEXTRACT_API LendingField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the lending document.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    LendingField& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LendingDetection& GetKeyDetection() const { return m_keyDetection; }
    inline bool KeyDetectionHasBeenSet() const { return m_keyDetectionHasBeenSet; }
    template<typename KeyDetectionT = LendingDetection>
    void SetKeyDetection(KeyDetectionT&& value) { m_keyDetectionHasBeenSet = true; m_keyDetection = std::forward<KeyDetectionT>(value); }
    template<typename KeyDetectionT = LendingDetection>
    LendingField& WithKeyDetection(KeyDetectionT&& value) { SetKeyDetection(std::forward<KeyDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline const Aws::Vector<LendingDetection>& GetValueDetections() const { return m_valueDetections; }
    inline bool ValueDetectionsHasBeenSet() const { return m_valueDetectionsHasBeenSet; }
    template<typename ValueDetectionsT = Aws::Vector<LendingDetection>>
    void SetValueDetections(ValueDetectionsT&& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections = std::forward<ValueDetectionsT>(value); }
    template<typename ValueDetectionsT = Aws::Vector<LendingDetection>>
    LendingField& WithValueDetections(ValueDetectionsT&& value) { SetValueDetections(std::forward<ValueDetectionsT>(value)); return *this;}
    template<typename ValueDetectionsT = LendingDetection>
    LendingField& AddValueDetections(ValueDetectionsT&& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections.emplace_back(std::forward<ValueDetectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    LendingDetection m_keyDetection;
    bool m_keyDetectionHasBeenSet = false;

    Aws::Vector<LendingDetection> m_valueDetections;
    bool m_valueDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
