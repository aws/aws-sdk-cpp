/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{
  class GetSnowballUsageResult
  {
  public:
    AWS_SNOWBALL_API GetSnowballUsageResult() = default;
    AWS_SNOWBALL_API GetSnowballUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetSnowballUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service limit for number of Snow devices this account can have at once.
     * The default service limit is 1 (one).</p>
     */
    inline int GetSnowballLimit() const { return m_snowballLimit; }
    inline void SetSnowballLimit(int value) { m_snowballLimitHasBeenSet = true; m_snowballLimit = value; }
    inline GetSnowballUsageResult& WithSnowballLimit(int value) { SetSnowballLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Snow devices that this account is currently using.</p>
     */
    inline int GetSnowballsInUse() const { return m_snowballsInUse; }
    inline void SetSnowballsInUse(int value) { m_snowballsInUseHasBeenSet = true; m_snowballsInUse = value; }
    inline GetSnowballUsageResult& WithSnowballsInUse(int value) { SetSnowballsInUse(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSnowballUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_snowballLimit{0};
    bool m_snowballLimitHasBeenSet = false;

    int m_snowballsInUse{0};
    bool m_snowballsInUseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
