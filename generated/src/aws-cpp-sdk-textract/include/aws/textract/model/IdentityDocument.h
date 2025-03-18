/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/IdentityDocumentField.h>
#include <aws/textract/model/Block.h>
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
   * <p>The structure that lists each document processed in an AnalyzeID
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/IdentityDocument">AWS
   * API Reference</a></p>
   */
  class IdentityDocument
  {
  public:
    AWS_TEXTRACT_API IdentityDocument() = default;
    AWS_TEXTRACT_API IdentityDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API IdentityDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Denotes the placement of a document in the IdentityDocument list. The first
     * document is marked 1, the second 2 and so on.</p>
     */
    inline int GetDocumentIndex() const { return m_documentIndex; }
    inline bool DocumentIndexHasBeenSet() const { return m_documentIndexHasBeenSet; }
    inline void SetDocumentIndex(int value) { m_documentIndexHasBeenSet = true; m_documentIndex = value; }
    inline IdentityDocument& WithDocumentIndex(int value) { SetDocumentIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline const Aws::Vector<IdentityDocumentField>& GetIdentityDocumentFields() const { return m_identityDocumentFields; }
    inline bool IdentityDocumentFieldsHasBeenSet() const { return m_identityDocumentFieldsHasBeenSet; }
    template<typename IdentityDocumentFieldsT = Aws::Vector<IdentityDocumentField>>
    void SetIdentityDocumentFields(IdentityDocumentFieldsT&& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields = std::forward<IdentityDocumentFieldsT>(value); }
    template<typename IdentityDocumentFieldsT = Aws::Vector<IdentityDocumentField>>
    IdentityDocument& WithIdentityDocumentFields(IdentityDocumentFieldsT&& value) { SetIdentityDocumentFields(std::forward<IdentityDocumentFieldsT>(value)); return *this;}
    template<typename IdentityDocumentFieldsT = IdentityDocumentField>
    IdentityDocument& AddIdentityDocumentFields(IdentityDocumentFieldsT&& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields.emplace_back(std::forward<IdentityDocumentFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    inline bool BlocksHasBeenSet() const { return m_blocksHasBeenSet; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    IdentityDocument& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    IdentityDocument& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}
  private:

    int m_documentIndex{0};
    bool m_documentIndexHasBeenSet = false;

    Aws::Vector<IdentityDocumentField> m_identityDocumentFields;
    bool m_identityDocumentFieldsHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
