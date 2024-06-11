﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An object that contains summary information about a product view and a
   * provisioning artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactView">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactView
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactView();
    AWS_SERVICECATALOG_API ProvisioningArtifactView(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summary information about a product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }
    inline bool ProductViewSummaryHasBeenSet() const { return m_productViewSummaryHasBeenSet; }
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = value; }
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::move(value); }
    inline ProvisioningArtifactView& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}
    inline ProvisioningArtifactView& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline const ProvisioningArtifact& GetProvisioningArtifact() const{ return m_provisioningArtifact; }
    inline bool ProvisioningArtifactHasBeenSet() const { return m_provisioningArtifactHasBeenSet; }
    inline void SetProvisioningArtifact(const ProvisioningArtifact& value) { m_provisioningArtifactHasBeenSet = true; m_provisioningArtifact = value; }
    inline void SetProvisioningArtifact(ProvisioningArtifact&& value) { m_provisioningArtifactHasBeenSet = true; m_provisioningArtifact = std::move(value); }
    inline ProvisioningArtifactView& WithProvisioningArtifact(const ProvisioningArtifact& value) { SetProvisioningArtifact(value); return *this;}
    inline ProvisioningArtifactView& WithProvisioningArtifact(ProvisioningArtifact&& value) { SetProvisioningArtifact(std::move(value)); return *this;}
    ///@}
  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet = false;

    ProvisioningArtifact m_provisioningArtifact;
    bool m_provisioningArtifactHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
