/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class GetAssignmentRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API GetAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssignment"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}

  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
