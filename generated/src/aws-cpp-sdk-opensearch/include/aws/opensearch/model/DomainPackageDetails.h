/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/DomainPackageStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ErrorDetails.h>
#include <aws/opensearch/model/PackageAssociationConfiguration.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about a package that is associated with a domain. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
   * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainPackageDetails">AWS
   * API Reference</a></p>
   */
  class DomainPackageDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails() = default;
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Internal ID of the package.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    DomainPackageDetails& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    DomainPackageDetails& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline DomainPackageDetails& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of the most recent update to the package association status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    DomainPackageDetails& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain that the package is associated with.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainPackageDetails& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the association.</p>
     */
    inline DomainPackageStatus GetDomainPackageStatus() const { return m_domainPackageStatus; }
    inline bool DomainPackageStatusHasBeenSet() const { return m_domainPackageStatusHasBeenSet; }
    inline void SetDomainPackageStatus(DomainPackageStatus value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = value; }
    inline DomainPackageDetails& WithDomainPackageStatus(DomainPackageStatus value) { SetDomainPackageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the package.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    DomainPackageDetails& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package IDs that must be associated with the domain before or with
     * the package can be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const { return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    void SetPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::forward<PrerequisitePackageIDListT>(value); }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    DomainPackageDetails& WithPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { SetPrerequisitePackageIDList(std::forward<PrerequisitePackageIDListT>(value)); return *this;}
    template<typename PrerequisitePackageIDListT = Aws::String>
    DomainPackageDetails& AddPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.emplace_back(std::forward<PrerequisitePackageIDListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The relative path of the package on the OpenSearch Service cluster nodes.
     * This is <code>synonym_path</code> when the package is for synonym files.</p>
     */
    inline const Aws::String& GetReferencePath() const { return m_referencePath; }
    inline bool ReferencePathHasBeenSet() const { return m_referencePathHasBeenSet; }
    template<typename ReferencePathT = Aws::String>
    void SetReferencePath(ReferencePathT&& value) { m_referencePathHasBeenSet = true; m_referencePath = std::forward<ReferencePathT>(value); }
    template<typename ReferencePathT = Aws::String>
    DomainPackageDetails& WithReferencePath(ReferencePathT&& value) { SetReferencePath(std::forward<ReferencePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    DomainPackageDetails& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for associating a package with an Amazon OpenSearch Service
     * domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const { return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    void SetAssociationConfiguration(AssociationConfigurationT&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::forward<AssociationConfigurationT>(value); }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    DomainPackageDetails& WithAssociationConfiguration(AssociationConfigurationT&& value) { SetAssociationConfiguration(std::forward<AssociationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
    bool m_packageTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainPackageStatus m_domainPackageStatus{DomainPackageStatus::NOT_SET};
    bool m_domainPackageStatusHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_prerequisitePackageIDList;
    bool m_prerequisitePackageIDListHasBeenSet = false;

    Aws::String m_referencePath;
    bool m_referencePathHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    PackageAssociationConfiguration m_associationConfiguration;
    bool m_associationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
