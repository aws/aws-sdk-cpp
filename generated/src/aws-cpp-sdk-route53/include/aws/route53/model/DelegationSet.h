/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A complex type that lists the name servers in a delegation set, as well as
   * the <code>CallerReference</code> and the <code>ID</code> for the delegation
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DelegationSet">AWS
   * API Reference</a></p>
   */
  class DelegationSet
  {
  public:
    AWS_ROUTE53_API DelegationSet() = default;
    AWS_ROUTE53_API DelegationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API DelegationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DelegationSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    DelegationSet& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameServers() const { return m_nameServers; }
    inline bool NameServersHasBeenSet() const { return m_nameServersHasBeenSet; }
    template<typename NameServersT = Aws::Vector<Aws::String>>
    void SetNameServers(NameServersT&& value) { m_nameServersHasBeenSet = true; m_nameServers = std::forward<NameServersT>(value); }
    template<typename NameServersT = Aws::Vector<Aws::String>>
    DelegationSet& WithNameServers(NameServersT&& value) { SetNameServers(std::forward<NameServersT>(value)); return *this;}
    template<typename NameServersT = Aws::String>
    DelegationSet& AddNameServers(NameServersT&& value) { m_nameServersHasBeenSet = true; m_nameServers.emplace_back(std::forward<NameServersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_nameServers;
    bool m_nameServersHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
