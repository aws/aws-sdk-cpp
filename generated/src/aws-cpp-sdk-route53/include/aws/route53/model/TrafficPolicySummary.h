/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the latest version of one
   * traffic policy that is associated with the current Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TrafficPolicySummary">AWS
   * API Reference</a></p>
   */
  class TrafficPolicySummary
  {
  public:
    AWS_ROUTE53_API TrafficPolicySummary() = default;
    AWS_ROUTE53_API TrafficPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API TrafficPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TrafficPolicySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TrafficPolicySummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline RRType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RRType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TrafficPolicySummary& WithType(RRType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline int GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TrafficPolicySummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of traffic policies that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline int GetTrafficPolicyCount() const { return m_trafficPolicyCount; }
    inline bool TrafficPolicyCountHasBeenSet() const { return m_trafficPolicyCountHasBeenSet; }
    inline void SetTrafficPolicyCount(int value) { m_trafficPolicyCountHasBeenSet = true; m_trafficPolicyCount = value; }
    inline TrafficPolicySummary& WithTrafficPolicyCount(int value) { SetTrafficPolicyCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RRType m_type{RRType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_latestVersion{0};
    bool m_latestVersionHasBeenSet = false;

    int m_trafficPolicyCount{0};
    bool m_trafficPolicyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
