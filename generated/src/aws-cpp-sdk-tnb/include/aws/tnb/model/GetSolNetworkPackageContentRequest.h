/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/PackageContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class GetSolNetworkPackageContentRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolNetworkPackageContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolNetworkPackageContent"; }

    AWS_TNB_API Aws::String SerializePayload() const override;

    AWS_TNB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline const PackageContentType& GetAccept() const{ return m_accept; }

    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline void SetAccept(const PackageContentType& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline void SetAccept(PackageContentType&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline GetSolNetworkPackageContentRequest& WithAccept(const PackageContentType& value) { SetAccept(value); return *this;}

    /**
     * <p>The format of the package you want to download from the network package.</p>
     */
    inline GetSolNetworkPackageContentRequest& WithAccept(PackageContentType&& value) { SetAccept(std::move(value)); return *this;}


    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline GetSolNetworkPackageContentRequest& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline GetSolNetworkPackageContentRequest& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline GetSolNetworkPackageContentRequest& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}

  private:

    PackageContentType m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
