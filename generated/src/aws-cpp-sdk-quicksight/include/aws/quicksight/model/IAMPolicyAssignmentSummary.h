/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssignmentStatus.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>IAM policy assignment summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IAMPolicyAssignmentSummary">AWS
   * API Reference</a></p>
   */
  class IAMPolicyAssignmentSummary
  {
  public:
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary() = default;
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Assignment name.</p>
     */
    inline const Aws::String& GetAssignmentName() const { return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    template<typename AssignmentNameT = Aws::String>
    void SetAssignmentName(AssignmentNameT&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::forward<AssignmentNameT>(value); }
    template<typename AssignmentNameT = Aws::String>
    IAMPolicyAssignmentSummary& WithAssignmentName(AssignmentNameT&& value) { SetAssignmentName(std::forward<AssignmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assignment status.</p>
     */
    inline AssignmentStatus GetAssignmentStatus() const { return m_assignmentStatus; }
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }
    inline void SetAssignmentStatus(AssignmentStatus value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline IAMPolicyAssignmentSummary& WithAssignmentStatus(AssignmentStatus value) { SetAssignmentStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    AssignmentStatus m_assignmentStatus{AssignmentStatus::NOT_SET};
    bool m_assignmentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
