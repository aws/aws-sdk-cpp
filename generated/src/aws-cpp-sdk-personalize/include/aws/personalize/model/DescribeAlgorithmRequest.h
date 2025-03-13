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
  class DescribeAlgorithmRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeAlgorithmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlgorithm"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to describe.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    DescribeAlgorithmRequest& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
