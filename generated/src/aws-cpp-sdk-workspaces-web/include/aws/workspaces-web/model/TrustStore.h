/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>A trust store that can be associated with a web portal. A trust store
   * contains certificate authority (CA) certificates. Once associated with a web
   * portal, the browser in a streaming session will recognize certificates that have
   * been issued using any of the CAs in the trust store. If your organization has
   * internal websites that use certificates issued by private CAs, you should add
   * the private CA certificate to the trust store. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/TrustStore">AWS
   * API Reference</a></p>
   */
  class TrustStore
  {
  public:
    AWS_WORKSPACESWEB_API TrustStore();
    AWS_WORKSPACESWEB_API TrustStore(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API TrustStore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline TrustStore& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline TrustStore& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline TrustStore& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline TrustStore& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this trust store is associated with.</p>
     */
    inline TrustStore& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStore& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStore& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStore& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
