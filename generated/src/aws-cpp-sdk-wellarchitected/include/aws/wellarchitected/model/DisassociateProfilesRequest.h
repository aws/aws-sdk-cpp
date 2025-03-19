/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class DisassociateProfilesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API DisassociateProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateProfiles"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    DisassociateProfilesRequest& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of profile ARNs to disassociate from the workload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileArns() const { return m_profileArns; }
    inline bool ProfileArnsHasBeenSet() const { return m_profileArnsHasBeenSet; }
    template<typename ProfileArnsT = Aws::Vector<Aws::String>>
    void SetProfileArns(ProfileArnsT&& value) { m_profileArnsHasBeenSet = true; m_profileArns = std::forward<ProfileArnsT>(value); }
    template<typename ProfileArnsT = Aws::Vector<Aws::String>>
    DisassociateProfilesRequest& WithProfileArns(ProfileArnsT&& value) { SetProfileArns(std::forward<ProfileArnsT>(value)); return *this;}
    template<typename ProfileArnsT = Aws::String>
    DisassociateProfilesRequest& AddProfileArns(ProfileArnsT&& value) { m_profileArnsHasBeenSet = true; m_profileArns.emplace_back(std::forward<ProfileArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileArns;
    bool m_profileArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
