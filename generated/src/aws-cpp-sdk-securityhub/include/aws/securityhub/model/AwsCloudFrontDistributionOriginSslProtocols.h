/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains information about the SSL/TLS protocols that
   * CloudFront can use when establishing an HTTPS connection with your origin.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginSslProtocols">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginSslProtocols
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginSslProtocols() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginSslProtocols(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginSslProtocols& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list that contains allowed SSL/TLS protocols for this distribution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    AwsCloudFrontDistributionOriginSslProtocols& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Aws::String>
    AwsCloudFrontDistributionOriginSslProtocols& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of SSL/TLS protocols that you want to allow CloudFront to use when
     * establishing an HTTPS connection with this origin. </p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline AwsCloudFrontDistributionOriginSslProtocols& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
