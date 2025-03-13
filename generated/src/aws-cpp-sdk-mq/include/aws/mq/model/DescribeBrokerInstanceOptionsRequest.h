/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MQ
{
namespace Model
{

  /**
   */
  class DescribeBrokerInstanceOptionsRequest : public MQRequest
  {
  public:
    AWS_MQ_API DescribeBrokerInstanceOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBrokerInstanceOptions"; }

    AWS_MQ_API Aws::String SerializePayload() const override;

    AWS_MQ_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter response by engine type.</p>
     */
    inline const Aws::String& GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    template<typename EngineTypeT = Aws::String>
    void SetEngineType(EngineTypeT&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::forward<EngineTypeT>(value); }
    template<typename EngineTypeT = Aws::String>
    DescribeBrokerInstanceOptionsRequest& WithEngineType(EngineTypeT&& value) { SetEngineType(std::forward<EngineTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter response by host instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of brokers that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBrokerInstanceOptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBrokerInstanceOptionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter response by storage type.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DescribeBrokerInstanceOptionsRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
