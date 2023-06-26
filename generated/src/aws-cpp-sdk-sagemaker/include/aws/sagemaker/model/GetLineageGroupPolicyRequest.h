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
  class GetLineageGroupPolicyRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API GetLineageGroupPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLineageGroupPolicy"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupName() const{ return m_lineageGroupName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline bool LineageGroupNameHasBeenSet() const { return m_lineageGroupNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(const Aws::String& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(Aws::String&& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(const char* value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline GetLineageGroupPolicyRequest& WithLineageGroupName(const Aws::String& value) { SetLineageGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline GetLineageGroupPolicyRequest& WithLineageGroupName(Aws::String&& value) { SetLineageGroupName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline GetLineageGroupPolicyRequest& WithLineageGroupName(const char* value) { SetLineageGroupName(value); return *this;}

  private:

    Aws::String m_lineageGroupName;
    bool m_lineageGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
