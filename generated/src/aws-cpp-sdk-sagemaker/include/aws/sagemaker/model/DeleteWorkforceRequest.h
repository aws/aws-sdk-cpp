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
  class DeleteWorkforceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteWorkforceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkforce"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const { return m_workforceName; }
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }
    template<typename WorkforceNameT = Aws::String>
    void SetWorkforceName(WorkforceNameT&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::forward<WorkforceNameT>(value); }
    template<typename WorkforceNameT = Aws::String>
    DeleteWorkforceRequest& WithWorkforceName(WorkforceNameT&& value) { SetWorkforceName(std::forward<WorkforceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
