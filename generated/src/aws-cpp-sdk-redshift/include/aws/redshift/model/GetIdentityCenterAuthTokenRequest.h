/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 * <p>The request parameters for
 * <code>GetIdentityCenterAuthToken</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetIdentityCenterAuthTokenRequest">AWS
 * API Reference</a></p>
 */
class GetIdentityCenterAuthTokenRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API GetIdentityCenterAuthTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIdentityCenterAuthToken"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>A list of cluster identifiers that the generated token can be used with. The
   * token will be scoped to only allow authentication to the specified clusters.</p>
   * <p>Constraints:</p> <ul> <li> <p> <code>ClusterIds</code> must contain at least
   * 1 cluster identifier.</p> </li> <li> <p> <code>ClusterIds</code> can hold a
   * maximum of 20 cluster identifiers.</p> </li> <li> <p>Cluster identifiers must be
   * 1 to 63 characters in length.</p> </li> <li> <p>The characters accepted for
   * cluster identifiers are the following:</p> <ul> <li> <p>Alphanumeric
   * characters</p> </li> <li> <p>Hyphens</p> </li> </ul> </li> <li> <p>Cluster
   * identifiers must start with a letter.</p> </li> <li> <p>Cluster identifiers
   * can't end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetClusterIds() const { return m_clusterIds; }
  inline bool ClusterIdsHasBeenSet() const { return m_clusterIdsHasBeenSet; }
  template <typename ClusterIdsT = Aws::Vector<Aws::String>>
  void SetClusterIds(ClusterIdsT&& value) {
    m_clusterIdsHasBeenSet = true;
    m_clusterIds = std::forward<ClusterIdsT>(value);
  }
  template <typename ClusterIdsT = Aws::Vector<Aws::String>>
  GetIdentityCenterAuthTokenRequest& WithClusterIds(ClusterIdsT&& value) {
    SetClusterIds(std::forward<ClusterIdsT>(value));
    return *this;
  }
  template <typename ClusterIdsT = Aws::String>
  GetIdentityCenterAuthTokenRequest& AddClusterIds(ClusterIdsT&& value) {
    m_clusterIdsHasBeenSet = true;
    m_clusterIds.emplace_back(std::forward<ClusterIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_clusterIds;
  bool m_clusterIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
