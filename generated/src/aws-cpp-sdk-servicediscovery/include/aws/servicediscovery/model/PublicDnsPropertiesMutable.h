/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/SOA.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>DNS properties for the public DNS namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsPropertiesMutable">AWS
   * API Reference</a></p>
   */
  class PublicDnsPropertiesMutable
  {
  public:
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutable() = default;
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutable(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start of Authority (SOA) record for the hosted zone for the public DNS
     * namespace.</p>
     */
    inline const SOA& GetSOA() const { return m_sOA; }
    inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }
    template<typename SOAT = SOA>
    void SetSOA(SOAT&& value) { m_sOAHasBeenSet = true; m_sOA = std::forward<SOAT>(value); }
    template<typename SOAT = SOA>
    PublicDnsPropertiesMutable& WithSOA(SOAT&& value) { SetSOA(std::forward<SOAT>(value)); return *this;}
    ///@}
  private:

    SOA m_sOA;
    bool m_sOAHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
