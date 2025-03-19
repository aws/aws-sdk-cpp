/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeFilterRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFilter"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    DescribeFilterRequest& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
