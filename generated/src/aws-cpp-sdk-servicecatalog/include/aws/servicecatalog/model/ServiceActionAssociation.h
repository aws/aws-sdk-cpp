/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>A self-service action association consisting of the Action ID, the Product
   * ID, and the Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ServiceActionAssociation">AWS
   * API Reference</a></p>
   */
  class ServiceActionAssociation
  {
  public:
    AWS_SERVICECATALOG_API ServiceActionAssociation();
    AWS_SERVICECATALOG_API ServiceActionAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ServiceActionAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetServiceActionId() const{ return m_serviceActionId; }
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }
    inline void SetServiceActionId(const Aws::String& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = value; }
    inline void SetServiceActionId(Aws::String&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::move(value); }
    inline void SetServiceActionId(const char* value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId.assign(value); }
    inline ServiceActionAssociation& WithServiceActionId(const Aws::String& value) { SetServiceActionId(value); return *this;}
    inline ServiceActionAssociation& WithServiceActionId(Aws::String&& value) { SetServiceActionId(std::move(value)); return *this;}
    inline ServiceActionAssociation& WithServiceActionId(const char* value) { SetServiceActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ServiceActionAssociation& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ServiceActionAssociation& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ServiceActionAssociation& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline ServiceActionAssociation& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline ServiceActionAssociation& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline ServiceActionAssociation& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
