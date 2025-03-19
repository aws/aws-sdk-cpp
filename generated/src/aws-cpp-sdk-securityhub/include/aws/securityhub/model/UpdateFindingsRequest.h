/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/securityhub/model/RecordState.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateFindingsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindings"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = AwsSecurityFindingFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = AwsSecurityFindingFilters>
    UpdateFindingsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated note for the finding.</p>
     */
    inline const NoteUpdate& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = NoteUpdate>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = NoteUpdate>
    UpdateFindingsRequest& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated record state for the finding.</p>
     */
    inline RecordState GetRecordState() const { return m_recordState; }
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }
    inline void SetRecordState(RecordState value) { m_recordStateHasBeenSet = true; m_recordState = value; }
    inline UpdateFindingsRequest& WithRecordState(RecordState value) { SetRecordState(value); return *this;}
    ///@}
  private:

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet = false;

    NoteUpdate m_note;
    bool m_noteHasBeenSet = false;

    RecordState m_recordState{RecordState::NOT_SET};
    bool m_recordStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
