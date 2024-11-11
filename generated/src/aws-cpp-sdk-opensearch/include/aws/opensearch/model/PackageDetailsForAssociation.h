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
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation();
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageDetailsForAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Internal ID of the package that you want to associate with a domain.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline PackageDetailsForAssociation& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline PackageDetailsForAssociation& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline PackageDetailsForAssociation& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of package IDs that must be associated with the domain with or before
     * the package can be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const{ return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    inline void SetPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = value; }
    inline void SetPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::move(value); }
    inline PackageDetailsForAssociation& WithPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { SetPrerequisitePackageIDList(value); return *this;}
    inline PackageDetailsForAssociation& WithPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { SetPrerequisitePackageIDList(std::move(value)); return *this;}
    inline PackageDetailsForAssociation& AddPrerequisitePackageIDList(const Aws::String& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    inline PackageDetailsForAssociation& AddPrerequisitePackageIDList(Aws::String&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(std::move(value)); return *this; }
    inline PackageDetailsForAssociation& AddPrerequisitePackageIDList(const char* value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for associating the package with a domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const{ return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    inline void SetAssociationConfiguration(const PackageAssociationConfiguration& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = value; }
    inline void SetAssociationConfiguration(PackageAssociationConfiguration&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::move(value); }
    inline PackageDetailsForAssociation& WithAssociationConfiguration(const PackageAssociationConfiguration& value) { SetAssociationConfiguration(value); return *this;}
    inline PackageDetailsForAssociation& WithAssociationConfiguration(PackageAssociationConfiguration&& value) { SetAssociationConfiguration(std::move(value)); return *this;}
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
