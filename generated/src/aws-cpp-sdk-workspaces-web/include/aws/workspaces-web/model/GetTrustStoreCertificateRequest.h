/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class GetTrustStoreCertificateRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API GetTrustStoreCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrustStoreCertificate"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    GetTrustStoreCertificateRequest& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const { return m_thumbprint; }
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }
    template<typename ThumbprintT = Aws::String>
    void SetThumbprint(ThumbprintT&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::forward<ThumbprintT>(value); }
    template<typename ThumbprintT = Aws::String>
    GetTrustStoreCertificateRequest& WithThumbprint(ThumbprintT&& value) { SetThumbprint(std::forward<ThumbprintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
