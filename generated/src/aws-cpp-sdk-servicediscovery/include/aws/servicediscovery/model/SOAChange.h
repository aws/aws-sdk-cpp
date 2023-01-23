/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

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
   * <p>Updated Start of Authority (SOA) properties for a public or private DNS
   * namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/SOAChange">AWS
   * API Reference</a></p>
   */
  class SOAChange
  {
  public:
    AWS_SERVICEDISCOVERY_API SOAChange();
    AWS_SERVICEDISCOVERY_API SOAChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API SOAChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated time to live (TTL) for purposes of negative caching.</p>
     */
    inline long long GetTTL() const{ return m_tTL; }

    /**
     * <p>The updated time to live (TTL) for purposes of negative caching.</p>
     */
    inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }

    /**
     * <p>The updated time to live (TTL) for purposes of negative caching.</p>
     */
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    /**
     * <p>The updated time to live (TTL) for purposes of negative caching.</p>
     */
    inline SOAChange& WithTTL(long long value) { SetTTL(value); return *this;}

  private:

    long long m_tTL;
    bool m_tTLHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
