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
    AWS_SERVICECATALOG_API CopyProductRequest() = default;

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
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    CopyProductRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source product.</p>
     */
    inline const Aws::String& GetSourceProductArn() const { return m_sourceProductArn; }
    inline bool SourceProductArnHasBeenSet() const { return m_sourceProductArnHasBeenSet; }
    template<typename SourceProductArnT = Aws::String>
    void SetSourceProductArn(SourceProductArnT&& value) { m_sourceProductArnHasBeenSet = true; m_sourceProductArn = std::forward<SourceProductArnT>(value); }
    template<typename SourceProductArnT = Aws::String>
    CopyProductRequest& WithSourceProductArn(SourceProductArnT&& value) { SetSourceProductArn(std::forward<SourceProductArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target product. By default, a new product is
     * created.</p>
     */
    inline const Aws::String& GetTargetProductId() const { return m_targetProductId; }
    inline bool TargetProductIdHasBeenSet() const { return m_targetProductIdHasBeenSet; }
    template<typename TargetProductIdT = Aws::String>
    void SetTargetProductId(TargetProductIdT&& value) { m_targetProductIdHasBeenSet = true; m_targetProductId = std::forward<TargetProductIdT>(value); }
    template<typename TargetProductIdT = Aws::String>
    CopyProductRequest& WithTargetProductId(TargetProductIdT&& value) { SetTargetProductId(std::forward<TargetProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the target product. The default is the name of the source
     * product.</p>
     */
    inline const Aws::String& GetTargetProductName() const { return m_targetProductName; }
    inline bool TargetProductNameHasBeenSet() const { return m_targetProductNameHasBeenSet; }
    template<typename TargetProductNameT = Aws::String>
    void SetTargetProductName(TargetProductNameT&& value) { m_targetProductNameHasBeenSet = true; m_targetProductName = std::forward<TargetProductNameT>(value); }
    template<typename TargetProductNameT = Aws::String>
    CopyProductRequest& WithTargetProductName(TargetProductNameT&& value) { SetTargetProductName(std::forward<TargetProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the provisioning artifacts (also known as versions) of the
     * product to copy. By default, all provisioning artifacts are copied.</p>
     */
    inline const Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>& GetSourceProvisioningArtifactIdentifiers() const { return m_sourceProvisioningArtifactIdentifiers; }
    inline bool SourceProvisioningArtifactIdentifiersHasBeenSet() const { return m_sourceProvisioningArtifactIdentifiersHasBeenSet; }
    template<typename SourceProvisioningArtifactIdentifiersT = Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>>
    void SetSourceProvisioningArtifactIdentifiers(SourceProvisioningArtifactIdentifiersT&& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers = std::forward<SourceProvisioningArtifactIdentifiersT>(value); }
    template<typename SourceProvisioningArtifactIdentifiersT = Aws::Vector<Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>>
    CopyProductRequest& WithSourceProvisioningArtifactIdentifiers(SourceProvisioningArtifactIdentifiersT&& value) { SetSourceProvisioningArtifactIdentifiers(std::forward<SourceProvisioningArtifactIdentifiersT>(value)); return *this;}
    template<typename SourceProvisioningArtifactIdentifiersT = Aws::Map<ProvisioningArtifactPropertyName, Aws::String>>
    CopyProductRequest& AddSourceProvisioningArtifactIdentifiers(SourceProvisioningArtifactIdentifiersT&& value) { m_sourceProvisioningArtifactIdentifiersHasBeenSet = true; m_sourceProvisioningArtifactIdentifiers.emplace_back(std::forward<SourceProvisioningArtifactIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The copy options. If the value is <code>CopyTags</code>, the tags from the
     * source product are copied to the target product.</p>
     */
    inline const Aws::Vector<CopyOption>& GetCopyOptions() const { return m_copyOptions; }
    inline bool CopyOptionsHasBeenSet() const { return m_copyOptionsHasBeenSet; }
    template<typename CopyOptionsT = Aws::Vector<CopyOption>>
    void SetCopyOptions(CopyOptionsT&& value) { m_copyOptionsHasBeenSet = true; m_copyOptions = std::forward<CopyOptionsT>(value); }
    template<typename CopyOptionsT = Aws::Vector<CopyOption>>
    CopyProductRequest& WithCopyOptions(CopyOptionsT&& value) { SetCopyOptions(std::forward<CopyOptionsT>(value)); return *this;}
    inline CopyProductRequest& AddCopyOptions(CopyOption value) { m_copyOptionsHasBeenSet = true; m_copyOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CopyProductRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
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

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
