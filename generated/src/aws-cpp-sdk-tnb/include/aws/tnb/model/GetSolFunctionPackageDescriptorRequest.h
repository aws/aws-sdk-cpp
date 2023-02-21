/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/DescriptorContentType.h>
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
  class GetSolFunctionPackageDescriptorRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolFunctionPackageDescriptorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolFunctionPackageDescriptor"; }

    AWS_TNB_API Aws::String SerializePayload() const override;

    AWS_TNB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline const DescriptorContentType& GetAccept() const{ return m_accept; }

    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline void SetAccept(const DescriptorContentType& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline void SetAccept(DescriptorContentType&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline GetSolFunctionPackageDescriptorRequest& WithAccept(const DescriptorContentType& value) { SetAccept(value); return *this;}

    /**
     * <p>Indicates which content types, expressed as MIME types, the client is able to
     * understand.</p>
     */
    inline GetSolFunctionPackageDescriptorRequest& WithAccept(DescriptorContentType&& value) { SetAccept(std::move(value)); return *this;}


    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }

    /**
     * <p>ID of the function package.</p>
     */
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = value; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::move(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(const char* value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId.assign(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline GetSolFunctionPackageDescriptorRequest& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline GetSolFunctionPackageDescriptorRequest& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline GetSolFunctionPackageDescriptorRequest& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}

  private:

    DescriptorContentType m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
