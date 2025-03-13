/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The active Identity and Access Management (IAM) policy
   * assignment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ActiveIAMPolicyAssignment">AWS
   * API Reference</a></p>
   */
  class ActiveIAMPolicyAssignment
  {
  public:
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment() = default;
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the IAM policy assignment.</p>
     */
    inline const Aws::String& GetAssignmentName() const { return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    template<typename AssignmentNameT = Aws::String>
    void SetAssignmentName(AssignmentNameT&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::forward<AssignmentNameT>(value); }
    template<typename AssignmentNameT = Aws::String>
    ActiveIAMPolicyAssignment& WithAssignmentName(AssignmentNameT&& value) { SetAssignmentName(std::forward<AssignmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    ActiveIAMPolicyAssignment& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
