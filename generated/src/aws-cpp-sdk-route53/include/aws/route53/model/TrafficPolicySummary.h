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
    AWS_ROUTE53_API TrafficPolicySummary();
    AWS_ROUTE53_API TrafficPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API TrafficPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TrafficPolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TrafficPolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TrafficPolicySummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrafficPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrafficPolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrafficPolicySummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline const RRType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TrafficPolicySummary& WithType(const RRType& value) { SetType(value); return *this;}
    inline TrafficPolicySummary& WithType(RRType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TrafficPolicySummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of traffic policies that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline int GetTrafficPolicyCount() const{ return m_trafficPolicyCount; }
    inline bool TrafficPolicyCountHasBeenSet() const { return m_trafficPolicyCountHasBeenSet; }
    inline void SetTrafficPolicyCount(int value) { m_trafficPolicyCountHasBeenSet = true; m_trafficPolicyCount = value; }
    inline TrafficPolicySummary& WithTrafficPolicyCount(int value) { SetTrafficPolicyCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RRType m_type;
    bool m_typeHasBeenSet = false;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    int m_trafficPolicyCount;
    bool m_trafficPolicyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
