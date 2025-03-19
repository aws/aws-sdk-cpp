/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The DeleteTagsForDomainRequest includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class DeleteTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API DeleteTagsForDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTagsForDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DeleteTagsForDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToDelete() const { return m_tagsToDelete; }
    inline bool TagsToDeleteHasBeenSet() const { return m_tagsToDeleteHasBeenSet; }
    template<typename TagsToDeleteT = Aws::Vector<Aws::String>>
    void SetTagsToDelete(TagsToDeleteT&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete = std::forward<TagsToDeleteT>(value); }
    template<typename TagsToDeleteT = Aws::Vector<Aws::String>>
    DeleteTagsForDomainRequest& WithTagsToDelete(TagsToDeleteT&& value) { SetTagsToDelete(std::forward<TagsToDeleteT>(value)); return *this;}
    template<typename TagsToDeleteT = Aws::String>
    DeleteTagsForDomainRequest& AddTagsToDelete(TagsToDeleteT&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.emplace_back(std::forward<TagsToDeleteT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToDelete;
    bool m_tagsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
