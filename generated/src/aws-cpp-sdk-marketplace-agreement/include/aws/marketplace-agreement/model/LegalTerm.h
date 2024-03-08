/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/model/DocumentItem.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines the list of text agreements proposed to the acceptors. An example is
   * the end user license agreement (EULA).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/LegalTerm">AWS
   * API Reference</a></p>
   */
  class LegalTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API LegalTerm();
    AWS_AGREEMENTSERVICE_API LegalTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API LegalTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline const Aws::Vector<DocumentItem>& GetDocuments() const{ return m_documents; }

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline void SetDocuments(const Aws::Vector<DocumentItem>& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline void SetDocuments(Aws::Vector<DocumentItem>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline LegalTerm& WithDocuments(const Aws::Vector<DocumentItem>& value) { SetDocuments(value); return *this;}

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline LegalTerm& WithDocuments(Aws::Vector<DocumentItem>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline LegalTerm& AddDocuments(const DocumentItem& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }

    /**
     * <p>List of references to legal resources proposed to the buyers. An example is
     * the EULA.</p>
     */
    inline LegalTerm& AddDocuments(DocumentItem&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }


    /**
     * <p>Category of the term being updated.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline LegalTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of the term being updated.</p>
     */
    inline LegalTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of the term being updated.</p>
     */
    inline LegalTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Vector<DocumentItem> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
