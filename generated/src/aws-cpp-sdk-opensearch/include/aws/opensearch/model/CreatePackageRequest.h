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
    AWS_OPENSEARCHSERVICE_API CreatePackageRequest() = default;

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
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    CreatePackageRequest& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline CreatePackageRequest& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const { return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    template<typename PackageDescriptionT = Aws::String>
    void SetPackageDescription(PackageDescriptionT&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::forward<PackageDescriptionT>(value); }
    template<typename PackageDescriptionT = Aws::String>
    CreatePackageRequest& WithPackageDescription(PackageDescriptionT&& value) { SetPackageDescription(std::forward<PackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location from which to import the package.</p>
     */
    inline const PackageSource& GetPackageSource() const { return m_packageSource; }
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }
    template<typename PackageSourceT = PackageSource>
    void SetPackageSource(PackageSourceT&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::forward<PackageSourceT>(value); }
    template<typename PackageSourceT = PackageSource>
    CreatePackageRequest& WithPackageSource(PackageSourceT&& value) { SetPackageSource(std::forward<PackageSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration parameters for the package being created.</p>
     */
    inline const PackageConfiguration& GetPackageConfiguration() const { return m_packageConfiguration; }
    inline bool PackageConfigurationHasBeenSet() const { return m_packageConfigurationHasBeenSet; }
    template<typename PackageConfigurationT = PackageConfiguration>
    void SetPackageConfiguration(PackageConfigurationT&& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = std::forward<PackageConfigurationT>(value); }
    template<typename PackageConfigurationT = PackageConfiguration>
    CreatePackageRequest& WithPackageConfiguration(PackageConfigurationT&& value) { SetPackageConfiguration(std::forward<PackageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon OpenSearch Service engine for which is compatible
     * with the package. This can only be specified for package type
     * <code>ZIP-PLUGIN</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreatePackageRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The vending options for the package being created. They determine if the
     * package can be vended to other users.</p>
     */
    inline const PackageVendingOptions& GetPackageVendingOptions() const { return m_packageVendingOptions; }
    inline bool PackageVendingOptionsHasBeenSet() const { return m_packageVendingOptionsHasBeenSet; }
    template<typename PackageVendingOptionsT = PackageVendingOptions>
    void SetPackageVendingOptions(PackageVendingOptionsT&& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = std::forward<PackageVendingOptionsT>(value); }
    template<typename PackageVendingOptionsT = PackageVendingOptions>
    CreatePackageRequest& WithPackageVendingOptions(PackageVendingOptionsT&& value) { SetPackageVendingOptions(std::forward<PackageVendingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption parameters for the package being created.</p>
     */
    inline const PackageEncryptionOptions& GetPackageEncryptionOptions() const { return m_packageEncryptionOptions; }
    inline bool PackageEncryptionOptionsHasBeenSet() const { return m_packageEncryptionOptionsHasBeenSet; }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    void SetPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = std::forward<PackageEncryptionOptionsT>(value); }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    CreatePackageRequest& WithPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { SetPackageEncryptionOptions(std::forward<PackageEncryptionOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
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
