/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/MetricPolicy.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class PutMetricPolicyRequest : public MediaStoreRequest
  {
  public:
    AWS_MEDIASTORE_API PutMetricPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricPolicy"; }

    AWS_MEDIASTORE_API Aws::String SerializePayload() const override;

    AWS_MEDIASTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container that you want to add the metric policy to.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    PutMetricPolicyRequest& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric policy that you want to associate with the container. In the
     * policy, you must indicate whether you want MediaStore to send container-level
     * metrics. You can also include up to five rules to define groups of objects that
     * you want MediaStore to send object-level metrics for. If you include rules in
     * the policy, construct each rule with both of the following:</p> <ul> <li> <p>An
     * object group that defines which objects to include in the group. The definition
     * can be a path or a file name, but it can't have more than 900 characters. Valid
     * characters are: a-z, A-Z, 0-9, _ (underscore), = (equal), : (colon), . (period),
     * - (hyphen), ~ (tilde), / (forward slash), and * (asterisk). Wildcards (*) are
     * acceptable.</p> </li> <li> <p>An object group name that allows you to refer to
     * the object group. The name can't have more than 30 characters. Valid characters
     * are: a-z, A-Z, 0-9, and _ (underscore).</p> </li> </ul>
     */
    inline const MetricPolicy& GetMetricPolicy() const { return m_metricPolicy; }
    inline bool MetricPolicyHasBeenSet() const { return m_metricPolicyHasBeenSet; }
    template<typename MetricPolicyT = MetricPolicy>
    void SetMetricPolicy(MetricPolicyT&& value) { m_metricPolicyHasBeenSet = true; m_metricPolicy = std::forward<MetricPolicyT>(value); }
    template<typename MetricPolicyT = MetricPolicy>
    PutMetricPolicyRequest& WithMetricPolicy(MetricPolicyT&& value) { SetMetricPolicy(std::forward<MetricPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    MetricPolicy m_metricPolicy;
    bool m_metricPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
