/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteActivationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteActivationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActivation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline const Aws::String& GetActivationId() const { return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    template<typename ActivationIdT = Aws::String>
    void SetActivationId(ActivationIdT&& value) { m_activationIdHasBeenSet = true; m_activationId = std::forward<ActivationIdT>(value); }
    template<typename ActivationIdT = Aws::String>
    DeleteActivationRequest& WithActivationId(ActivationIdT&& value) { SetActivationId(std::forward<ActivationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
