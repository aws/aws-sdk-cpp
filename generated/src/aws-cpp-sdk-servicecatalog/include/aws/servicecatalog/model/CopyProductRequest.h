/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/CopyOption.h>
#include <aws/servicecatalog/model/ProvisioningArtifactPropertyName.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class CopyProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CopyProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline CopyProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline CopyProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline CopyProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source product.</p>
     */
    inline const Aws::String& GetSourceProductArn() const{ return m_sourceProductArn; }
    inline bool SourceProductArnHasBeenSet() const { return m_sourceProductArnHasBeenSet; }
    inline void SetSourceProductArn(const Aws::String& value) { m_sourceProductArnHasBeenSet = true; m_sourceProductArn = value; }
    inline void SetSourceProductArn(Aws::String&& value) { m_sourceProductArnHasBeenSet = true; m_sourceProductArn = std::move(value); }
    inline void SetSourceProductArn(const char* value) { m_sourceProductArnHasBeenSet = true; m_sourceProductArn.assign(value); }
    inline CopyProductRequest& WithSourceProductArn(const Aws::String& value) { SetSourceProductArn(value); return *this;}
    inline CopyProductRequest& WithSourceProductArn(Aws::String&& value) { SetSourceProductArn(std::move(value)); return *this;}
    inline CopyProductRequest& WithSourceProductArn(const char* value) { SetSourceProductArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target product. By default, a new product is
     * created.</p>
     */
    inline const Aws::String& GetTargetProductId() const{ return m_targetProductId; }
    inline bool TargetProductIdHasBeenSet() const { return m_targetProductIdHasBeenSet; }
    inline void SetTargetProductId(const Aws::String& value) { m_targetProductIdHasBeenSet = true; m_targetProductId = value; }
    inline void SetTargetProductId(Aws::String&& value) { m_targetProductIdHasBeenSet = true; m_targetProductId = std::move(value); }
    inline void SetTargetProductId(const char* value) { m_targetProductIdHasBeenSet = true; m_targetProductId.assign(value); }
    inline CopyProductRequest& WithTargetProductId(const Aws::String& value) { SetTargetProductId(value); return *this;}
    inline CopyProductRequest& WithTargetProductId(Aws::String&& value) { SetTargetProductId(std::move(value)); return *this;}
    inline CopyProductRequest& WithTargetProductId(const char* value) { SetTargetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the target product. The default is the name of the source
     * product.</p>
     */
    inline const Aws::String& GetTargetProductName() const{ return m_targetProductName; }
    inline bool TargetProductNameHasBeenSet() const { return m_targetProductNameHasBeenSet; }
    inline void SetTargetProductName(const Aws::String& value) { m_targetProductNameHasBeenSet = true; m_targetProductName = value; }
    inline void SetTargetProductName(Aws::String&& value) { m_targetProductNameHasBeenSet = true; m_targetProductName = std::move(value); }
    inline void SetTargetProductName(const char* value) { m_targetProductNameHasBeenSet = true; m_targetProductName.assign(value); }
    inline CopyProductRequest& WithTargetProductName(const Aws::String& value) { SetTargetProductName(value); return *this;}
    inline CopyProductRequest& WithTargetProductName(Aws::String&& value) { SetTargetProductName(std::move(value)); return *this;}
    inline CopyProductRequest& WithTargetProductName(const char* value) { SetTargetProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the provisioning artifacts (also known as versions) of the
     * product to copy. By default, all provisioning artifacts are copied.</p>
     */
    inline const Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>& GetSourceProvisioningArtifactIdentifiers() const{ return m_sourceProvisioningArtifactIdentifiers; }
    inline bool SourceProvisioningArtifactIdentifiersHasBeenSet() const { return m_sourceProvisioningArtifactIdentifiersHasBeenSet; }
    inline void SetSourceProvisioningArtifactIdentifiers(const Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers = value; }
    inline void SetSourceProvisioningArtifactIdentifiers(Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>&& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers = std::move(value); }
    inline CopyProductRequest& WithSourceProvisioningArtifactIdentifiers(const Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>& value) { SetSourceProvisioningArtifactIdentifiers(value); return *this;}
    inline CopyProductRequest& WithSourceProvisioningArtifactIdentifiers(Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>&& value) { SetSourceProvisioningArtifactIdentifiers(std::move(value)); return *this;}
    inline CopyProductRequest& AddSourceProvisioningArtifactIdentifiers(const Aws::Map<ProvisioningArtifactPropertyName, Aws::String>& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers.push_back(value); return *this; }
    inline CopyProductRequest& AddSourceProvisioningArtifactIdentifiers(Aws::Map<ProvisioningArtifactPropertyName, Aws::String>&& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The copy options. If the value is <code>CopyTags</code>, the tags from the
     * source product are copied to the target product.</p>
     */
    inline const Aws::Vector<CopyOption>& GetCopyOptions() const{ return m_copyOptions; }
    inline bool CopyOptionsHasBeenSet() const { return m_copyOptionsHasBeenSet; }
    inline void SetCopyOptions(const Aws::Vector<CopyOption>& value) { m_copyOptionsHasBeenSet = true; m_copyOptions = value; }
    inline void SetCopyOptions(Aws::Vector<CopyOption>&& value) { m_copyOptionsHasBeenSet = true; m_copyOptions = std::move(value); }
    inline CopyProductRequest& WithCopyOptions(const Aws::Vector<CopyOption>& value) { SetCopyOptions(value); return *this;}
    inline CopyProductRequest& WithCopyOptions(Aws::Vector<CopyOption>&& value) { SetCopyOptions(std::move(value)); return *this;}
    inline CopyProductRequest& AddCopyOptions(const CopyOption& value) { m_copyOptionsHasBeenSet = true; m_copyOptions.push_back(value); return *this; }
    inline CopyProductRequest& AddCopyOptions(CopyOption&& value) { m_copyOptionsHasBeenSet = true; m_copyOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline CopyProductRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CopyProductRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CopyProductRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_sourceProductArn;
    bool m_sourceProductArnHasBeenSet = false;

    Aws::String m_targetProductId;
    bool m_targetProductIdHasBeenSet = false;

    Aws::String m_targetProductName;
    bool m_targetProductNameHasBeenSet = false;

    Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>> m_sourceProvisioningArtifactIdentifiers;
    bool m_sourceProvisioningArtifactIdentifiersHasBeenSet = false;

    Aws::Vector<CopyOption> m_copyOptions;
    bool m_copyOptionsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
