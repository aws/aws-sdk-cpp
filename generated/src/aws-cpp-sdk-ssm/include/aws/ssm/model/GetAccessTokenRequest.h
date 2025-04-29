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
  class GetAccessTokenRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetAccessTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessToken"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of a just-in-time node access request.</p>
     */
    inline const Aws::String& GetAccessRequestId() const { return m_accessRequestId; }
    inline bool AccessRequestIdHasBeenSet() const { return m_accessRequestIdHasBeenSet; }
    template<typename AccessRequestIdT = Aws::String>
    void SetAccessRequestId(AccessRequestIdT&& value) { m_accessRequestIdHasBeenSet = true; m_accessRequestId = std::forward<AccessRequestIdT>(value); }
    template<typename AccessRequestIdT = Aws::String>
    GetAccessTokenRequest& WithAccessRequestId(AccessRequestIdT&& value) { SetAccessRequestId(std::forward<AccessRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessRequestId;
    bool m_accessRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
