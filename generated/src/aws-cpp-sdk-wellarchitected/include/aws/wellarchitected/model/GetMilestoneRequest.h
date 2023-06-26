/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to get a milestone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestoneInput">AWS
   * API Reference</a></p>
   */
  class GetMilestoneRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API GetMilestoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMilestone"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline GetMilestoneRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline GetMilestoneRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline GetMilestoneRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline bool MilestoneNumberHasBeenSet() const { return m_milestoneNumberHasBeenSet; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }

    
    inline GetMilestoneRequest& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    int m_milestoneNumber;
    bool m_milestoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
