﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class DescribeExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution to describe.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }
    inline DescribeExecutionRequest& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}
    inline DescribeExecutionRequest& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}
    inline DescribeExecutionRequest& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
