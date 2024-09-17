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
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment();
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ActiveIAMPolicyAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the IAM policy assignment.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }
    inline ActiveIAMPolicyAssignment& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}
    inline ActiveIAMPolicyAssignment& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}
    inline ActiveIAMPolicyAssignment& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline ActiveIAMPolicyAssignment& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline ActiveIAMPolicyAssignment& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline ActiveIAMPolicyAssignment& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
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
