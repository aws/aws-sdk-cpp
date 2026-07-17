/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains information about an Amazon Web Services Identity and Access
 * Management (IAM) role to associate with a DB cluster. You can specify this
 * structure in the <code>AssociatedRoles</code> parameter of
 * <a>CreateDBCluster</a>, <a>RestoreDBClusterFromS3</a>,
 * <a>RestoreDBClusterFromSnapshot</a>, and
 * <a>RestoreDBClusterToPointInTime</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterAssociatedRole">AWS
 * API Reference</a></p>
 */
class DBClusterAssociatedRole {
 public:
  AWS_RDS_API DBClusterAssociatedRole() = default;
  AWS_RDS_API DBClusterAssociatedRole(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBClusterAssociatedRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to associate with the DB
   * cluster.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  DBClusterAssociatedRole& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the feature associated with the IAM role. For information about
   * supported feature names, see <a>DBEngineVersion</a>.</p>
   */
  inline const Aws::String& GetFeatureName() const { return m_featureName; }
  inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
  template <typename FeatureNameT = Aws::String>
  void SetFeatureName(FeatureNameT&& value) {
    m_featureNameHasBeenSet = true;
    m_featureName = std::forward<FeatureNameT>(value);
  }
  template <typename FeatureNameT = Aws::String>
  DBClusterAssociatedRole& WithFeatureName(FeatureNameT&& value) {
    SetFeatureName(std::forward<FeatureNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_featureName;
  bool m_roleArnHasBeenSet = false;
  bool m_featureNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
