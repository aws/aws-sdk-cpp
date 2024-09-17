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
    AWS_SECURITYHUB_API UpdateFindingsRequest();

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
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline UpdateFindingsRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}
    inline UpdateFindingsRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated note for the finding.</p>
     */
    inline const NoteUpdate& GetNote() const{ return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    inline void SetNote(const NoteUpdate& value) { m_noteHasBeenSet = true; m_note = value; }
    inline void SetNote(NoteUpdate&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }
    inline UpdateFindingsRequest& WithNote(const NoteUpdate& value) { SetNote(value); return *this;}
    inline UpdateFindingsRequest& WithNote(NoteUpdate&& value) { SetNote(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated record state for the finding.</p>
     */
    inline const RecordState& GetRecordState() const{ return m_recordState; }
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }
    inline void SetRecordState(const RecordState& value) { m_recordStateHasBeenSet = true; m_recordState = value; }
    inline void SetRecordState(RecordState&& value) { m_recordStateHasBeenSet = true; m_recordState = std::move(value); }
    inline UpdateFindingsRequest& WithRecordState(const RecordState& value) { SetRecordState(value); return *this;}
    inline UpdateFindingsRequest& WithRecordState(RecordState&& value) { SetRecordState(std::move(value)); return *this;}
    ///@}
  private:

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet = false;

    NoteUpdate m_note;
    bool m_noteHasBeenSet = false;

    RecordState m_recordState;
    bool m_recordStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
