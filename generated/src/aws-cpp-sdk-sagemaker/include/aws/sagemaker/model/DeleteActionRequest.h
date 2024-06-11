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
  class DeleteActionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAction"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the action to delete.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline DeleteActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline DeleteActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline DeleteActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
