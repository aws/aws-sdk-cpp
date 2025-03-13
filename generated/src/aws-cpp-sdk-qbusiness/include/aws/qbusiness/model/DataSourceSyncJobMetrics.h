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
   * <p>Maps a batch delete document request to a specific Amazon Q Business data
   * source connector sync job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataSourceSyncJobMetrics">AWS
   * API Reference</a></p>
   */
  class DataSourceSyncJobMetrics
  {
  public:
    AWS_QBUSINESS_API DataSourceSyncJobMetrics() = default;
    AWS_QBUSINESS_API DataSourceSyncJobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataSourceSyncJobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsAdded() const { return m_documentsAdded; }
    inline bool DocumentsAddedHasBeenSet() const { return m_documentsAddedHasBeenSet; }
    template<typename DocumentsAddedT = Aws::String>
    void SetDocumentsAdded(DocumentsAddedT&& value) { m_documentsAddedHasBeenSet = true; m_documentsAdded = std::forward<DocumentsAddedT>(value); }
    template<typename DocumentsAddedT = Aws::String>
    DataSourceSyncJobMetrics& WithDocumentsAdded(DocumentsAddedT&& value) { SetDocumentsAdded(std::forward<DocumentsAddedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsModified() const { return m_documentsModified; }
    inline bool DocumentsModifiedHasBeenSet() const { return m_documentsModifiedHasBeenSet; }
    template<typename DocumentsModifiedT = Aws::String>
    void SetDocumentsModified(DocumentsModifiedT&& value) { m_documentsModifiedHasBeenSet = true; m_documentsModified = std::forward<DocumentsModifiedT>(value); }
    template<typename DocumentsModifiedT = Aws::String>
    DataSourceSyncJobMetrics& WithDocumentsModified(DocumentsModifiedT&& value) { SetDocumentsModified(std::forward<DocumentsModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsDeleted() const { return m_documentsDeleted; }
    inline bool DocumentsDeletedHasBeenSet() const { return m_documentsDeletedHasBeenSet; }
    template<typename DocumentsDeletedT = Aws::String>
    void SetDocumentsDeleted(DocumentsDeletedT&& value) { m_documentsDeletedHasBeenSet = true; m_documentsDeleted = std::forward<DocumentsDeletedT>(value); }
    template<typename DocumentsDeletedT = Aws::String>
    DataSourceSyncJobMetrics& WithDocumentsDeleted(DocumentsDeletedT&& value) { SetDocumentsDeleted(std::forward<DocumentsDeletedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline const Aws::String& GetDocumentsFailed() const { return m_documentsFailed; }
    inline bool DocumentsFailedHasBeenSet() const { return m_documentsFailedHasBeenSet; }
    template<typename DocumentsFailedT = Aws::String>
    void SetDocumentsFailed(DocumentsFailedT&& value) { m_documentsFailedHasBeenSet = true; m_documentsFailed = std::forward<DocumentsFailedT>(value); }
    template<typename DocumentsFailedT = Aws::String>
    DataSourceSyncJobMetrics& WithDocumentsFailed(DocumentsFailedT&& value) { SetDocumentsFailed(std::forward<DocumentsFailedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline const Aws::String& GetDocumentsScanned() const { return m_documentsScanned; }
    inline bool DocumentsScannedHasBeenSet() const { return m_documentsScannedHasBeenSet; }
    template<typename DocumentsScannedT = Aws::String>
    void SetDocumentsScanned(DocumentsScannedT&& value) { m_documentsScannedHasBeenSet = true; m_documentsScanned = std::forward<DocumentsScannedT>(value); }
    template<typename DocumentsScannedT = Aws::String>
    DataSourceSyncJobMetrics& WithDocumentsScanned(DocumentsScannedT&& value) { SetDocumentsScanned(std::forward<DocumentsScannedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentsAdded;
    bool m_documentsAddedHasBeenSet = false;

    Aws::String m_documentsModified;
    bool m_documentsModifiedHasBeenSet = false;

    Aws::String m_documentsDeleted;
    bool m_documentsDeletedHasBeenSet = false;

    Aws::String m_documentsFailed;
    bool m_documentsFailedHasBeenSet = false;

    Aws::String m_documentsScanned;
    bool m_documentsScannedHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
