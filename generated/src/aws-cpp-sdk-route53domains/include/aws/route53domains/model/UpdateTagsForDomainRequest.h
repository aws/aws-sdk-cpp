/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateTagsForDomainRequest includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class UpdateTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API UpdateTagsForDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTagsForDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateTagsForDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToUpdate() const { return m_tagsToUpdate; }
    inline bool TagsToUpdateHasBeenSet() const { return m_tagsToUpdateHasBeenSet; }
    template<typename TagsToUpdateT = Aws::Vector<Tag>>
    void SetTagsToUpdate(TagsToUpdateT&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate = std::forward<TagsToUpdateT>(value); }
    template<typename TagsToUpdateT = Aws::Vector<Tag>>
    UpdateTagsForDomainRequest& WithTagsToUpdate(TagsToUpdateT&& value) { SetTagsToUpdate(std::forward<TagsToUpdateT>(value)); return *this;}
    template<typename TagsToUpdateT = Tag>
    UpdateTagsForDomainRequest& AddTagsToUpdate(TagsToUpdateT&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate.emplace_back(std::forward<TagsToUpdateT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Tag> m_tagsToUpdate;
    bool m_tagsToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
