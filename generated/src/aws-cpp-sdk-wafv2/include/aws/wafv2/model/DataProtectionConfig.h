/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/DataProtection.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Specifies data protection to apply to the web request data for the web ACL.
   * This is a web ACL level data protection option. </p> <p>The data protection that
   * you configure for the web ACL alters the data that's available for any other
   * data collection activity, including your WAF logging destinations, web ACL
   * request sampling, and Amazon Security Lake data collection and management. Your
   * other option for data protection is in the logging configuration, which only
   * affects logging. </p> <p>This is part of the data protection configuration for a
   * web ACL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DataProtectionConfig">AWS
   * API Reference</a></p>
   */
  class DataProtectionConfig
  {
  public:
    AWS_WAFV2_API DataProtectionConfig() = default;
    AWS_WAFV2_API DataProtectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API DataProtectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of data protection configurations for specific web request field
     * types. This is defined for each web ACL. WAF applies the specified protection to
     * all web requests that the web ACL inspects. </p>
     */
    inline const Aws::Vector<DataProtection>& GetDataProtections() const { return m_dataProtections; }
    inline bool DataProtectionsHasBeenSet() const { return m_dataProtectionsHasBeenSet; }
    template<typename DataProtectionsT = Aws::Vector<DataProtection>>
    void SetDataProtections(DataProtectionsT&& value) { m_dataProtectionsHasBeenSet = true; m_dataProtections = std::forward<DataProtectionsT>(value); }
    template<typename DataProtectionsT = Aws::Vector<DataProtection>>
    DataProtectionConfig& WithDataProtections(DataProtectionsT&& value) { SetDataProtections(std::forward<DataProtectionsT>(value)); return *this;}
    template<typename DataProtectionsT = DataProtection>
    DataProtectionConfig& AddDataProtections(DataProtectionsT&& value) { m_dataProtectionsHasBeenSet = true; m_dataProtections.emplace_back(std::forward<DataProtectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataProtection> m_dataProtections;
    bool m_dataProtectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
