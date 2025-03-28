﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeAction.h>
#include <aws/route53/model/ResourceRecordSet.h>
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
   * <p>The information for each resource record set that you want to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/Change">AWS API
   * Reference</a></p>
   */
  class Change
  {
  public:
    AWS_ROUTE53_API Change() = default;
    AWS_ROUTE53_API Change(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API Change& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set.</p> 
     * <p>To delete the resource record set that is associated with a traffic policy
     * instance, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteTrafficPolicyInstance.html">DeleteTrafficPolicyInstance</a>.
     * Amazon Route 53 will delete the resource record set automatically. If you delete
     * the resource record set by using <code>ChangeResourceRecordSets</code>, Route 53
     * doesn't automatically delete the traffic policy instance, and you'll continue to
     * be charged for it even though it's no longer in use. </p>  </li>
     * <li> <p> <code>UPSERT</code>: If a resource record set doesn't already exist,
     * Route 53 creates it. If a resource record set does exist, Route 53 updates it
     * with the values in the request.</p> </li> </ul>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline Change& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource record set to create, delete, or update.</p>
     */
    inline const ResourceRecordSet& GetResourceRecordSet() const { return m_resourceRecordSet; }
    inline bool ResourceRecordSetHasBeenSet() const { return m_resourceRecordSetHasBeenSet; }
    template<typename ResourceRecordSetT = ResourceRecordSet>
    void SetResourceRecordSet(ResourceRecordSetT&& value) { m_resourceRecordSetHasBeenSet = true; m_resourceRecordSet = std::forward<ResourceRecordSetT>(value); }
    template<typename ResourceRecordSetT = ResourceRecordSet>
    Change& WithResourceRecordSet(ResourceRecordSetT&& value) { SetResourceRecordSet(std::forward<ResourceRecordSetT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    ResourceRecordSet m_resourceRecordSet;
    bool m_resourceRecordSetHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
