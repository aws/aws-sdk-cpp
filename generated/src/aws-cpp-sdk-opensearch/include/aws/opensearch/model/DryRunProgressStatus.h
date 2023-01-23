/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ValidationFailure.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about the progress of a pre-upgrade dry run
   * analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DryRunProgressStatus">AWS
   * API Reference</a></p>
   */
  class DryRunProgressStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus();
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline const Aws::String& GetDryRunId() const{ return m_dryRunId; }

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline void SetDryRunId(const Aws::String& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = value; }

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline void SetDryRunId(Aws::String&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::move(value); }

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline void SetDryRunId(const char* value) { m_dryRunIdHasBeenSet = true; m_dryRunId.assign(value); }

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunId(const Aws::String& value) { SetDryRunId(value); return *this;}

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunId(Aws::String&& value) { SetDryRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunId(const char* value) { SetDryRunId(value); return *this;}


    /**
     * <p>The current status of the dry run.</p>
     */
    inline const Aws::String& GetDryRunStatus() const{ return m_dryRunStatus; }

    /**
     * <p>The current status of the dry run.</p>
     */
    inline bool DryRunStatusHasBeenSet() const { return m_dryRunStatusHasBeenSet; }

    /**
     * <p>The current status of the dry run.</p>
     */
    inline void SetDryRunStatus(const Aws::String& value) { m_dryRunStatusHasBeenSet = true; m_dryRunStatus = value; }

    /**
     * <p>The current status of the dry run.</p>
     */
    inline void SetDryRunStatus(Aws::String&& value) { m_dryRunStatusHasBeenSet = true; m_dryRunStatus = std::move(value); }

    /**
     * <p>The current status of the dry run.</p>
     */
    inline void SetDryRunStatus(const char* value) { m_dryRunStatusHasBeenSet = true; m_dryRunStatus.assign(value); }

    /**
     * <p>The current status of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunStatus(const Aws::String& value) { SetDryRunStatus(value); return *this;}

    /**
     * <p>The current status of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunStatus(Aws::String&& value) { SetDryRunStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the dry run.</p>
     */
    inline DryRunProgressStatus& WithDryRunStatus(const char* value) { SetDryRunStatus(value); return *this;}


    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline DryRunProgressStatus& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline DryRunProgressStatus& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline DryRunProgressStatus& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline const Aws::String& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline void SetUpdateDate(const Aws::String& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline void SetUpdateDate(Aws::String&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline void SetUpdateDate(const char* value) { m_updateDateHasBeenSet = true; m_updateDate.assign(value); }

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline DryRunProgressStatus& WithUpdateDate(const Aws::String& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline DryRunProgressStatus& WithUpdateDate(Aws::String&& value) { SetUpdateDate(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline DryRunProgressStatus& WithUpdateDate(const char* value) { SetUpdateDate(value); return *this;}


    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline const Aws::Vector<ValidationFailure>& GetValidationFailures() const{ return m_validationFailures; }

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline bool ValidationFailuresHasBeenSet() const { return m_validationFailuresHasBeenSet; }

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline void SetValidationFailures(const Aws::Vector<ValidationFailure>& value) { m_validationFailuresHasBeenSet = true; m_validationFailures = value; }

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline void SetValidationFailures(Aws::Vector<ValidationFailure>&& value) { m_validationFailuresHasBeenSet = true; m_validationFailures = std::move(value); }

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline DryRunProgressStatus& WithValidationFailures(const Aws::Vector<ValidationFailure>& value) { SetValidationFailures(value); return *this;}

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline DryRunProgressStatus& WithValidationFailures(Aws::Vector<ValidationFailure>&& value) { SetValidationFailures(std::move(value)); return *this;}

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline DryRunProgressStatus& AddValidationFailures(const ValidationFailure& value) { m_validationFailuresHasBeenSet = true; m_validationFailures.push_back(value); return *this; }

    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline DryRunProgressStatus& AddValidationFailures(ValidationFailure&& value) { m_validationFailuresHasBeenSet = true; m_validationFailures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dryRunId;
    bool m_dryRunIdHasBeenSet = false;

    Aws::String m_dryRunStatus;
    bool m_dryRunStatusHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_updateDate;
    bool m_updateDateHasBeenSet = false;

    Aws::Vector<ValidationFailure> m_validationFailures;
    bool m_validationFailuresHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
