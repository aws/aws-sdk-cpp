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
  class DeleteCodeRepositoryRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteCodeRepositoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCodeRepository"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Git repository to delete.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const { return m_codeRepositoryName; }
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }
    template<typename CodeRepositoryNameT = Aws::String>
    void SetCodeRepositoryName(CodeRepositoryNameT&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::forward<CodeRepositoryNameT>(value); }
    template<typename CodeRepositoryNameT = Aws::String>
    DeleteCodeRepositoryRequest& WithCodeRepositoryName(CodeRepositoryNameT&& value) { SetCodeRepositoryName(std::forward<CodeRepositoryNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
