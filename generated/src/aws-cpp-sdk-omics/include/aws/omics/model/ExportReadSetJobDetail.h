/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Details about a read set export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ExportReadSetJobDetail">AWS
   * API Reference</a></p>
   */
  class ExportReadSetJobDetail
  {
  public:
    AWS_OMICS_API ExportReadSetJobDetail();
    AWS_OMICS_API ExportReadSetJobDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ExportReadSetJobDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ExportReadSetJobDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExportReadSetJobDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExportReadSetJobDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }
    inline ExportReadSetJobDetail& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline ExportReadSetJobDetail& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline ExportReadSetJobDetail& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ExportReadSetJobDetail& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ExportReadSetJobDetail& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ExportReadSetJobDetail& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const ReadSetExportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReadSetExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReadSetExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportReadSetJobDetail& WithStatus(const ReadSetExportJobStatus& value) { SetStatus(value); return *this;}
    inline ExportReadSetJobDetail& WithStatus(ReadSetExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ExportReadSetJobDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ExportReadSetJobDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline ExportReadSetJobDetail& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline ExportReadSetJobDetail& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    ReadSetExportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
