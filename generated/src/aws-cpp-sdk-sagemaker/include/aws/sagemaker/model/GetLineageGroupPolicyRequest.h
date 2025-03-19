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
    AWS_SAGEMAKER_API GetLineageGroupPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLineageGroupPolicy"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupName() const { return m_lineageGroupName; }
    inline bool LineageGroupNameHasBeenSet() const { return m_lineageGroupNameHasBeenSet; }
    template<typename LineageGroupNameT = Aws::String>
    void SetLineageGroupName(LineageGroupNameT&& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = std::forward<LineageGroupNameT>(value); }
    template<typename LineageGroupNameT = Aws::String>
    GetLineageGroupPolicyRequest& WithLineageGroupName(LineageGroupNameT&& value) { SetLineageGroupName(std::forward<LineageGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lineageGroupName;
    bool m_lineageGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
