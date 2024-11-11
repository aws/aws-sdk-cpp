/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageType.h>
#include <aws/opensearch/model/PackageSource.h>
#include <aws/opensearch/model/PackageConfiguration.h>
#include <aws/opensearch/model/PackageVendingOptions.h>
#include <aws/opensearch/model/PackageEncryptionOptions.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for request parameters to the <code>CreatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreatePackageRequest">AWS
   * API Reference</a></p>
   */
  class CreatePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique name for the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline CreatePackageRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline CreatePackageRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline CreatePackageRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline CreatePackageRequest& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}
    inline CreatePackageRequest& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }
    inline CreatePackageRequest& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}
    inline CreatePackageRequest& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}
    inline CreatePackageRequest& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location from which to import the package.</p>
     */
    inline const PackageSource& GetPackageSource() const{ return m_packageSource; }
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }
    inline void SetPackageSource(const PackageSource& value) { m_packageSourceHasBeenSet = true; m_packageSource = value; }
    inline void SetPackageSource(PackageSource&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::move(value); }
    inline CreatePackageRequest& WithPackageSource(const PackageSource& value) { SetPackageSource(value); return *this;}
    inline CreatePackageRequest& WithPackageSource(PackageSource&& value) { SetPackageSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration parameters for the package being created.</p>
     */
    inline const PackageConfiguration& GetPackageConfiguration() const{ return m_packageConfiguration; }
    inline bool PackageConfigurationHasBeenSet() const { return m_packageConfigurationHasBeenSet; }
    inline void SetPackageConfiguration(const PackageConfiguration& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = value; }
    inline void SetPackageConfiguration(PackageConfiguration&& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = std::move(value); }
    inline CreatePackageRequest& WithPackageConfiguration(const PackageConfiguration& value) { SetPackageConfiguration(value); return *this;}
    inline CreatePackageRequest& WithPackageConfiguration(PackageConfiguration&& value) { SetPackageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon OpenSearch Service engine for which is compatible
     * with the package. This can only be specified for package type
     * <code>ZIP-PLUGIN</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreatePackageRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreatePackageRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreatePackageRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The vending options for the package being created. They determine if the
     * package can be vended to other users.</p>
     */
    inline const PackageVendingOptions& GetPackageVendingOptions() const{ return m_packageVendingOptions; }
    inline bool PackageVendingOptionsHasBeenSet() const { return m_packageVendingOptionsHasBeenSet; }
    inline void SetPackageVendingOptions(const PackageVendingOptions& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = value; }
    inline void SetPackageVendingOptions(PackageVendingOptions&& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = std::move(value); }
    inline CreatePackageRequest& WithPackageVendingOptions(const PackageVendingOptions& value) { SetPackageVendingOptions(value); return *this;}
    inline CreatePackageRequest& WithPackageVendingOptions(PackageVendingOptions&& value) { SetPackageVendingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption parameters for the package being created.</p>
     */
    inline const PackageEncryptionOptions& GetPackageEncryptionOptions() const{ return m_packageEncryptionOptions; }
    inline bool PackageEncryptionOptionsHasBeenSet() const { return m_packageEncryptionOptionsHasBeenSet; }
    inline void SetPackageEncryptionOptions(const PackageEncryptionOptions& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = value; }
    inline void SetPackageEncryptionOptions(PackageEncryptionOptions&& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = std::move(value); }
    inline CreatePackageRequest& WithPackageEncryptionOptions(const PackageEncryptionOptions& value) { SetPackageEncryptionOptions(value); return *this;}
    inline CreatePackageRequest& WithPackageEncryptionOptions(PackageEncryptionOptions&& value) { SetPackageEncryptionOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    PackageSource m_packageSource;
    bool m_packageSourceHasBeenSet = false;

    PackageConfiguration m_packageConfiguration;
    bool m_packageConfigurationHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    PackageVendingOptions m_packageVendingOptions;
    bool m_packageVendingOptionsHasBeenSet = false;

    PackageEncryptionOptions m_packageEncryptionOptions;
    bool m_packageEncryptionOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
