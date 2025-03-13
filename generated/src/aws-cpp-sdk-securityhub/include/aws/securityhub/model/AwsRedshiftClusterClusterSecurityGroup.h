/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A security group that is associated with the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterSecurityGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSecurityGroup() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster security group.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const { return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    void SetClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::forward<ClusterSecurityGroupNameT>(value); }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    AwsRedshiftClusterClusterSecurityGroup& WithClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { SetClusterSecurityGroupName(std::forward<ClusterSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRedshiftClusterClusterSecurityGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
