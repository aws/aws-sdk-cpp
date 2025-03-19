/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/SplitDocument.h>
#include <aws/textract/model/DetectedSignature.h>
#include <aws/textract/model/UndetectedSignature.h>
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
   * <p>Summary information about documents grouped by the same document
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DocumentGroup">AWS
   * API Reference</a></p>
   */
  class DocumentGroup
  {
  public:
    AWS_TEXTRACT_API DocumentGroup() = default;
    AWS_TEXTRACT_API DocumentGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API DocumentGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of document that Amazon Textract has detected. See <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/lending-response-objects.html">Analyze
     * Lending Response Objects</a> for a list of all types returned by Textract.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DocumentGroup& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline const Aws::Vector<SplitDocument>& GetSplitDocuments() const { return m_splitDocuments; }
    inline bool SplitDocumentsHasBeenSet() const { return m_splitDocumentsHasBeenSet; }
    template<typename SplitDocumentsT = Aws::Vector<SplitDocument>>
    void SetSplitDocuments(SplitDocumentsT&& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments = std::forward<SplitDocumentsT>(value); }
    template<typename SplitDocumentsT = Aws::Vector<SplitDocument>>
    DocumentGroup& WithSplitDocuments(SplitDocumentsT&& value) { SetSplitDocuments(std::forward<SplitDocumentsT>(value)); return *this;}
    template<typename SplitDocumentsT = SplitDocument>
    DocumentGroup& AddSplitDocuments(SplitDocumentsT&& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments.emplace_back(std::forward<SplitDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline const Aws::Vector<DetectedSignature>& GetDetectedSignatures() const { return m_detectedSignatures; }
    inline bool DetectedSignaturesHasBeenSet() const { return m_detectedSignaturesHasBeenSet; }
    template<typename DetectedSignaturesT = Aws::Vector<DetectedSignature>>
    void SetDetectedSignatures(DetectedSignaturesT&& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures = std::forward<DetectedSignaturesT>(value); }
    template<typename DetectedSignaturesT = Aws::Vector<DetectedSignature>>
    DocumentGroup& WithDetectedSignatures(DetectedSignaturesT&& value) { SetDetectedSignatures(std::forward<DetectedSignaturesT>(value)); return *this;}
    template<typename DetectedSignaturesT = DetectedSignature>
    DocumentGroup& AddDetectedSignatures(DetectedSignaturesT&& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures.emplace_back(std::forward<DetectedSignaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline const Aws::Vector<UndetectedSignature>& GetUndetectedSignatures() const { return m_undetectedSignatures; }
    inline bool UndetectedSignaturesHasBeenSet() const { return m_undetectedSignaturesHasBeenSet; }
    template<typename UndetectedSignaturesT = Aws::Vector<UndetectedSignature>>
    void SetUndetectedSignatures(UndetectedSignaturesT&& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures = std::forward<UndetectedSignaturesT>(value); }
    template<typename UndetectedSignaturesT = Aws::Vector<UndetectedSignature>>
    DocumentGroup& WithUndetectedSignatures(UndetectedSignaturesT&& value) { SetUndetectedSignatures(std::forward<UndetectedSignaturesT>(value)); return *this;}
    template<typename UndetectedSignaturesT = UndetectedSignature>
    DocumentGroup& AddUndetectedSignatures(UndetectedSignaturesT&& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures.emplace_back(std::forward<UndetectedSignaturesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<SplitDocument> m_splitDocuments;
    bool m_splitDocumentsHasBeenSet = false;

    Aws::Vector<DetectedSignature> m_detectedSignatures;
    bool m_detectedSignaturesHasBeenSet = false;

    Aws::Vector<UndetectedSignature> m_undetectedSignatures;
    bool m_undetectedSignaturesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
