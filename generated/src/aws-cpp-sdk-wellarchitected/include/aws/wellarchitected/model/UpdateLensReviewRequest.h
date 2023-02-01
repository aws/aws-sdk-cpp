/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for update lens review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReviewInput">AWS
   * API Reference</a></p>
   */
  class UpdateLensReviewRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateLensReviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLensReview"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpdateLensReviewRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateLensReviewRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateLensReviewRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline UpdateLensReviewRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline UpdateLensReviewRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline UpdateLensReviewRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    
    inline const Aws::String& GetLensNotes() const{ return m_lensNotes; }

    
    inline bool LensNotesHasBeenSet() const { return m_lensNotesHasBeenSet; }

    
    inline void SetLensNotes(const Aws::String& value) { m_lensNotesHasBeenSet = true; m_lensNotes = value; }

    
    inline void SetLensNotes(Aws::String&& value) { m_lensNotesHasBeenSet = true; m_lensNotes = std::move(value); }

    
    inline void SetLensNotes(const char* value) { m_lensNotesHasBeenSet = true; m_lensNotes.assign(value); }

    
    inline UpdateLensReviewRequest& WithLensNotes(const Aws::String& value) { SetLensNotes(value); return *this;}

    
    inline UpdateLensReviewRequest& WithLensNotes(Aws::String&& value) { SetLensNotes(std::move(value)); return *this;}

    
    inline UpdateLensReviewRequest& WithLensNotes(const char* value) { SetLensNotes(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetPillarNotes() const{ return m_pillarNotes; }

    
    inline bool PillarNotesHasBeenSet() const { return m_pillarNotesHasBeenSet; }

    
    inline void SetPillarNotes(const Aws::Map<Aws::String, Aws::String>& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = value; }

    
    inline void SetPillarNotes(Aws::Map<Aws::String, Aws::String>&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = std::move(value); }

    
    inline UpdateLensReviewRequest& WithPillarNotes(const Aws::Map<Aws::String, Aws::String>& value) { SetPillarNotes(value); return *this;}

    
    inline UpdateLensReviewRequest& WithPillarNotes(Aws::Map<Aws::String, Aws::String>&& value) { SetPillarNotes(std::move(value)); return *this;}

    
    inline UpdateLensReviewRequest& AddPillarNotes(const Aws::String& key, const Aws::String& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, value); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(Aws::String&& key, const Aws::String& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), value); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(const Aws::String& key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, std::move(value)); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(Aws::String&& key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(const char* key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, std::move(value)); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(Aws::String&& key, const char* value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), value); return *this; }

    
    inline UpdateLensReviewRequest& AddPillarNotes(const char* key, const char* value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, value); return *this; }

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensNotes;
    bool m_lensNotesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pillarNotes;
    bool m_pillarNotesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
