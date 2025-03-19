/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/route53domains/model/SortOrder.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information for sorting a list of domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/SortCondition">AWS
   * API Reference</a></p>
   */
  class SortCondition
  {
  public:
    AWS_ROUTE53DOMAINS_API SortCondition() = default;
    AWS_ROUTE53DOMAINS_API SortCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API SortCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline ListDomainsAttributeName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ListDomainsAttributeName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SortCondition& WithName(ListDomainsAttributeName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SortCondition& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    ListDomainsAttributeName m_name{ListDomainsAttributeName::NOT_SET};
    bool m_nameHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
