/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/CidrCollectionChangeAction.h>
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
   * <p>A complex type that contains information about the CIDR collection
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CidrCollectionChange">AWS
   * API Reference</a></p>
   */
  class CidrCollectionChange
  {
  public:
    AWS_ROUTE53_API CidrCollectionChange() = default;
    AWS_ROUTE53_API CidrCollectionChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API CidrCollectionChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline const Aws::String& GetLocationName() const { return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    template<typename LocationNameT = Aws::String>
    void SetLocationName(LocationNameT&& value) { m_locationNameHasBeenSet = true; m_locationName = std::forward<LocationNameT>(value); }
    template<typename LocationNameT = Aws::String>
    CidrCollectionChange& WithLocationName(LocationNameT&& value) { SetLocationName(std::forward<LocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CIDR collection change action. </p>
     */
    inline CidrCollectionChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(CidrCollectionChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline CidrCollectionChange& WithAction(CidrCollectionChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrList() const { return m_cidrList; }
    inline bool CidrListHasBeenSet() const { return m_cidrListHasBeenSet; }
    template<typename CidrListT = Aws::Vector<Aws::String>>
    void SetCidrList(CidrListT&& value) { m_cidrListHasBeenSet = true; m_cidrList = std::forward<CidrListT>(value); }
    template<typename CidrListT = Aws::Vector<Aws::String>>
    CidrCollectionChange& WithCidrList(CidrListT&& value) { SetCidrList(std::forward<CidrListT>(value)); return *this;}
    template<typename CidrListT = Aws::String>
    CidrCollectionChange& AddCidrList(CidrListT&& value) { m_cidrListHasBeenSet = true; m_cidrList.emplace_back(std::forward<CidrListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    CidrCollectionChangeAction m_action{CidrCollectionChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrList;
    bool m_cidrListHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
