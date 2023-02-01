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
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of origin groups.</p>
     */
    inline const Aws::Vector<AwsCloudFrontDistributionOriginGroup>& GetItems() const{ return m_items; }

    /**
     * <p>The list of origin groups.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of origin groups.</p>
     */
    inline void SetItems(const Aws::Vector<AwsCloudFrontDistributionOriginGroup>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of origin groups.</p>
     */
    inline void SetItems(Aws::Vector<AwsCloudFrontDistributionOriginGroup>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of origin groups.</p>
     */
    inline AwsCloudFrontDistributionOriginGroups& WithItems(const Aws::Vector<AwsCloudFrontDistributionOriginGroup>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of origin groups.</p>
     */
    inline AwsCloudFrontDistributionOriginGroups& WithItems(Aws::Vector<AwsCloudFrontDistributionOriginGroup>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of origin groups.</p>
     */
    inline AwsCloudFrontDistributionOriginGroups& AddItems(const AwsCloudFrontDistributionOriginGroup& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of origin groups.</p>
     */
    inline AwsCloudFrontDistributionOriginGroups& AddItems(AwsCloudFrontDistributionOriginGroup&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsCloudFrontDistributionOriginGroup> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
