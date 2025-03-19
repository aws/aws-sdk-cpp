/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a cluster version, including the parameter group family and
   * description of the version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterVersion">AWS
   * API Reference</a></p>
   */
  class ClusterVersion
  {
  public:
    AWS_REDSHIFT_API ClusterVersion() = default;
    AWS_REDSHIFT_API ClusterVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The version number used by the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    ClusterVersion& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline const Aws::String& GetClusterParameterGroupFamily() const { return m_clusterParameterGroupFamily; }
    inline bool ClusterParameterGroupFamilyHasBeenSet() const { return m_clusterParameterGroupFamilyHasBeenSet; }
    template<typename ClusterParameterGroupFamilyT = Aws::String>
    void SetClusterParameterGroupFamily(ClusterParameterGroupFamilyT&& value) { m_clusterParameterGroupFamilyHasBeenSet = true; m_clusterParameterGroupFamily = std::forward<ClusterParameterGroupFamilyT>(value); }
    template<typename ClusterParameterGroupFamilyT = Aws::String>
    ClusterVersion& WithClusterParameterGroupFamily(ClusterParameterGroupFamilyT&& value) { SetClusterParameterGroupFamily(std::forward<ClusterParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ClusterVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_clusterParameterGroupFamily;
    bool m_clusterParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
