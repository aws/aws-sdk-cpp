/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A document deleted from an Amazon Q Business data source
   * connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteDocument">AWS
   * API Reference</a></p>
   */
  class DeleteDocument
  {
  public:
    AWS_QBUSINESS_API DeleteDocument() = default;
    AWS_QBUSINESS_API DeleteDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DeleteDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the deleted document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    DeleteDocument& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
