/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class GetIdentitySourceRequest : public MPARequest
  {
  public:
    AWS_MPA_API GetIdentitySourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentitySource"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceArn() const { return m_identitySourceArn; }
    inline bool IdentitySourceArnHasBeenSet() const { return m_identitySourceArnHasBeenSet; }
    template<typename IdentitySourceArnT = Aws::String>
    void SetIdentitySourceArn(IdentitySourceArnT&& value) { m_identitySourceArnHasBeenSet = true; m_identitySourceArn = std::forward<IdentitySourceArnT>(value); }
    template<typename IdentitySourceArnT = Aws::String>
    GetIdentitySourceRequest& WithIdentitySourceArn(IdentitySourceArnT&& value) { SetIdentitySourceArn(std::forward<IdentitySourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identitySourceArn;
    bool m_identitySourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
