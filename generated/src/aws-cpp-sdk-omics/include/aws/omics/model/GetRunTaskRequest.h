/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class GetRunTaskRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetRunTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRunTask"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The task's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task's ID.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
