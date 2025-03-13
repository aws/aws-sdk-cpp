/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class GetSigningPlatformRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API GetSigningPlatformRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSigningPlatform"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    GetSigningPlatformRequest& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
