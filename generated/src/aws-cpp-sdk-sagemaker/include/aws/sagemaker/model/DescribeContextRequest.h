/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeContextRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeContextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContext"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the context to describe.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }

    /**
     * <p>The name of the context to describe.</p>
     */
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }

    /**
     * <p>The name of the context to describe.</p>
     */
    inline void SetContextName(const Aws::String& value) { m_contextNameHasBeenSet = true; m_contextName = value; }

    /**
     * <p>The name of the context to describe.</p>
     */
    inline void SetContextName(Aws::String&& value) { m_contextNameHasBeenSet = true; m_contextName = std::move(value); }

    /**
     * <p>The name of the context to describe.</p>
     */
    inline void SetContextName(const char* value) { m_contextNameHasBeenSet = true; m_contextName.assign(value); }

    /**
     * <p>The name of the context to describe.</p>
     */
    inline DescribeContextRequest& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}

    /**
     * <p>The name of the context to describe.</p>
     */
    inline DescribeContextRequest& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}

    /**
     * <p>The name of the context to describe.</p>
     */
    inline DescribeContextRequest& WithContextName(const char* value) { SetContextName(value); return *this;}

  private:

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
