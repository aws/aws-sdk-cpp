/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
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
   * <p>An import reference job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImportReferenceJobItem">AWS
   * API Reference</a></p>
   */
  class ImportReferenceJobItem
  {
  public:
    AWS_OMICS_API ImportReferenceJobItem();
    AWS_OMICS_API ImportReferenceJobItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImportReferenceJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>When the job completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>When the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>When the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>When the job completed.</p>
     */
    inline ImportReferenceJobItem& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>When the job completed.</p>
     */
    inline ImportReferenceJobItem& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline ImportReferenceJobItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline ImportReferenceJobItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The job's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline ImportReferenceJobItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline ImportReferenceJobItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline ImportReferenceJobItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = value; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::move(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId.assign(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline ImportReferenceJobItem& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline ImportReferenceJobItem& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline ImportReferenceJobItem& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}


    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline ImportReferenceJobItem& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline ImportReferenceJobItem& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline ImportReferenceJobItem& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const ReferenceImportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const ReferenceImportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(ReferenceImportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline ImportReferenceJobItem& WithStatus(const ReferenceImportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline ImportReferenceJobItem& WithStatus(ReferenceImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ReferenceImportJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
