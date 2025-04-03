/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Configuration options for determining whether a package can be made available
   * for use by other users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageVendingOptions">AWS
   * API Reference</a></p>
   */
  class PackageVendingOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageVendingOptions() = default;
    AWS_OPENSEARCHSERVICE_API PackageVendingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageVendingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the package vending feature is enabled, allowing the
     * package to be used by other users.</p>
     */
    inline bool GetVendingEnabled() const { return m_vendingEnabled; }
    inline bool VendingEnabledHasBeenSet() const { return m_vendingEnabledHasBeenSet; }
    inline void SetVendingEnabled(bool value) { m_vendingEnabledHasBeenSet = true; m_vendingEnabled = value; }
    inline PackageVendingOptions& WithVendingEnabled(bool value) { SetVendingEnabled(value); return *this;}
    ///@}
  private:

    bool m_vendingEnabled{false};
    bool m_vendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
