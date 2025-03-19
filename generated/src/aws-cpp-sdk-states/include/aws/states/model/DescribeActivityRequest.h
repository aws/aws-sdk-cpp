/**
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
  class DescribeActivityRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeActivityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeActivity"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the activity to describe.</p>
     */
    inline const Aws::String& GetActivityArn() const { return m_activityArn; }
    inline bool ActivityArnHasBeenSet() const { return m_activityArnHasBeenSet; }
    template<typename ActivityArnT = Aws::String>
    void SetActivityArn(ActivityArnT&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::forward<ActivityArnT>(value); }
    template<typename ActivityArnT = Aws::String>
    DescribeActivityRequest& WithActivityArn(ActivityArnT&& value) { SetActivityArn(std::forward<ActivityArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
