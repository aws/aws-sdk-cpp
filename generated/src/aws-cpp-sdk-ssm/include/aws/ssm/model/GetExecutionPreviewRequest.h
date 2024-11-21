﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetExecutionPreviewRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetExecutionPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExecutionPreview"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the existing execution preview.</p>
     */
    inline const Aws::String& GetExecutionPreviewId() const{ return m_executionPreviewId; }
    inline bool ExecutionPreviewIdHasBeenSet() const { return m_executionPreviewIdHasBeenSet; }
    inline void SetExecutionPreviewId(const Aws::String& value) { m_executionPreviewIdHasBeenSet = true; m_executionPreviewId = value; }
    inline void SetExecutionPreviewId(Aws::String&& value) { m_executionPreviewIdHasBeenSet = true; m_executionPreviewId = std::move(value); }
    inline void SetExecutionPreviewId(const char* value) { m_executionPreviewIdHasBeenSet = true; m_executionPreviewId.assign(value); }
    inline GetExecutionPreviewRequest& WithExecutionPreviewId(const Aws::String& value) { SetExecutionPreviewId(value); return *this;}
    inline GetExecutionPreviewRequest& WithExecutionPreviewId(Aws::String&& value) { SetExecutionPreviewId(std::move(value)); return *this;}
    inline GetExecutionPreviewRequest& WithExecutionPreviewId(const char* value) { SetExecutionPreviewId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionPreviewId;
    bool m_executionPreviewIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
