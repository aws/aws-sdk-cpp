/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/LendingField.h>
#include <aws/textract/model/SignatureDetection.h>
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
   * <p>Holds the structured data returned by AnalyzeDocument for lending
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingDocument">AWS
   * API Reference</a></p>
   */
  class LendingDocument
  {
  public:
    AWS_TEXTRACT_API LendingDocument() = default;
    AWS_TEXTRACT_API LendingDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of LendingField objects.</p>
     */
    inline const Aws::Vector<LendingField>& GetLendingFields() const { return m_lendingFields; }
    inline bool LendingFieldsHasBeenSet() const { return m_lendingFieldsHasBeenSet; }
    template<typename LendingFieldsT = Aws::Vector<LendingField>>
    void SetLendingFields(LendingFieldsT&& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields = std::forward<LendingFieldsT>(value); }
    template<typename LendingFieldsT = Aws::Vector<LendingField>>
    LendingDocument& WithLendingFields(LendingFieldsT&& value) { SetLendingFields(std::forward<LendingFieldsT>(value)); return *this;}
    template<typename LendingFieldsT = LendingField>
    LendingDocument& AddLendingFields(LendingFieldsT&& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields.emplace_back(std::forward<LendingFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline const Aws::Vector<SignatureDetection>& GetSignatureDetections() const { return m_signatureDetections; }
    inline bool SignatureDetectionsHasBeenSet() const { return m_signatureDetectionsHasBeenSet; }
    template<typename SignatureDetectionsT = Aws::Vector<SignatureDetection>>
    void SetSignatureDetections(SignatureDetectionsT&& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections = std::forward<SignatureDetectionsT>(value); }
    template<typename SignatureDetectionsT = Aws::Vector<SignatureDetection>>
    LendingDocument& WithSignatureDetections(SignatureDetectionsT&& value) { SetSignatureDetections(std::forward<SignatureDetectionsT>(value)); return *this;}
    template<typename SignatureDetectionsT = SignatureDetection>
    LendingDocument& AddSignatureDetections(SignatureDetectionsT&& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections.emplace_back(std::forward<SignatureDetectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LendingField> m_lendingFields;
    bool m_lendingFieldsHasBeenSet = false;

    Aws::Vector<SignatureDetection> m_signatureDetections;
    bool m_signatureDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
