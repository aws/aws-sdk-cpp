/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class GetCrlRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API GetCrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCrl"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlId() const { return m_crlId; }
    inline bool CrlIdHasBeenSet() const { return m_crlIdHasBeenSet; }
    template<typename CrlIdT = Aws::String>
    void SetCrlId(CrlIdT&& value) { m_crlIdHasBeenSet = true; m_crlId = std::forward<CrlIdT>(value); }
    template<typename CrlIdT = Aws::String>
    GetCrlRequest& WithCrlId(CrlIdT&& value) { SetCrlId(std::forward<CrlIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crlId;
    bool m_crlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
