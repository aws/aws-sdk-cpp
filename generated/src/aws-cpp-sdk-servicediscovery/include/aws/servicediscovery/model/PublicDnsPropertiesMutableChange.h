﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/SOAChange.h>
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
   * <p>Updated DNS properties for the public DNS namespace.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsPropertiesMutableChange">AWS
   * API Reference</a></p>
   */
  class PublicDnsPropertiesMutableChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutableChange();
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutableChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PublicDnsPropertiesMutableChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the public DNS namespace.</p>
     */
    inline const SOAChange& GetSOA() const{ return m_sOA; }
    inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }
    inline void SetSOA(const SOAChange& value) { m_sOAHasBeenSet = true; m_sOA = value; }
    inline void SetSOA(SOAChange&& value) { m_sOAHasBeenSet = true; m_sOA = std::move(value); }
    inline PublicDnsPropertiesMutableChange& WithSOA(const SOAChange& value) { SetSOA(value); return *this;}
    inline PublicDnsPropertiesMutableChange& WithSOA(SOAChange&& value) { SetSOA(std::move(value)); return *this;}
    ///@}
  private:

    SOAChange m_sOA;
    bool m_sOAHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
