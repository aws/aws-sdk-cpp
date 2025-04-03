/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Details of a package that is associated with a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageDetailsForAssociation">AWS
   * API Reference</a></p>
   */
  class PackageDetailsForAssociation
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation() = default;
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Internal ID of the package that you want to associate with a domain.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    PackageDetailsForAssociation& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of package IDs that must be linked to the domain before or
     * simultaneously with the package association.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const { return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    void SetPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::forward<PrerequisitePackageIDListT>(value); }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    PackageDetailsForAssociation& WithPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { SetPrerequisitePackageIDList(std::forward<PrerequisitePackageIDListT>(value)); return *this;}
    template<typename PrerequisitePackageIDListT = Aws::String>
    PackageDetailsForAssociation& AddPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.emplace_back(std::forward<PrerequisitePackageIDListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for associating the package with a domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const { return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    void SetAssociationConfiguration(AssociationConfigurationT&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::forward<AssociationConfigurationT>(value); }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    PackageDetailsForAssociation& WithAssociationConfiguration(AssociationConfigurationT&& value) { SetAssociationConfiguration(std::forward<AssociationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::Vector<Aws::String> m_prerequisitePackageIDList;
    bool m_prerequisitePackageIDListHasBeenSet = false;

    PackageAssociationConfiguration m_associationConfiguration;
    bool m_associationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
