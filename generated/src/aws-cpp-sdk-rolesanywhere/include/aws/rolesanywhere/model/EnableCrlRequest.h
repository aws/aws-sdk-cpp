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
  class EnableCrlRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API EnableCrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableCrl"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlId() const{ return m_crlId; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline bool CrlIdHasBeenSet() const { return m_crlIdHasBeenSet; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(const Aws::String& value) { m_crlIdHasBeenSet = true; m_crlId = value; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(Aws::String&& value) { m_crlIdHasBeenSet = true; m_crlId = std::move(value); }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(const char* value) { m_crlIdHasBeenSet = true; m_crlId.assign(value); }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline EnableCrlRequest& WithCrlId(const Aws::String& value) { SetCrlId(value); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline EnableCrlRequest& WithCrlId(Aws::String&& value) { SetCrlId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline EnableCrlRequest& WithCrlId(const char* value) { SetCrlId(value); return *this;}

  private:

    Aws::String m_crlId;
    bool m_crlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
