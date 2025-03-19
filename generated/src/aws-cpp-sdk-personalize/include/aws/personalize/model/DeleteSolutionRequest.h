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
  class DeleteSolutionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DeleteSolutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSolution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the solution to delete.</p>
     */
    inline const Aws::String& GetSolutionArn() const { return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    template<typename SolutionArnT = Aws::String>
    void SetSolutionArn(SolutionArnT&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::forward<SolutionArnT>(value); }
    template<typename SolutionArnT = Aws::String>
    DeleteSolutionRequest& WithSolutionArn(SolutionArnT&& value) { SetSolutionArn(std::forward<SolutionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
