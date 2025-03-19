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
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus() = default;
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DryRunProgressStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline const Aws::String& GetDryRunId() const { return m_dryRunId; }
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }
    template<typename DryRunIdT = Aws::String>
    void SetDryRunId(DryRunIdT&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::forward<DryRunIdT>(value); }
    template<typename DryRunIdT = Aws::String>
    DryRunProgressStatus& WithDryRunId(DryRunIdT&& value) { SetDryRunId(std::forward<DryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the dry run.</p>
     */
    inline const Aws::String& GetDryRunStatus() const { return m_dryRunStatus; }
    inline bool DryRunStatusHasBeenSet() const { return m_dryRunStatusHasBeenSet; }
    template<typename DryRunStatusT = Aws::String>
    void SetDryRunStatus(DryRunStatusT&& value) { m_dryRunStatusHasBeenSet = true; m_dryRunStatus = std::forward<DryRunStatusT>(value); }
    template<typename DryRunStatusT = Aws::String>
    DryRunProgressStatus& WithDryRunStatus(DryRunStatusT&& value) { SetDryRunStatus(std::forward<DryRunStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the dry run was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    DryRunProgressStatus& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the dry run was last updated.</p>
     */
    inline const Aws::String& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::String>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::String>
    DryRunProgressStatus& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any validation failures that occurred as a result of the dry run.</p>
     */
    inline const Aws::Vector<ValidationFailure>& GetValidationFailures() const { return m_validationFailures; }
    inline bool ValidationFailuresHasBeenSet() const { return m_validationFailuresHasBeenSet; }
    template<typename ValidationFailuresT = Aws::Vector<ValidationFailure>>
    void SetValidationFailures(ValidationFailuresT&& value) { m_validationFailuresHasBeenSet = true; m_validationFailures = std::forward<ValidationFailuresT>(value); }
    template<typename ValidationFailuresT = Aws::Vector<ValidationFailure>>
    DryRunProgressStatus& WithValidationFailures(ValidationFailuresT&& value) { SetValidationFailures(std::forward<ValidationFailuresT>(value)); return *this;}
    template<typename ValidationFailuresT = ValidationFailure>
    DryRunProgressStatus& AddValidationFailures(ValidationFailuresT&& value) { m_validationFailuresHasBeenSet = true; m_validationFailures.emplace_back(std::forward<ValidationFailuresT>(value)); return *this; }
    ///@}
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
