/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroup.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about origin groups that are associated with the
   * CloudFront distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginGroups">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginGroups
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of origin groups.</p>
     */
    inline const Aws::Vector<AwsCloudFrontDistributionOriginGroup>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<AwsCloudFrontDistributionOriginGroup>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<AwsCloudFrontDistributionOriginGroup>>
    AwsCloudFrontDistributionOriginGroups& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = AwsCloudFrontDistributionOriginGroup>
    AwsCloudFrontDistributionOriginGroups& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsCloudFrontDistributionOriginGroup> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
