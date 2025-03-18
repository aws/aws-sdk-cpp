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
   */
  class ListTagsForResourceRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadArn() const { return m_workloadArn; }
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }
    template<typename WorkloadArnT = Aws::String>
    void SetWorkloadArn(WorkloadArnT&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::forward<WorkloadArnT>(value); }
    template<typename WorkloadArnT = Aws::String>
    ListTagsForResourceRequest& WithWorkloadArn(WorkloadArnT&& value) { SetWorkloadArn(std::forward<WorkloadArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
