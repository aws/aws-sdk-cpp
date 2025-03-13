/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/LendingDocument.h>
#include <aws/textract/model/ExpenseDocument.h>
#include <aws/textract/model/IdentityDocument.h>
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
   * <p>Contains information extracted by an analysis operation after using
   * StartLendingAnalysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Extraction">AWS
   * API Reference</a></p>
   */
  class Extraction
  {
  public:
    AWS_TEXTRACT_API Extraction() = default;
    AWS_TEXTRACT_API Extraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Extraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline const LendingDocument& GetLendingDocument() const { return m_lendingDocument; }
    inline bool LendingDocumentHasBeenSet() const { return m_lendingDocumentHasBeenSet; }
    template<typename LendingDocumentT = LendingDocument>
    void SetLendingDocument(LendingDocumentT&& value) { m_lendingDocumentHasBeenSet = true; m_lendingDocument = std::forward<LendingDocumentT>(value); }
    template<typename LendingDocumentT = LendingDocument>
    Extraction& WithLendingDocument(LendingDocumentT&& value) { SetLendingDocument(std::forward<LendingDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExpenseDocument& GetExpenseDocument() const { return m_expenseDocument; }
    inline bool ExpenseDocumentHasBeenSet() const { return m_expenseDocumentHasBeenSet; }
    template<typename ExpenseDocumentT = ExpenseDocument>
    void SetExpenseDocument(ExpenseDocumentT&& value) { m_expenseDocumentHasBeenSet = true; m_expenseDocument = std::forward<ExpenseDocumentT>(value); }
    template<typename ExpenseDocumentT = ExpenseDocument>
    Extraction& WithExpenseDocument(ExpenseDocumentT&& value) { SetExpenseDocument(std::forward<ExpenseDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IdentityDocument& GetIdentityDocument() const { return m_identityDocument; }
    inline bool IdentityDocumentHasBeenSet() const { return m_identityDocumentHasBeenSet; }
    template<typename IdentityDocumentT = IdentityDocument>
    void SetIdentityDocument(IdentityDocumentT&& value) { m_identityDocumentHasBeenSet = true; m_identityDocument = std::forward<IdentityDocumentT>(value); }
    template<typename IdentityDocumentT = IdentityDocument>
    Extraction& WithIdentityDocument(IdentityDocumentT&& value) { SetIdentityDocument(std::forward<IdentityDocumentT>(value)); return *this;}
    ///@}
  private:

    LendingDocument m_lendingDocument;
    bool m_lendingDocumentHasBeenSet = false;

    ExpenseDocument m_expenseDocument;
    bool m_expenseDocumentHasBeenSet = false;

    IdentityDocument m_identityDocument;
    bool m_identityDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
