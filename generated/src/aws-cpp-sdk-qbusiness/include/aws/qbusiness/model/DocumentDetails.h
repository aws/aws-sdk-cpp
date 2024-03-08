/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/DocumentStatus.h>
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
   * <p>The details of a document within an Amazon Q index.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentDetails">AWS
   * API Reference</a></p>
   */
  class DocumentDetails
  {
  public:
    AWS_QBUSINESS_API DocumentDetails();
    AWS_QBUSINESS_API DocumentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline DocumentDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp for when the document was created.</p>
     */
    inline DocumentDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The identifier of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The identifier of the document.</p>
     */
    inline DocumentDetails& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The identifier of the document.</p>
     */
    inline DocumentDetails& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document.</p>
     */
    inline DocumentDetails& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>An error message associated with the document.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>An error message associated with the document.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error message associated with the document.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error message associated with the document.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error message associated with the document.</p>
     */
    inline DocumentDetails& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>An error message associated with the document.</p>
     */
    inline DocumentDetails& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The current status of the document.</p>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the document.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the document.</p>
     */
    inline void SetStatus(const DocumentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the document.</p>
     */
    inline void SetStatus(DocumentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the document.</p>
     */
    inline DocumentDetails& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the document.</p>
     */
    inline DocumentDetails& WithStatus(DocumentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline DocumentDetails& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp for when the document was last updated.</p>
     */
    inline DocumentDetails& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    DocumentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
