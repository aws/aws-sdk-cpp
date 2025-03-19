/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Represents an available endpoint against which to make API calls against, as
   * well as the TTL for that endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_TIMESTREAMQUERY_API Endpoint() = default;
    AWS_TIMESTREAMQUERY_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An endpoint address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Endpoint& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TTL for the endpoint, in minutes.</p>
     */
    inline long long GetCachePeriodInMinutes() const { return m_cachePeriodInMinutes; }
    inline bool CachePeriodInMinutesHasBeenSet() const { return m_cachePeriodInMinutesHasBeenSet; }
    inline void SetCachePeriodInMinutes(long long value) { m_cachePeriodInMinutesHasBeenSet = true; m_cachePeriodInMinutes = value; }
    inline Endpoint& WithCachePeriodInMinutes(long long value) { SetCachePeriodInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    long long m_cachePeriodInMinutes{0};
    bool m_cachePeriodInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
