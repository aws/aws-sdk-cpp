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
  class DeleteMlflowTrackingServerRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteMlflowTrackingServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMlflowTrackingServer"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the the tracking server to delete.</p>
     */
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    DeleteMlflowTrackingServerRequest& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
