﻿/**
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
    AWS_PERSONALIZE_API DeleteSolutionRequest();

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
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }
    inline DeleteSolutionRequest& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline DeleteSolutionRequest& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline DeleteSolutionRequest& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
