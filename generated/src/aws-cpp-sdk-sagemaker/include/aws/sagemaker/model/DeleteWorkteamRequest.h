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
  class DeleteWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteWorkteamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the work team to delete.</p>
     */
    inline const Aws::String& GetWorkteamName() const { return m_workteamName; }
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }
    template<typename WorkteamNameT = Aws::String>
    void SetWorkteamName(WorkteamNameT&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::forward<WorkteamNameT>(value); }
    template<typename WorkteamNameT = Aws::String>
    DeleteWorkteamRequest& WithWorkteamName(WorkteamNameT&& value) { SetWorkteamName(std::forward<WorkteamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
