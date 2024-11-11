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
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails();
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainPackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Internal ID of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline DomainPackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline DomainPackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline DomainPackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline DomainPackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline DomainPackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}
    inline DomainPackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of the most recent update to the package association status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline DomainPackageDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline DomainPackageDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain that the package is associated with.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainPackageDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainPackageDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainPackageDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the association.</p>
     */
    inline const DomainPackageStatus& GetDomainPackageStatus() const{ return m_domainPackageStatus; }
    inline bool DomainPackageStatusHasBeenSet() const { return m_domainPackageStatusHasBeenSet; }
    inline void SetDomainPackageStatus(const DomainPackageStatus& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = value; }
    inline void SetDomainPackageStatus(DomainPackageStatus&& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = std::move(value); }
    inline DomainPackageDetails& WithDomainPackageStatus(const DomainPackageStatus& value) { SetDomainPackageStatus(value); return *this;}
    inline DomainPackageDetails& WithDomainPackageStatus(DomainPackageStatus&& value) { SetDomainPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the package.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline DomainPackageDetails& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline DomainPackageDetails& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package IDs that must be associated with the domain before or with
     * the package can be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const{ return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    inline void SetPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = value; }
    inline void SetPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::move(value); }
    inline DomainPackageDetails& WithPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { SetPrerequisitePackageIDList(value); return *this;}
    inline DomainPackageDetails& WithPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { SetPrerequisitePackageIDList(std::move(value)); return *this;}
    inline DomainPackageDetails& AddPrerequisitePackageIDList(const Aws::String& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    inline DomainPackageDetails& AddPrerequisitePackageIDList(Aws::String&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(std::move(value)); return *this; }
    inline DomainPackageDetails& AddPrerequisitePackageIDList(const char* value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The relative path of the package on the OpenSearch Service cluster nodes.
     * This is <code>synonym_path</code> when the package is for synonym files.</p>
     */
    inline const Aws::String& GetReferencePath() const{ return m_referencePath; }
    inline bool ReferencePathHasBeenSet() const { return m_referencePathHasBeenSet; }
    inline void SetReferencePath(const Aws::String& value) { m_referencePathHasBeenSet = true; m_referencePath = value; }
    inline void SetReferencePath(Aws::String&& value) { m_referencePathHasBeenSet = true; m_referencePath = std::move(value); }
    inline void SetReferencePath(const char* value) { m_referencePathHasBeenSet = true; m_referencePath.assign(value); }
    inline DomainPackageDetails& WithReferencePath(const Aws::String& value) { SetReferencePath(value); return *this;}
    inline DomainPackageDetails& WithReferencePath(Aws::String&& value) { SetReferencePath(std::move(value)); return *this;}
    inline DomainPackageDetails& WithReferencePath(const char* value) { SetReferencePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline DomainPackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline DomainPackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for associating a package with an Amazon OpenSearch Service
     * domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const{ return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    inline void SetAssociationConfiguration(const PackageAssociationConfiguration& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = value; }
    inline void SetAssociationConfiguration(PackageAssociationConfiguration&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::move(value); }
    inline DomainPackageDetails& WithAssociationConfiguration(const PackageAssociationConfiguration& value) { SetAssociationConfiguration(value); return *this;}
    inline DomainPackageDetails& WithAssociationConfiguration(PackageAssociationConfiguration&& value) { SetAssociationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainPackageStatus m_domainPackageStatus;
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
