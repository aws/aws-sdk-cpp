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
   * <p>Maps a batch delete document request to a specific Amazon Q data source
   * connector sync job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataSourceSyncJobMetrics">AWS
   * API Reference</a></p>
   */
  class DataSourceSyncJobMetrics
  {
  public:
    AWS_QBUSINESS_API DataSourceSyncJobMetrics();
    AWS_QBUSINESS_API DataSourceSyncJobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataSourceSyncJobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsAdded() const{ return m_documentsAdded; }

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline bool DocumentsAddedHasBeenSet() const { return m_documentsAddedHasBeenSet; }

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsAdded(const Aws::String& value) { m_documentsAddedHasBeenSet = true; m_documentsAdded = value; }

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsAdded(Aws::String&& value) { m_documentsAddedHasBeenSet = true; m_documentsAdded = std::move(value); }

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsAdded(const char* value) { m_documentsAddedHasBeenSet = true; m_documentsAdded.assign(value); }

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsAdded(const Aws::String& value) { SetDocumentsAdded(value); return *this;}

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsAdded(Aws::String&& value) { SetDocumentsAdded(std::move(value)); return *this;}

    /**
     * <p>The current count of documents added from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsAdded(const char* value) { SetDocumentsAdded(value); return *this;}


    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsDeleted() const{ return m_documentsDeleted; }

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline bool DocumentsDeletedHasBeenSet() const { return m_documentsDeletedHasBeenSet; }

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsDeleted(const Aws::String& value) { m_documentsDeletedHasBeenSet = true; m_documentsDeleted = value; }

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsDeleted(Aws::String&& value) { m_documentsDeletedHasBeenSet = true; m_documentsDeleted = std::move(value); }

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsDeleted(const char* value) { m_documentsDeletedHasBeenSet = true; m_documentsDeleted.assign(value); }

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsDeleted(const Aws::String& value) { SetDocumentsDeleted(value); return *this;}

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsDeleted(Aws::String&& value) { SetDocumentsDeleted(std::move(value)); return *this;}

    /**
     * <p>The current count of documents deleted from the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsDeleted(const char* value) { SetDocumentsDeleted(value); return *this;}


    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline const Aws::String& GetDocumentsFailed() const{ return m_documentsFailed; }

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline bool DocumentsFailedHasBeenSet() const { return m_documentsFailedHasBeenSet; }

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline void SetDocumentsFailed(const Aws::String& value) { m_documentsFailedHasBeenSet = true; m_documentsFailed = value; }

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline void SetDocumentsFailed(Aws::String&& value) { m_documentsFailedHasBeenSet = true; m_documentsFailed = std::move(value); }

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline void SetDocumentsFailed(const char* value) { m_documentsFailedHasBeenSet = true; m_documentsFailed.assign(value); }

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsFailed(const Aws::String& value) { SetDocumentsFailed(value); return *this;}

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsFailed(Aws::String&& value) { SetDocumentsFailed(std::move(value)); return *this;}

    /**
     * <p>The current count of documents that failed to sync from the data source
     * during the data source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsFailed(const char* value) { SetDocumentsFailed(value); return *this;}


    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline const Aws::String& GetDocumentsModified() const{ return m_documentsModified; }

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline bool DocumentsModifiedHasBeenSet() const { return m_documentsModifiedHasBeenSet; }

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsModified(const Aws::String& value) { m_documentsModifiedHasBeenSet = true; m_documentsModified = value; }

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsModified(Aws::String&& value) { m_documentsModifiedHasBeenSet = true; m_documentsModified = std::move(value); }

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline void SetDocumentsModified(const char* value) { m_documentsModifiedHasBeenSet = true; m_documentsModified.assign(value); }

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsModified(const Aws::String& value) { SetDocumentsModified(value); return *this;}

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsModified(Aws::String&& value) { SetDocumentsModified(std::move(value)); return *this;}

    /**
     * <p>The current count of documents modified in the data source during the data
     * source sync.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsModified(const char* value) { SetDocumentsModified(value); return *this;}


    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline const Aws::String& GetDocumentsScanned() const{ return m_documentsScanned; }

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline bool DocumentsScannedHasBeenSet() const { return m_documentsScannedHasBeenSet; }

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline void SetDocumentsScanned(const Aws::String& value) { m_documentsScannedHasBeenSet = true; m_documentsScanned = value; }

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline void SetDocumentsScanned(Aws::String&& value) { m_documentsScannedHasBeenSet = true; m_documentsScanned = std::move(value); }

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline void SetDocumentsScanned(const char* value) { m_documentsScannedHasBeenSet = true; m_documentsScanned.assign(value); }

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsScanned(const Aws::String& value) { SetDocumentsScanned(value); return *this;}

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsScanned(Aws::String&& value) { SetDocumentsScanned(std::move(value)); return *this;}

    /**
     * <p>The current count of documents crawled by the ongoing sync job in the data
     * source.</p>
     */
    inline DataSourceSyncJobMetrics& WithDocumentsScanned(const char* value) { SetDocumentsScanned(value); return *this;}

  private:

    Aws::String m_documentsAdded;
    bool m_documentsAddedHasBeenSet = false;

    Aws::String m_documentsDeleted;
    bool m_documentsDeletedHasBeenSet = false;

    Aws::String m_documentsFailed;
    bool m_documentsFailedHasBeenSet = false;

    Aws::String m_documentsModified;
    bool m_documentsModifiedHasBeenSet = false;

    Aws::String m_documentsScanned;
    bool m_documentsScannedHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
