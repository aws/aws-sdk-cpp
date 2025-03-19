/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageSource.h>
#include <aws/opensearch/model/PackageConfiguration.h>
#include <aws/opensearch/model/PackageEncryptionOptions.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for request parameters to the <code>UpdatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackageRequest">AWS
   * API Reference</a></p>
   */
  class UpdatePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    UpdatePackageRequest& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 bucket and key for the package.</p>
     */
    inline const PackageSource& GetPackageSource() const { return m_packageSource; }
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }
    template<typename PackageSourceT = PackageSource>
    void SetPackageSource(PackageSourceT&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::forward<PackageSourceT>(value); }
    template<typename PackageSourceT = PackageSource>
    UpdatePackageRequest& WithPackageSource(PackageSourceT&& value) { SetPackageSource(std::forward<PackageSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const { return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    template<typename PackageDescriptionT = Aws::String>
    void SetPackageDescription(PackageDescriptionT&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::forward<PackageDescriptionT>(value); }
    template<typename PackageDescriptionT = Aws::String>
    UpdatePackageRequest& WithPackageDescription(PackageDescriptionT&& value) { SetPackageDescription(std::forward<PackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Commit message for the updated file, which is shown as part of
     * <code>GetPackageVersionHistoryResponse</code>.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    UpdatePackageRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated configuration details for a package.</p>
     */
    inline const PackageConfiguration& GetPackageConfiguration() const { return m_packageConfiguration; }
    inline bool PackageConfigurationHasBeenSet() const { return m_packageConfigurationHasBeenSet; }
    template<typename PackageConfigurationT = PackageConfiguration>
    void SetPackageConfiguration(PackageConfigurationT&& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = std::forward<PackageConfigurationT>(value); }
    template<typename PackageConfigurationT = PackageConfiguration>
    UpdatePackageRequest& WithPackageConfiguration(PackageConfigurationT&& value) { SetPackageConfiguration(std::forward<PackageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption options for a package.</p>
     */
    inline const PackageEncryptionOptions& GetPackageEncryptionOptions() const { return m_packageEncryptionOptions; }
    inline bool PackageEncryptionOptionsHasBeenSet() const { return m_packageEncryptionOptionsHasBeenSet; }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    void SetPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = std::forward<PackageEncryptionOptionsT>(value); }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    UpdatePackageRequest& WithPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { SetPackageEncryptionOptions(std::forward<PackageEncryptionOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    PackageSource m_packageSource;
    bool m_packageSourceHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    PackageConfiguration m_packageConfiguration;
    bool m_packageConfigurationHasBeenSet = false;

    PackageEncryptionOptions m_packageEncryptionOptions;
    bool m_packageEncryptionOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
